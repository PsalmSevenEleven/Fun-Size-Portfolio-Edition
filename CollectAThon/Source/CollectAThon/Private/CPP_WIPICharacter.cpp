// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_WIPICharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/TimelineComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Blueprint/UserWidget.h"
#include "BP_FuncLib_VectorMath.h"
#include "CPP_FunSizeGameInstance.h"
#include "BP_FuncLib_VectorMath.h"
#include "DrawDebugHelpers.h"


// Sets default values
ACPP_WIPICharacter::ACPP_WIPICharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GetCapsuleComponent()->SetCapsuleRadius(42.f);
	GetCapsuleComponent()->SetCapsuleHalfHeight(96.f);

	

	//creating the components

	UpperBodyParent = CreateDefaultSubobject<USceneComponent>("Upper Body Parent");
	UpperBodyParent->SetupAttachment(RootComponent);
	UpperBodyParent->SetRelativeTransform(FTransform(FRotator(0.f, 90.f, 0.f), FVector(0.f, 0.f, -70.f), FVector(0.5f)));

	BodyMesh = CreateDefaultSubobject<USkeletalMeshComponent>("Body Mesh");
	BodyMesh->SetupAttachment(UpperBodyParent);
	BodyMesh->SetRelativeTransform(FTransform(FRotator(0.f, -90.f, 0.f), FVector(0.f, 0.f, 16.64f), FVector(2.f)));

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>("Camera Boom");
	CameraBoom->SetupAttachment(BodyMesh);
	CameraBoom->SetRelativeTransform(FTransform(FRotator(0.f, 90.f, 0.f), FVector(0.f, 0.f, 99.f), FVector(1.f)));
	CameraBoom->TargetArmLength = 0.f;
	CameraBoom->bUsePawnControlRotation = true;

	FollowCamera = CreateDefaultSubobject<UCameraComponent>("Follow Camera");
	FollowCamera->SetupAttachment(CameraBoom, FName("SpringEndpoint"));
	FollowCamera->FieldOfView = 108.f;

	HoldablesPoint = CreateDefaultSubobject<USceneComponent>("Holdables Point");
	
	
	
	
	MagnetMesh = CreateDefaultSubobject<UStaticMeshComponent>("Magnet Mesh");
	MagnetMesh->SetupAttachment(HoldablesPoint);

	PuttyMesh = CreateDefaultSubobject<UStaticMeshComponent>("Putty Mesh");
	PuttyMesh->SetupAttachment(HoldablesPoint);

	PuttySplineOrigin = CreateDefaultSubobject<USceneComponent>("Putty Spline Origin");
	PuttySplineOrigin->SetupAttachment(HoldablesPoint);

	MagSpline = CreateDefaultSubobject<USplineComponent>("Magnet Spline");
	MagSpline->SetupAttachment(HoldablesPoint);

	MagnetPoint = CreateDefaultSubobject<USceneComponent>("Magnet Point");
	MagnetPoint->SetupAttachment(BodyMesh);

	SplinePlayerTangent = CreateDefaultSubobject<USceneComponent>("Spline Player Tangent");
	SplinePlayerTangent->SetupAttachment(MagnetPoint);

	PointLightComp = CreateDefaultSubobject<UPointLightComponent>("Point Light Comp");
	PointLightComp->SetupAttachment(BodyMesh);

	PointLightComp->LightColor = FColor(109.f, 208.f, 255.f);
	PointLightComp->Intensity = 10000.f;
	PointLightComp->AttenuationRadius = 300.f;
	PointLightComp->SourceRadius = 30.f;

	PuttyEnd = CreateDefaultSubobject<UStaticMeshComponent>("Putty End");

	ItemSwapTimeline = CreateDefaultSubobject<UTimelineComponent>("Item Swap Timeline");
	ItemSwapTimeline->SetTimelineLength(0.6f);
	
	ChangePOVTimeline = CreateDefaultSubobject<UTimelineComponent>("POV Change Timeline");
	ChangePOVTimeline->SetTimelineLength(0.5f);

	VerticalVelocityTimeline = CreateDefaultSubobject<UTimelineComponent>("Vertical Velocity Timeline");
	VerticalVelocityTimeline->SetTimelineLength(1.f);

	GrappleMeshTimeline = CreateDefaultSubobject<UTimelineComponent>("Reel in Grapple Mesh Timeline");
	GrappleMeshTimeline->SetTimelineLength(0.15f);
	

	GrappleTickTimeline = CreateDefaultSubobject<UTimelineComponent>("Grapple Tick");
	GrappleTickTimeline->SetTimelineLength(1.f);
	GrappleTickTimeline->SetLooping(true);

}

// Called when the game starts or when spawned
void ACPP_WIPICharacter::BeginPlay()
{
	Super::BeginPlay();

	MagnetMesh->SetVisibility(false);
	PuttyMesh->SetVisibility(false);

	FirstPerson = true;
	ChangePOV(true);

	LastDistanceToGrapplePoint = 2500.f;

	World = GetWorld();

	BodyMesh->DoesSocketExist("Arms_rightSocket") ? HoldablesPoint->AttachToComponent(BodyMesh, FAttachmentTransformRules::SnapToTargetNotIncludingScale,FName("Arms_rightSocket")) : AttachToComponent(BodyMesh, FAttachmentTransformRules::SnapToTargetNotIncludingScale);

	BindTimelineDelegates();
	MaterialInit();
	GameInstanceInit();
	BallSpawn();
	UIInit();
	
	MovementComponent = GetCharacterMovement();
	
}


//NF
void ACPP_WIPICharacter::BindTimelineDelegates()
{

	//the timeline for fading between the magnet and putty meshes that the character is holding
	

	ItemSwapUpdateDelegate = new FOnTimelineFloat();
	ItemSwapMeshSwapDelegate = new FOnTimelineEvent();
	
	ItemSwapUpdateDelegate->BindUFunction(this, FName("SwapItemsUpdate"));
	ItemSwapTimeline->AddInterpFloat(ItemSwapCurve, *ItemSwapUpdateDelegate);

	ItemSwapMeshSwapDelegate->BindUFunction(this, FName("SwapItemsMeshSwap"));
	ItemSwapTimeline->AddEvent(0.3f, *ItemSwapMeshSwapDelegate);
	
	//the timeline for shifting the camera between first and third person perspectives
	ChangePOVUpdateDelegate = new FOnTimelineFloat();
	ChangePOVHideMeshDelegate = new FOnTimelineEvent();
	ChangePOVFinishedDelegate = new FOnTimelineEvent();


	ChangePOVUpdateDelegate->BindUFunction(this, FName("ChangePOVUpdate"));
	ChangePOVTimeline->AddInterpFloat(ChangePOVCurve, *ChangePOVUpdateDelegate);

	ChangePOVHideMeshDelegate->BindUFunction(this, "ChangePOVHideMesh");
	ChangePOVTimeline->AddEvent(0.35f, *ChangePOVHideMeshDelegate);

	ChangePOVFinishedDelegate->BindUFunction(this, "ChangePOVOnFinished");
	ChangePOVTimeline->SetTimelineFinishedFunc(*ChangePOVFinishedDelegate);

	
	//the timeline for controlling the player's vertical velocity during a hover
	VerticalVelocityUpdateDelegate = new FOnTimelineFloat();

	VerticalVelocityUpdateDelegate->BindUFunction(this, "VerticalVelocityUpdate");
	VerticalVelocityTimeline->AddInterpFloat(VerticalVelocityCurve, *VerticalVelocityUpdateDelegate);
	
	//the timeline for reeling in the grapple mesh
	GrappleMeshUpdateDelegate = new FOnTimelineFloat();
	GrappleMeshFinishedDelegate = new FOnTimelineEvent();
	GrappleMeshReverseFinishedDelegate = new FOnTimelineEvent();

	GrappleMeshUpdateDelegate->BindUFunction(this, "GrappleMeshUpdate");
	GrappleMeshTimeline->AddInterpFloat(GrappleMeshCurve, *GrappleMeshUpdateDelegate);
	

	GrappleMeshFinishedDelegate->BindUFunction(this, "GrappleMeshOnFinished");
	GrappleMeshTimeline->AddEvent(0.15f, *GrappleMeshFinishedDelegate);

	GrappleMeshReverseFinishedDelegate->BindUFunction(this, "GrappleMeshReverseFinished");
	GrappleMeshTimeline->AddEvent(0.1f, *GrappleMeshReverseFinishedDelegate);

	//timeline for grapple pseudo-tick
	GrappleTickUpdateDelegate = new FOnTimelineEvent();

	GrappleTickUpdateDelegate->BindUFunction(this, "GrappleTickUpdate");
	GrappleTickTimeline->SetTimelinePostUpdateFunc(*GrappleTickUpdateDelegate);
	
}

void ACPP_WIPICharacter::MaterialInit()
{
	if (MagMatSource)
	{
		MagMat = BodyMesh->CreateDynamicMaterialInstance(0, MagMatSource);
	}

	if (BodyMatSource)
	{
		BodyMat = BodyMesh->CreateDynamicMaterialInstance(0, BodyMatSource);
		BodyMat->SetScalarParameterValue("MirrorVisibilityWitchery", 1.f);
		BodyMat->SetScalarParameterValue("Dist", 150.f);
	}

	if (ScreenMatSource)
	{
		ScreenMat = BodyMesh->CreateDynamicMaterialInstance(1, ScreenMatSource);
		ScreenMat->SetScalarParameterValue("XTile", -0.175f);
		ScreenMat->SetScalarParameterValue("YTile", 0.49f);
	}
	
}

void ACPP_WIPICharacter::GameInstanceInit()
{
	if (Cast<UCPP_FunSizeGameInstance>(UGameplayStatics::GetGameInstance(World)))
	{
		GameInst = Cast<UCPP_FunSizeGameInstance>(UGameplayStatics::GetGameInstance(World));
	}

	if (!GameInst)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("AAAAAAAAAAAAAA Game Instance isn't a CPP_FunSizeGameInstance AAAAAAAAAAAAA"));
	}
}

void ACPP_WIPICharacter::BallSpawn()
{
	if (BallClass)
	{
		const FTransform t = FTransform(FRotator(), UpperBodyParent->GetComponentLocation(),FVector());
		AActor* ball = World->SpawnActor(BallClass, &t, FActorSpawnParameters());
		ball->SetActorScale3D(FVector(0.5f));

		if (BallClass->ImplementsInterface(UBallInterface::StaticClass()))
		{
			IBallInterface::Execute_SetComponentToFollow(ball, this, UpperBodyParent);
		}
	}
}

void ACPP_WIPICharacter::UIInit()
{
	if (HUDWidgetClass)
	{
		HUDWidget = CreateWidget(World, HUDWidgetClass, "HUD");
		HUDWidget->AddToPlayerScreen();
		if (HUDWidgetClass->ImplementsInterface(UHUDInterface::StaticClass()))
		{
			IHUDInterface::Execute_SetWIPI(HUDWidget, this);
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("ye")));
		}
	}
	

	if (Tutorial && TutorialWidgetClass)
	{
		TutorialWidget = CreateWidget(World, TutorialWidgetClass, "Tutorial");
		TutorialWidget->AddToPlayerScreen();

		if (TutorialWidgetClass->ImplementsInterface(UTutorialInterface::StaticClass()))
		{
			ITutorialInterface::Execute_SetPlayer(TutorialWidget, this);
			ITutorialInterface::Execute_StartTutorial(TutorialWidget);
		}
	}
	else
	{
		CanMove = true;
		CanLook = true;
		//call idle timer
		CanChangePOV = true;
	}
}



void ACPP_WIPICharacter::SetMood(float FaceOffset)
{

	BodyMat->SetScalarParameterValue("YTile", FaceOffset);

}




//Ability swapping logic



void ACPP_WIPICharacter::AbilitySwap()
{
	if (CanSwapAbilities)
	{
		switch (CurrentAbility)
		{
			//if the player hasn't picked up any abilities, don't do anything
		case 0:

			break;



			//if the player is using the magnet and has the putty, switch to the putty
		case 1:

			if (Putty)
			{
				CurrentAbility = 2;

				if (LockedPullable)
				{
					//unlock the pullable
					if (LockedPullable->GetClass()->ImplementsInterface(UPullableInterface::StaticClass()))
					{
						//unlock the pullable
						IPullableInterface::Execute_Unlock(LockedPullable);

						//stop the pullable
						IPullableInterface::Execute_StopMoving(LockedPullable);
					}
					
					//set locked pullable to null
					LockedPullable = nullptr;

					//set magnetizing to false
					Magnetizing = false;
				}

				ItemSwapTimeline->Reverse();
			}

			break;



			//if the player is using the putty, they already have the magnet, so switch to the magnet
		case 2:

			CurrentAbility = 1;
			
			if (LockedGrappleable)
			{
				if (LockedGrappleable->GetClass()->ImplementsInterface(UGrappleableInterface::StaticClass()))
				{
					//unlock the grappleable
					IGrappleableInterface::Execute_Unlock(LockedGrappleable);
					
				}
				
				//set locked grappleable to null
				LockedGrappleable = nullptr;

				//call end grapple method

				GrappleEnd();
			}

			ItemSwapTimeline->Play();

			break;


		default:
			break;

		}
	}
}

void ACPP_WIPICharacter::SwapItemsUpdate(float ScaleFactor)
{
	HoldablesPoint->SetRelativeScale3D(FVector(ScaleFactor));
}

void ACPP_WIPICharacter::SwapItemsMeshSwap()
{
	if (ItemSwapTimeline->IsReversing())
	{
		PuttyMesh->SetVisibility(true);
		MagnetMesh->SetVisibility(false);
	}
	else
	{
		PuttyMesh->SetVisibility(false);
		MagnetMesh->SetVisibility(true);
	}
}

void ACPP_WIPICharacter::SetCanSwapAbilities(bool NewValue)
{
	CanSwapAbilities = NewValue;
}



//jumping logic

void ACPP_WIPICharacter::Jump()
{
	if (CanMove)
	{
		Super::Jump();
		
		if (JumpCurrentCount < JumpMaxCount)
		{
			if (JumpCurrentCount > 0)
			{
				if (Jump2 && Jump2Voc)
				{
					UGameplayStatics::SpawnSound2D(this, Jump2);
					UGameplayStatics::SpawnSound2D(this, Jump2Voc);
				}
				
				if (Jump1VocComp)
				{
					Jump1VocComp->FadeOut(0.2f, 0.f, EAudioFaderCurve::Linear);
				}
			}
			else if (Jump1)
			{
				UGameplayStatics::SpawnSound2D(this, Jump1);
				Jump1VocComp = CreateDefaultSubobject<UAudioComponent>("Jump 1 Voice Audio Component");
				Jump1VocComp->Play();
			}
		}
		
	}
}

void ACPP_WIPICharacter::JumpRelease()
{
	StopJumping();
}


//POV shift logic

void ACPP_WIPICharacter::ChangePOV(bool reset)
{
	static bool bThirdPerson = true;
	if (reset)
	{
		bThirdPerson = true;
		return;
	}
	
	if (CanChangePOV)
	{
		CanChangePOV = false;

		if (!bThirdPerson)
		{
			bThirdPerson = true;
			
			//call f to t on the hud
			if (HUDWidgetClass->ImplementsInterface(UHUDInterface::StaticClass()))
			{
				
				IHUDInterface::Execute_TToF(HUDWidget);
				
			}

			//if the tutorial is set to happen, hide the tutorial widget
			if (Tutorial && TutorialWidget)
			{
				TutorialWidget->SetVisibility(ESlateVisibility::Hidden);
			}

			
			//play the cameramove timeline form the start
			ChangePOVTimeline->PlayFromStart();
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::SanitizeFloat(NewArmLength));

		}
		else
		{
			
			bThirdPerson = false;
			
			//call t to f on the hud
			if (HUDWidgetClass->ImplementsInterface(UHUDInterface::StaticClass()))
			{
				IHUDInterface::Execute_FToT(HUDWidget);
				
			}
			//reverse the cameramove timeline from the end
			ChangePOVTimeline->ReverseFromEnd();
		}
	}
}

void ACPP_WIPICharacter::SetCanChangePOV(bool NewValue)
{
	CanChangePOV = NewValue;
}

void ACPP_WIPICharacter::ChangePOVUpdate(float Alpha)
{
	
	CameraBoom->TargetArmLength = UKismetMathLibrary::Lerp(NewArmLength, 0.f, Alpha);
	CameraBoom->SocketOffset = UKismetMathLibrary::VLerp(FVector(200.f, 0.f, 120.f),FVector(0.f), Alpha);
	
}


//nf, technically
void ACPP_WIPICharacter::ChangePOVOnFinished()
{
	
	SetCanChangePOV(true);
	if (ChangePOVTimeline->IsReversing() && !POVTutComplete && TutorialWidget)
	{
		CanMove = false; 
		UGameplayStatics::SpawnSound2D(this, ItemSound);
		//call idle timer function
		

		//call show alert on hud
		if (HUDWidgetClass->ImplementsInterface(UHUDInterface::StaticClass()))
		{
			IHUDInterface::Execute_ShowAlert(HUDWidget);
		}
	}
	else if(!POVTutComplete && TutorialWidget)
	{

		POVTutComplete = true;

		//call pov passed on tut widget
		if (TutorialWidgetClass->ImplementsInterface(UTutorialInterface::StaticClass()))
		{
			ITutorialInterface::Execute_POVPassed(TutorialWidget);
		}

		//set tut widget to visible
		TutorialWidget->SetVisibility(ESlateVisibility::Visible);
		CanMove = true;
	}

	
}

void ACPP_WIPICharacter::ChangePOVHideMesh()
{
	
	BodyMat->SetScalarParameterValue(FName("MirrorVisibilityWitchery"), (ChangePOVTimeline->IsReversing()) ? 0:1);
	NewArmLength = (ChangePOVTimeline->IsReversing()) ? 600.f : 0.f;
	
	FirstPerson = !ChangePOVTimeline->IsReversing();

}





void ACPP_WIPICharacter::PrimaryAction()
{
	if (YeetHeldYeetable())
	{
		return;
	}
	else
	{
		
		switch (CurrentAbility)
		{
		case 0:

			break;

		case 1:
			
			MagPullStart();
			break;

		case 2:
			//call effort
			//call tarzan noises
			GrappleSwingStart();
			break;

		default:
			break;
		}
	}


}

bool ACPP_WIPICharacter::YeetHeldYeetable()
{
	if (ThrowableHeld)
	{
		UClass* aClass = IThrowingInterface::Execute_GetProjectileClass(ThrowableHeld);
		
		FVector loc = HoldablesPoint->GetComponentLocation();
		FRotator rot = FollowCamera->GetComponentRotation();
		
		AActor* projectile = World->SpawnActor(
			aClass, 
			&loc, 
			&rot, 
			FActorSpawnParameters()
		);

		IThrowingInterface::Execute_SetActorClass(projectile, ThrowableHeld->StaticClass());

		ThrowableHeld->Destroy();
		ThrowableHeld = nullptr;

		return true;
	}
	else
	{
		return false;
	}
}


//nf
void ACPP_WIPICharacter::MagPullStart()
{
	if (LockedPullable)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, "aw yis");
		IPullableInterface::Execute_MoveTo(LockedPullable);

		//set WIPi's face to strained expression
		SetMood(0.14f);

		Magnetizing = true;
		Pulling = true;

		MagMat->SetScalarParameterValue("Speed", -0.2f);
		MagMat->SetVectorParameterValue("Color", FLinearColor(0.16f, 1.f, 0.f, 1.f));

		//do sound stuff
	}
}

void ACPP_WIPICharacter::GrappleSwingStart()
{
	CanEndGrapple = true;

	if (GrappledPoint)
	{
		GrappleMeshTimeline->Play();
	}

	
	if (Putty && !MovementComponent->IsMovingOnGround() && !Grappling &&  LockedGrappleable)
	{
		
		//call effort
		PuttySpline = NewObject<USplineComponent>(this);
		PuttySpline->RegisterComponent();
		
		NewArmLength = 1200.f;
		GrappledPoint = LockedGrappleable;
	
		GrappleLoc = IGrappleableInterface::Execute_GetGrappleLoc(LockedGrappleable);

		DistanceFromGrapplePoint = UKismetMathLibrary::Vector_Distance(GetActorLocation(), IGrappleableInterface::Execute_GetGrappleLoc(GrappledPoint));
			
		
		Grappling = true;
		Putty = false;

		GrappleTickTimeline->Play();
		
	}
}

void ACPP_WIPICharacter::GrappleLaunchStart()
{
	if (Putty && !Grappling && LockedGrappleable)
	{
		Putty = false;
		Grappling = true;
		GrappleLaunching = true;

		if (LockedGrappleable->StaticClass()->ImplementsInterface(UGrappleableInterface::StaticClass()))
		{
			GrappledPoint = LockedGrappleable;
			GrappleLoc = IGrappleableInterface::Execute_GetGrappleLoc(LockedGrappleable);
		}
		if (PuttySpline)
		{
			PuttySpline->DestroyComponent();
		}

		//call destroy putty spline meshes

		PuttySpline = CreateDefaultSubobject<USplineComponent>("Putty Spline");

		//call tarzan noises

		if (GrappledPoint)
		{
			GrappleMeshTimeline->Play();
		}

		LaunchCharacter(FVector(0.f, 0.f, 500.f), false, true);

		World->GetTimerManager().SetTimer(GrappleLaunchDelayTimer, this, &ACPP_WIPICharacter::GrappleLaunch, 0.2f, false);

	}
}

void ACPP_WIPICharacter::GrappleLaunch()
{
	if (Putty && !Grappling && LockedGrappleable)
	{
		GrappledPoint = LockedGrappleable;
		Putty = false;
		Grappling = true;
		GrappleLaunching = true;

		GrappleLoc = IGrappleableInterface::Execute_GetGrappleLoc(LockedGrappleable);
		if (PuttySpline)
		{
			PuttySpline->DestroyComponent();
			PuttySpline = nullptr;

		}
		DestroySplineMeshes();

		PuttySpline = NewObject<USplineComponent>(this);
		PuttySpline->RegisterComponent();

		if (GrappledPoint)
		{
			GrappleMeshTimeline->Play();
		}

		LaunchCharacter(FVector(0.f, 0.f, 500.f), false, true);

		SetMood(0.14f);

		FTimerHandle handle = FTimerHandle();

		World->GetTimerManager().SetTimer(handle, FTimerDelegate::CreateLambda(
			[&] {LaunchCharacter(FVector((IGrappleableInterface::Execute_GetGrappleLoc(GrappledPoint) - GetActorLocation()) * 2.5), true, true); 
		NewArmLength = 1200.f; }
		), 
			0.2f, 
			false);
	}
}




void ACPP_WIPICharacter::GrappleMeshUpdate(float Alpha)
{
	GrappleSplineEnd = UKismetMathLibrary::VLerp(
		PuttySplineOrigin->GetComponentLocation(), 
		GrappledPoint->GetActorLocation(), 
		Alpha
	);
}

//nf
void ACPP_WIPICharacter::GrappleMeshOnFinished()
{
	
	
	if(!GrappleMeshTimeline->IsReversing())
	{
		
		//play splat at grapple loc
	}
}

void ACPP_WIPICharacter::GrappleMeshReverseFinished()
{
	if (GrappleMeshTimeline->IsReversing())
	{
		
		if (PuttySpline)
		{
			PuttySpline->DestroyComponent();
			PuttySpline = nullptr;
		}

		//call destroy putty spline meshes
		DestroySplineMeshes();
	}
}

void ACPP_WIPICharacter::GrappleTickUpdate()
{
	if (Grappling)
	{
		FVector grapPoint = IGrappleableInterface::Execute_GetGrappleLoc(GrappledPoint);

		FVector playerToGrappledPoint = GetActorLocation() - grapPoint;

		FVector force = 
			UKismetMathLibrary::Normal(playerToGrappledPoint) * 
			UKismetMathLibrary::Dot_VectorVector(GetVelocity(), playerToGrappledPoint ) * 
			-1.f;

		MovementComponent->AddForce(force);

		MovementComponent->AirControl = 1.f;
		if (DistanceFromGrapplePoint < UKismetMathLibrary::Vector_Distance(GetActorLocation(), grapPoint))
		{
			SetActorLocation(UBP_FuncLib_VectorMath::VectorAtDistanceOnLine(grapPoint, GetActorLocation(), DistanceFromGrapplePoint));
		}

		DrawPuttyMeshes();
	}
	else
	{
		GrappleTickTimeline->Stop();
	}
	
}





void ACPP_WIPICharacter::PrimaryActionEnd()
{
	switch (CurrentAbility)
	{
	case 0:
		break;

	case 1:

		Pulling = false;
		MagPullEnd();
		break;

	case 2:
		if (Grappling)
		{
			//call end grapple
			GrappleEnd();
			break;
		}
	default:
		break;
	}
	
}

//nf
void ACPP_WIPICharacter::MagPullEnd()
{
	if (LockedPullable)
	{
		if (Pushing)
		{
			IPullableInterface::Execute_StopMoving(LockedPullable);
			MagPushStart();
		}
		else
		{
			IPullableInterface::Execute_StopMoving(LockedPullable);

			//set WIPi's face to default dubious expression
			SetMood(0.49f);

			Magnetizing = false;

			//sound stuff
		}
	}
}

//nf
void ACPP_WIPICharacter::GrappleEnd()
{
	if (CanEndGrapple)
	{
		Grappling = false;
		MovementComponent->AirControl = 0.5f;
		NewArmLength = 600.f;

		//set WIPi's face to default dubious expression
		SetMood(0.49f);

		if (GrappledPoint)
		{
			GrappleMeshTimeline->Reverse();
		}

		FTimerHandle handle = FTimerHandle();

		World->GetTimerManager().SetTimer(handle, FTimerDelegate::CreateLambda([&] {Putty = true; }), 0.5f, false);

		CanEndGrapple = false;
	}
}




void ACPP_WIPICharacter::SecondaryAction()
{
	switch (CurrentAbility)
	{
	case 0:
		break;

	case 1:

		MagPushStart();
		break;

	case 2:

		GrappleLaunch();
		break;

	default:
		break;

	}

}

//nf
void ACPP_WIPICharacter::MagPushStart()
{
	if (LockedPullable)
	{
		IPullableInterface::Execute_MoveAway(LockedPullable);

		//set WIPi's face to strained expression
		SetMood(0.14f);

		Magnetizing = true;
		Pushing = true;

		MagMat->SetScalarParameterValue("Speed", 0.2f);
		MagMat->SetVectorParameterValue("Color", FLinearColor(1.f, 0.16f, 0.f, 1.f));

		// do sound stuff
	}
}



void ACPP_WIPICharacter::SecondaryActionEnd()
{
	switch (CurrentAbility)
	{
	case 0:
		break;

	case 1:

		Pushing = false;
		MagPushEnd();
		break;

	case 2:
		break;
		
	default:
		break;
		
	}
}

//nf
void ACPP_WIPICharacter::MagPushEnd()
{
	if (LockedPullable)
	{
		if (Pulling)
		{
			IPullableInterface::Execute_StopMoving(LockedPullable);
			MagPullStart();
		}
		else
		{
			IPullableInterface::Execute_StopMoving(LockedPullable);

			//set WIPi's face to default dubious expression
			SetMood(0.49f);

			Magnetizing = false;

			//sound stuff
		}
	}

}

void ACPP_WIPICharacter::StopMagnetizing()
{
	LockedPullable = nullptr;
	Pushing = false;
	Pulling = false;
	SetMood(0.49f);
	Magnetizing = false;
}



//spline mesh methods
void ACPP_WIPICharacter::DestroySplineMeshes()
{
	
	for (int i = 0; i < SplineMeshes.Num(); i++)
	{
		SplineMeshes[i]->DestroyComponent();
		
	}
	SplineMeshes.Empty();
}

void ACPP_WIPICharacter::DrawMagnetMeshes()
{

	DestroySplineMeshes();

	if (Magnetizing)
	{
		
		for (int i = 0; i < UKismetMathLibrary::FTrunc(MagSpline->GetSplineLength() / 200); i++)
		{
			USplineMeshComponent* newMesh = NewObject<USplineMeshComponent>(this);
			newMesh->RegisterComponent();
			
			newMesh->SetMobility(EComponentMobility::Movable);
			newMesh->SetStaticMesh(MagnetSplineMesh);

			SplineMeshes.Add(newMesh);

			newMesh->SetStartAndEnd(
				MagSpline->GetLocationAtDistanceAlongSpline(i * 200, ESplineCoordinateSpace::World),
				UKismetMathLibrary::ClampVectorSize(MagSpline->GetTangentAtDistanceAlongSpline(i * 200, ESplineCoordinateSpace::World), 0.f, 100.f),
				MagSpline->GetLocationAtDistanceAlongSpline((i+1) * 200, ESplineCoordinateSpace::World),
				UKismetMathLibrary::ClampVectorSize(MagSpline->GetTangentAtDistanceAlongSpline((i+1) * 200, ESplineCoordinateSpace::World), 0.f, 100.f), 
				true
				);

			
			newMesh->SetMaterial(0, MagMat);
			newMesh->SetForwardAxis(ESplineMeshAxis::Z, true);

			newMesh->SetStartScale(FVector2D(2.f));
			newMesh->SetEndScale(FVector2D(2.f));

			
		}
	}
	
}

void ACPP_WIPICharacter::DrawPuttyMeshes()
{
	
	if (PuttySpline)
	{
		

		FOccluderVertexArray points;
		points.Add(PuttySplineOrigin->GetComponentLocation());
		points.Add(GrappleSplineEnd);


		PuttySpline->SetSplinePoints(points, ESplineCoordinateSpace::World, true);


		DestroySplineMeshes();

		for (int i = 0; i < UKismetMathLibrary::FTrunc(PuttySpline->GetSplineLength() / 100); i++)
		{
			USplineMeshComponent* newMesh = NewObject<USplineMeshComponent>(this);
			newMesh->RegisterComponent();

			newMesh->SetMobility(EComponentMobility::Movable);
			newMesh->SetStaticMesh(PuttySplineMesh);

			SplineMeshes.Add(newMesh);

			newMesh->SetStartAndEnd(
				PuttySpline->GetLocationAtDistanceAlongSpline(i * 100, ESplineCoordinateSpace::World),
				UKismetMathLibrary::ClampVectorSize(PuttySpline->GetTangentAtDistanceAlongSpline(i * 100, ESplineCoordinateSpace::World), 0.f, 100.f),
				PuttySpline->GetLocationAtDistanceAlongSpline((i + 1) * 100, ESplineCoordinateSpace::World),
				UKismetMathLibrary::ClampVectorSize(PuttySpline->GetTangentAtDistanceAlongSpline((i + 1) * 100, ESplineCoordinateSpace::World), 0.f, 100.f)
			);

			newMesh->SetMaterial(0, PuttyMat);
			

		}
	}
	
}



void ACPP_WIPICharacter::MenuBack()
{
	if (UGameplayStatics::IsGamePaused(World) && PauseMenuWidgetClass->ImplementsInterface(UPauseMenuInterface::StaticClass()))
	{
		IPauseMenuInterface::Execute_Back(PauseMenuWidget);
	}

}

//mouse camera input

void ACPP_WIPICharacter::MouseTurn(float axis)
{
	if (CanLook)
	{
		AddControllerYawInput(axis);

		if (UKismetMathLibrary::Abs(axis) > 0 && !LookTutComplete)
		{
			LookTutComplete = true;
			//call look passed on tut
			if (TutorialWidgetClass->ImplementsInterface(UTutorialInterface::StaticClass()))
			{
				ITutorialInterface::Execute_LookPassed(TutorialWidget);
			}

		}
	}
}

void ACPP_WIPICharacter::MouseLookUp(float axis)
{
	if (CanLook)
	{
		AddControllerPitchInput(axis);

		if (UKismetMathLibrary::Abs(axis) > 0 && !LookTutComplete)
		{
			LookTutComplete = true;
			//call look passed on tut
			if (TutorialWidgetClass->ImplementsInterface(UTutorialInterface::StaticClass()))
			{
				ITutorialInterface::Execute_LookPassed(TutorialWidget);
			}
		}
	}
}

//gamepad camera input

void ACPP_WIPICharacter::GamepadTurn(float axis)
{
	if (CanLook)
	{
		AddControllerYawInput(axis*BaseTurnRate* World->GetDeltaSeconds());

		if (UKismetMathLibrary::Abs(axis) > 0 && !LookTutComplete)
		{
			LookTutComplete = true;
			//call look passed on tut
			if (TutorialWidgetClass->ImplementsInterface(UTutorialInterface::StaticClass()))
			{
				ITutorialInterface::Execute_LookPassed(TutorialWidget);
			}
		}
	}
}

void ACPP_WIPICharacter::GamepadLookUp(float axis)
{
	if (CanLook)
	{
		AddControllerPitchInput(axis * BaseTurnRate * World->GetDeltaSeconds());

		if (UKismetMathLibrary::Abs(axis) > 0 && !LookTutComplete)
		{
			LookTutComplete = true;
			//call look passed on tut
			if (TutorialWidgetClass->ImplementsInterface(UTutorialInterface::StaticClass()))
			{
				ITutorialInterface::Execute_LookPassed(TutorialWidget);
			}
		}
	}
}

void ACPP_WIPICharacter::MoveForward(float axis)
{
	if (CanMove)
	{
		AddMovementInput(
			UKismetMathLibrary::GetForwardVector(
				UKismetMathLibrary::MakeRotator(0.f, 0.f, GetControlRotation().Yaw)),
			axis);

		if (!MoveTutComplete && UKismetMathLibrary::Abs(axis > 0))
		{
			MoveTutComplete = true;
			//call move passed on tut
			if (TutorialWidgetClass->ImplementsInterface(UTutorialInterface::StaticClass()))
			{
				ITutorialInterface::Execute_MovePassed(TutorialWidget);
			}
		}
	}
}

void ACPP_WIPICharacter::MoveRight(float axis)
{
	if (CanMove)
	{
		AddMovementInput(
			UKismetMathLibrary::GetRightVector(
				UKismetMathLibrary::MakeRotator(0.f, 0.f, GetControlRotation().Yaw)),
			axis);

		if (!MoveTutComplete && UKismetMathLibrary::Abs(axis > 0))
		{
			MoveTutComplete = true;
			//call move passed on tut
			if (TutorialWidgetClass->ImplementsInterface(UTutorialInterface::StaticClass()))
			{
				ITutorialInterface::Execute_MovePassed(TutorialWidget);
			}
		}
	}
}



void ACPP_WIPICharacter::GamepadInput(bool bReset)
{
	static bool bIsGamepad = true;

	if (bReset)
	{
		bIsGamepad = true;
		return;
	}

	if (bIsGamepad)
	{
		GameInst->Gamepad();
		bIsGamepad = false; 
		KeyboardInput(true);
	}
}

void ACPP_WIPICharacter::KeyboardInput(bool bReset)
{
	static bool bIsKeyboard = true;

	if (bReset)
	{
		bIsKeyboard = true;
		return;
	}

	if (bIsKeyboard)
	{
		GameInst->Keyboard();
		bIsKeyboard = false;
		KeyboardInput(true);
	}
}

void ACPP_WIPICharacter::GetMagnet()
{
	ItemSwapTimeline->SetNewTime(0.3f);
	ItemSwapTimeline->Play();
}

//nf
void ACPP_WIPICharacter::Pause()
{
	APlayerController* player = UGameplayStatics::GetPlayerController(GetWorld(), 0);

	if (PauseMenuWidget)
	{
		//call fade out on the pause menu
		UGameplayStatics::SetGamePaused(World, true);

		

		player->SetInputMode(FInputModeGameOnly());
		player->bShowMouseCursor = false;

		UGameplayStatics::SetGlobalTimeDilation(World, 1.f);

		//play the pauseaudio timeline

	}
	else 
	{
		PauseMenuWidget = CreateWidget(UGameplayStatics::GetPlayerController(GetWorld(), 0), PauseMenuWidgetClass, "Pause Menu");
		PauseMenuWidget->AddToViewport();
		//call fade in on the pause menu widget

		player->SetInputMode(FInputModeGameAndUI());
		player->bShowMouseCursor = true;

		UGameplayStatics::SetGlobalTimeDilation(World, 0.f);

		//reverse the pause audio timeline

		UGameplayStatics::SetGamePaused(World, true);
	}
}

//nf
void ACPP_WIPICharacter::WindPress()
{
	if (MovementComponent->IsMovingOnGround() && HasWind)
	{
		if (CanWind)
		{
			//call Wind() on HUD
			IHUDInterface::Execute_Wind(HUDWidget);
			
			
			Winding = true;
			CanMove = false;

			GetWorld()->GetTimerManager().SetTimer(WindTimer, this, &ACPP_WIPICharacter::Zoom, WindTime, false);

			if (WindSound)
			{
				WindSoundComp = UGameplayStatics::CreateSound2D(this, WindSound);
				WindSoundComp->Play();
			}
			

			//Call Effort() method
			SetMood(0.14f);
		}
	}
	else if (CanHover)
	{
		MovementComponent->GravityScale = 0.1f;
		MovementComponent->AirControl = 5.f;
		VerticalVelocityTimeline->PlayFromStart();

		SetMood(0.14f);

		FTimerHandle handle = FTimerHandle();
		World->GetTimerManager().SetTimer(handle, FTimerDelegate::CreateLambda([&] {MovementComponent->GravityScale = 1.f;
		MovementComponent->AirControl = 0.5f;
		CanHover = false;
		SetMood(0.49f); }), Hovertime, false);
	}
}

void ACPP_WIPICharacter::VerticalVelocityUpdate(float Alpha)
{

	MovementComponent->Velocity = FVector(
		MovementComponent->Velocity.X, 
		MovementComponent->Velocity.Y, 
		UKismetMathLibrary::Lerp(MovementComponent->Velocity.Z, UKismetMathLibrary::Clamp(MovementComponent->Velocity.Z + 20.f, -50.f, 50.f), Alpha));
}


//nf
void ACPP_WIPICharacter::WindRelease()
{
	if (MovementComponent->IsMovingOnGround() && HasWind)
	{
		if (GetWorld()->GetTimerManager().IsTimerActive(WindTimer))
		{
			GetWorld()->GetTimerManager().ClearTimer(WindTimer);

			CanMove = true;

			if (HUDWidgetClass->ImplementsInterface(UHUDInterface::StaticClass()))
			{
				IHUDInterface::Execute_StopWinding(HUDWidget);
			}

			if (WindSoundComp)
			{
				WindSoundComp->Stop();
			}
			

			Winding = false;

			//call default method on self
		}
	}
	else
	{
		VerticalVelocityTimeline->Stop();
		if (CanHover)
		{
			
			MovementComponent->GravityScale = 1.f;
			MovementComponent->AirControl = 0.5f;
			CanHover = false; 
			//call default method on self
		}
	}
}



//winding methods

void ACPP_WIPICharacter::Landed(const FHitResult& Hit)
{
	
	GrappleEnd();
	if (HasHover)
	{
		CanHover = true;
	}
}

void ACPP_WIPICharacter::Zoom()
{
	//call stop winding on the hud
	IHUDInterface::Execute_StopWinding(HUDWidget);
	

	CanWind = false;
	Winding = false;
	CanMove = true;
	Wound = true;

	MovementComponent->MaxWalkSpeed = WoundSpeed;
	MovementComponent->MaxAcceleration = WoundSpeed;
	MovementComponent->BrakingDecelerationWalking = WoundSpeed;

	GetWorld()->GetTimerManager().SetTimer(ZoomCountDownTimer, this, &ACPP_WIPICharacter::ZoomCountdown, WoundDuration, false);
	if (ZoomSound)
	{
		ZoomSoundComp = UGameplayStatics::CreateSound2D(this, ZoomSound);
		ZoomSoundComp->Play();
	}
	

	if (WindSoundComp)
	{
		WindSoundComp->FadeOut(0.2f, 0.f);
	}
}

void ACPP_WIPICharacter::ZoomCountdown()
{
	Wound = false;
	GetWorld()->GetTimerManager().SetTimer(WindDownTimer, this, &ACPP_WIPICharacter::WindTimerEnd, 1.f, false);
}

void ACPP_WIPICharacter::WindTimerEnd()
{
	LerpToNormalSpeed(true);

	CanWind = true;
	if (ZoomSoundComp)
	{
		ZoomSoundComp->FadeOut(1.f, 0.f, EAudioFaderCurve::Logarithmic);
	}

	UGameplayStatics::PlaySound2D(this, ZoomRecoverSound);
}





// Called every frame
void ACPP_WIPICharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	
	CamBoomLength();

	LightBrightness();

	SendMaterialCameraLocation();

	switch(CurrentAbility)
	{
	case 0:
		break;

	case 1:

		

		//check closest mag lock
		CheckClosestMagLock();

		//handle spline
		HandleSpline();

		//draw magnet meshes
		DrawMagnetMeshes();

		break;

	case 2:
		//check closest grapple lock
		CheckClosestGrappleLock();

		//end grapple launch check
		CheckGrappleEnd();

		//putty end loc
		SetPuttyEndLoc();

		//draw putty meshes
		DrawPuttyMeshes();

		

		break;

	default:
		break;
	}

	//rotate upper body
	RotateUpperBody();

	//lerp to normal speed
	LerpToNormalSpeed(false);

}

void ACPP_WIPICharacter::CamBoomLength()
{
	if (!FirstPerson)
	{
		CameraBoom->TargetArmLength =
			UKismetMathLibrary::FInterpTo_Constant(
				CameraBoom->TargetArmLength,
				NewArmLength,
				World->GetDeltaSeconds(),
				500.f);
	}
}

void ACPP_WIPICharacter::LightBrightness()
{
	PointLightComp->SetIntensity(
		UKismetMathLibrary::Ease(
			0.f, 
			10000.f, 
			UKismetMathLibrary::Clamp(FVector2D(
				GetVelocity().X, 
				GetVelocity().Y
			).Size(),
			0.f,
			600.f) /
			MovementComponent->MaxWalkSpeed,
			EEasingFunc::EaseInOut, 
			2.f)
	);
}

void ACPP_WIPICharacter::SendMaterialCameraLocation()
{
	if (BodyMat)
	{
		BodyMat->SetVectorParameterValue(FName("Location"), FLinearColor(FollowCamera->GetComponentLocation()));
	}
	
}

void ACPP_WIPICharacter::CheckClosestMagLock()
{
	if (!Magnetizing)
	{
		
		LastLockAngle = 180;
		SwitchedLock = false;

		for (int i = 0; i<AvailablePullables.Num(); i++)
		{
			bool bSetSwitchedLock = true;
			if (LockedPullable)
			{
				
				if (
					(AvailablePullables[i] != LockedPullable) && 
					(UBP_FuncLib_VectorMath::GetAngleBetweenVectors(
						IPullableInterface::Execute_GetMagLoc(AvailablePullables[i]),
						FollowCamera->GetForwardVector() + FollowCamera->GetComponentLocation(), 
						FollowCamera->GetComponentLocation()
						) < LastLockAngle
					)
				)
				{
					
					IPullableInterface::Execute_Unlock(LockedPullable);
				}
				else
				{
					bSetSwitchedLock = false;
				}
			}

			if (bSetSwitchedLock || !LockedPullable)
			{
				LastLockAngle = UBP_FuncLib_VectorMath::GetAngleBetweenVectors(
					IPullableInterface::Execute_GetMagLoc(AvailablePullables[i]),
					FollowCamera->GetForwardVector() + FollowCamera->GetComponentLocation(),
					FollowCamera->GetComponentLocation()
				);

				LockedPullable = AvailablePullables[i];
				SwitchedLock = true;
			}
			
		}

		if (LockedPullable && SwitchedLock)
		{
			IPullableInterface::Execute_Lock(LockedPullable);
			
		}
	}
	
}

void ACPP_WIPICharacter::HandleSpline()
{
	if (LockedPullable)
	{
		MagnetPoint->SetWorldRotation(FollowCamera->GetComponentRotation());

		SplinePlayerTangent->SetRelativeLocation(
			FVector(
				UKismetMathLibrary::Vector_Distance(
					IPullableInterface::Execute_GetMagLoc(LockedPullable), 
					MagnetPoint->GetComponentLocation()
				) / 2.f, 
				0.f, 
				0.f)
		);

		MagSpline->SetLocationAtSplinePoint(1, SplinePlayerTangent->GetComponentLocation(), ESplineCoordinateSpace::World, true);
		MagSpline->SetLocationAtSplinePoint(2, IPullableInterface::Execute_GetMagLoc(LockedPullable), ESplineCoordinateSpace::World, true);
	}
}



void ACPP_WIPICharacter::CheckClosestGrappleLock()
{
		LastLockAngle = 180;
		SwitchedLock = false;

		
		for (int i = 0; i < AvailableGrappleables.Num(); i++)
		{
			
			bool bSetSwitchedLock = true;
			if (LockedGrappleable)
			{
				
				if (
					(AvailableGrappleables[i] != LockedGrappleable) &&
					(UBP_FuncLib_VectorMath::GetAngleBetweenVectors(
						IGrappleableInterface::Execute_GetGrappleLoc(AvailableGrappleables[i]),
						FollowCamera->GetForwardVector() + FollowCamera->GetComponentLocation(),
						FollowCamera->GetComponentLocation()
					) < LastLockAngle
						)
					)
				{
					IGrappleableInterface::Execute_Unlock(LockedGrappleable);
				}
				else
				{

					bSetSwitchedLock = false;
				}

			}

			if (bSetSwitchedLock || !LockedGrappleable)
			{
				LastLockAngle = UBP_FuncLib_VectorMath::GetAngleBetweenVectors(
					IGrappleableInterface::Execute_GetGrappleLoc(AvailableGrappleables[i]),
					FollowCamera->GetForwardVector() + FollowCamera->GetComponentLocation(),
					FollowCamera->GetComponentLocation()
				);

				LockedGrappleable = AvailableGrappleables[i];
				SwitchedLock = true;

			}

		}

		if (LockedGrappleable && SwitchedLock)
		{
			
			IGrappleableInterface::Execute_Lock(LockedGrappleable);
		}
	
}

//nf
void ACPP_WIPICharacter::CheckGrappleEnd()
{
	static bool doTimer = true;

	static bool canStop = false;


	if (GrappleLaunching)
	{
		if (doTimer)
		{
			FTimerHandle handle = FTimerHandle();
			doTimer = false;
			World->GetTimerManager().SetTimer(handle, FTimerDelegate::CreateLambda([]{canStop = true;}), 0.3f, false);
		}
		else if(canStop)
		{
			float dist = UKismetMathLibrary::Vector_Distance(GetActorLocation(), GrappleLoc);

			if ( dist <= 300.f || dist >= LastDistanceToGrapplePoint)
			{
				LaunchCharacter(FVector(0.f, 0.f, 1100.f), true, true);
				NewArmLength = 600.f;
				LastDistanceToGrapplePoint = 5000;
				GrappleLaunching = false;
				Putty = true;
				Grappling = false;
				doTimer = true;
				canStop = false;

				//call Default()

				if (GrappledPoint)
				{
					GrappleMeshTimeline->Reverse();
				}
				
			}
			else
			{
				LastDistanceToGrapplePoint = dist;
			}
		}
	}
}

void ACPP_WIPICharacter::SetPuttyEndLoc()
{
	if (Grappling)
	{

		GrappleSplineEnd = GrappledPoint->GetActorLocation();
		PuttyEnd->SetWorldLocation(GrappleSplineEnd);
		PuttyEnd->SetWorldRotation(UKismetMathLibrary::FindLookAtRotation(GrappleSplineEnd, PuttySplineOrigin->GetComponentLocation()));

	}

	PuttyEnd->SetVisibility(Grappling);
	PuttyMesh->SetStaticMesh(Grappling ? PuttyItemMesh : PuttyStretchedMesh);
}


void ACPP_WIPICharacter::RotateUpperBody()
{
	static FVector lastVelocity = FVector();

	float alpha = 0.f;
	float ubpxRot;
	float ubpyRot;

	switch (MovementComponent->MovementMode)
	{
	case EMovementMode::MOVE_Walking:

		alpha = UKismetMathLibrary::FClamp(((GetVelocity().Y / (MovementComponent->MaxWalkSpeed*2.f)) + 0.5), 0.f, 1.f);

		 ubpxRot = UKismetMathLibrary::FInterpTo_Constant(
			UpperBodyParent->GetComponentRotation().Roll, 
			UKismetMathLibrary::Ease(-25.f, 25.f, alpha, EEasingFunc::EaseInOut), 
			World->DeltaTimeSeconds, 60.f
		);

		alpha = UKismetMathLibrary::FClamp(((GetVelocity().X / (MovementComponent->MaxWalkSpeed * 2.f)) + 0.5), 0.f, 1.f);

		ubpyRot = UKismetMathLibrary::FInterpTo_Constant(
			UpperBodyParent->GetComponentRotation().Pitch,
			UKismetMathLibrary::Ease(25.f, -25.f, alpha, EEasingFunc::EaseInOut),
			World->DeltaTimeSeconds, 60.f
		);

		UpperBodyParent->SetWorldRotation(FRotator(ubpyRot, 0.f, ubpxRot));

		break;

	case EMovementMode::MOVE_Falling:

		ubpxRot = UKismetMathLibrary::FInterpTo_Constant(UpperBodyParent->GetComponentRotation().Roll, 0.f, World->DeltaTimeSeconds, 60.f);
		ubpyRot = UKismetMathLibrary::FInterpTo_Constant(UpperBodyParent->GetComponentRotation().Pitch, 0.f, World->DeltaTimeSeconds, 60.f);

		UpperBodyParent->SetWorldRotation(FRotator(ubpyRot, 0.f, ubpxRot));

		break;

	default:
		break;
	}

	if (Magnetizing || FirstPerson)
	{
		BodyMesh->SetWorldRotation(
			FRotator( 
				BodyMesh->GetComponentRotation().Pitch, 
				FollowCamera->GetComponentRotation().Yaw, 
				BodyMesh->GetComponentRotation().Roll
			)
		);
	}

	float bmzRot = (Magnetizing || FirstPerson) ? 
		CameraBoom->GetComponentRotation().Yaw - 90 : 
		UKismetMathLibrary::MakeRotFromXZ(
			FVector(
				lastVelocity.X, 
				lastVelocity.Y, 
				0.f
			), 
			UpperBodyParent->GetUpVector()
		).Yaw;

	BodyMesh->SetRelativeRotation(
		UKismetMathLibrary::RInterpTo_Constant(
			FRotator(0.f, BodyMesh->GetRelativeRotation().Yaw, 0.f),
			FRotator(0.f, bmzRot, 0.f),
			World->DeltaTimeSeconds, 
			300.f)
	);

	if (FVector(GetVelocity().X, GetVelocity().Y, 0.f).Size() > 0)
	{
		lastVelocity = FVector(GetVelocity().X, GetVelocity().Y, 0.f);
	}

}

void ACPP_WIPICharacter::LerpToNormalSpeed(bool stop)
{
	static bool bDoLerp = false;

	if (stop)
	{
		bDoLerp = false;
		return;
	}

	if (Wound)
	{
		bDoLerp = true;
		return;
	}

	if (bDoLerp)
	{
		MovementComponent->MaxWalkSpeed = UKismetMathLibrary::Lerp(
			WoundSpeed, 
			NormalSpeed, 
			World->GetTimerManager().GetTimerElapsed(WindDownTimer)
		);

		MovementComponent->MaxAcceleration = MovementComponent->MaxWalkSpeed;
		MovementComponent->BrakingDecelerationWalking = MovementComponent->MaxWalkSpeed;
	}
}





// Called to bind functionality to input
void ACPP_WIPICharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (InputComponent)
	{
		
		FInputActionBinding GamepadBinding = FInputActionBinding(FName("GamepadInput"), IE_Pressed);
		FInputActionHandlerSignature GamepadActionHandler;
		GamepadActionHandler.BindUFunction(this, FName("GamepadInput"), false);
		GamepadBinding.ActionDelegate = GamepadActionHandler;
		InputComponent->AddActionBinding(GamepadBinding);

		FInputActionBinding KeyboardBinding = FInputActionBinding(FName("KeyboardInput"), IE_Pressed);
		FInputActionHandlerSignature KeyboardActionHandler;
		KeyboardActionHandler.BindUFunction(this, FName("KeyboardInput"), false);
		KeyboardBinding.ActionDelegate = KeyboardActionHandler;
		InputComponent->AddActionBinding(KeyboardBinding);
		


		InputComponent->BindAction("Pause", IE_Pressed, this, &ACPP_WIPICharacter::Pause);

		InputComponent->BindAction("Wind", IE_Pressed, this, &ACPP_WIPICharacter::WindPress);
		InputComponent->BindAction("Wind", IE_Released, this, &ACPP_WIPICharacter::WindRelease);

		InputComponent->BindAction("SwapAbilities", IE_Pressed, this, &ACPP_WIPICharacter::AbilitySwap);

		InputComponent->BindAction("Jump", IE_Pressed, this, &ACPP_WIPICharacter::Jump);
		InputComponent->BindAction("Jump", IE_Released, this, &ACPP_WIPICharacter::JumpRelease);

		FInputActionBinding POVBinding = FInputActionBinding(FName("PerspectiveChange"), IE_Pressed);
		FInputActionHandlerSignature POVActionHandler;
		POVActionHandler.BindUFunction(this, FName("ChangePOV"), false);
		POVBinding.ActionDelegate = POVActionHandler;
		InputComponent->AddActionBinding(POVBinding);

		//InputComponent->BindAction("PerspectiveChange", IE_Pressed, this, &ACPP_WIPICharacter::ChangePOV);

		InputComponent->BindAction("PrimaryAction", IE_Pressed, this, &ACPP_WIPICharacter::PrimaryAction);
		InputComponent->BindAction("PrimaryAction", IE_Released, this, &ACPP_WIPICharacter::PrimaryActionEnd);

		InputComponent->BindAction("SecondaryAction", IE_Pressed, this, &ACPP_WIPICharacter::SecondaryAction);
		InputComponent->BindAction("SecondaryAction", IE_Released, this, &ACPP_WIPICharacter::SecondaryActionEnd);

		InputComponent->BindAxis("Turn", this, &ACPP_WIPICharacter::MouseTurn);
		InputComponent->BindAxis("LookUp", this, &ACPP_WIPICharacter::MouseLookUp);

		InputComponent->BindAxis("TurnRate", this, &ACPP_WIPICharacter::GamepadTurn);
		InputComponent->BindAxis("LookUpRate", this, &ACPP_WIPICharacter::GamepadLookUp);

		InputComponent->BindAxis("MoveForward", this, &ACPP_WIPICharacter::MoveForward);
		InputComponent->BindAxis("MoveRight", this, &ACPP_WIPICharacter::MoveRight);

	}
}

void ACPP_WIPICharacter::Detour(bool reset, void(*DoOnce)(), void(*DoElse)())
{
	static bool open = true;

	if (reset)
	{
		open = true;
		return;
	}
	else if(open)
	{
		DoOnce();
		open = false;
		return;
	}
	else 
	{
		DoElse();
		return;
	}
}



