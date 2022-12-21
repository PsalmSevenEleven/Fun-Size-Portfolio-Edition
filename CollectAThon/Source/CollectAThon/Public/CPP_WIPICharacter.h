// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"

//components
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SplineComponent.h"
#include "Components/SplineMeshComponent.h"
#include "Components/PointLightComponent.h"
#include "Components/AudioComponent.h"
#include "Components/TimelineComponent.h"
#include "Components/CapsuleComponent.h"

#include "Blueprint/UserWidget.h"
#include "CPP_FunSizeGameInstance.h"

//interfaces
#include "HUDInterface.h"
#include "TutorialInterface.h"
#include "PauseMenuInterface.h"
#include "PullableInterface.h"
#include "GrappleableInterface.h"
#include "ThrowingInterface.h"
#include "BallInterface.h"

#include "CPP_WIPICharacter.generated.h"





UCLASS()
class COLLECTATHON_API ACPP_WIPICharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACPP_WIPICharacter();
	
	//declaring all of the components

	//this is a scene component that will determine the upper body's rotation
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Components")
		USceneComponent* UpperBodyParent;

	//main skeletal mesh; is attached to UpperBodyParent
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Components")
		USkeletalMeshComponent* BodyMesh;


	//camera boom
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Components")
		USpringArmComponent* CameraBoom;

	//camera; attached to CamBoom
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Components")
		UCameraComponent* FollowCamera;


	//parent point for the putty and magnet meshes later
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Components")
		USceneComponent* HoldablesPoint;

	//mesh for the magnet that WIPI holds; attached to HoldablesPoint
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Components")
		UStaticMeshComponent* MagnetMesh;

	//mesh for the putty that WIPI holds; attached to HoldablesPoint
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Components")
		UStaticMeshComponent* PuttyMesh;

	//point to use when creating splines for magnet or putty abilities; attached to HoldablesPoint
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Components")
		USceneComponent* PuttySplineOrigin;

	//spline for the magnet ability; attached to HoldablesPoint
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Components")
		USplineComponent* MagSpline;


	//scene component used as an origin reference point for the magnet ability's actual logic/execution
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Components")
		USceneComponent* MagnetPoint;

	//scene component used as a midpoint reference point for the magnet ability's actual logic/execution; attached to MagnetPoint
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Components")
		USceneComponent* SplinePlayerTangent;


	//light used to indicate to the player WIPI's movement and make dark areas easier to navigate
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Components")
		UPointLightComponent* PointLightComp;

	//endpoint of the putty spline
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Components")
		UStaticMeshComponent* PuttyEnd;




	//wind up mechanic variables

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Wind-up Mechanic")
		float WindTime = 2.0f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Wind-up Mechanic")
		float NormalSpeed = 600.0f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Wind-up Mechanic")
		float WoundSpeed = 2000.0f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Wind-up Mechanic")
		float WoundDuration = 3.0f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Wind-up Mechanic")
		bool HasWind = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Wind-up Mechanic")
		bool CanWind = true;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Wind-up Mechanic")
		bool Winding = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Wind-up Mechanic")
		bool Wound = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Wind-up Mechanic")
		bool Key = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Wind-up Mechanic")
		int Gears = 0;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Wind-up Mechanic")
		FTimerHandle WindDownTimer;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Wind-up Mechanic")
		FTimerHandle WindTimer;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Wind-up Mechanic")
		FTimerHandle ZoomCountDownTimer;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Wind-up Mechanic")
		UTimelineComponent* ItemSwapTimeline;

	UPROPERTY(EditAnywhere, Category = "Wind-up Mechanic")
		class UCurveFloat* ItemSwapCurve;


	//hover mechanic variables

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Hover Mechanic")
		float Hovertime = 1.5f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Hover Mechanic")
		bool CanHover;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Hover Mechanic")
		bool HasHover;

	UPROPERTY(VisibleAnywhere, Category = "Hover Mechanic")
		UTimelineComponent* VerticalVelocityTimeline;

	UPROPERTY(EditAnywhere, Category = "Hover Mechanic")
		class UCurveFloat* VerticalVelocityCurve;


	//magnet mechanic variables

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Magnet Mechanic")
		float MagDist = -1.f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Magnet Mechanic")
		AActor* LockedPullable;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Magnet Mechanic")
		TArray<AActor*> AvailablePullables;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Magnet Mechanic")
		bool Magnetizing;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Magnet Mechanic")
		bool Pushing;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Magnet Mechanic")
		bool Pulling;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Magnet Mechanic")
		bool SwitchedMagnetLock;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Magnet Mechanic")
		UMaterialInstanceDynamic* MagMat;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "MagnetMechanic")
		UMaterialInterface* MagMatSource;


	//grapple mechanic variables

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Grapple Mechanic")
		FVector GrappleLoc;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Grapple Mechanic")
		FVector GrappleSplineEnd;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Grapple Mechanic")
		bool Putty;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Grapple Mechanic")
		bool GrappleLaunching;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Grapple Mechanic")
		bool Grappling;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Grapple Mechanic")
		bool CanEndGrapple;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Grapple Mechanic")
		TArray<AActor*> AvailableGrappleables;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Grapple Mechanic")
		AActor* GrappledPoint;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Grapple Mechanic")
		AActor* LockedGrappleable;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Grapple Mechanic")
		float GrappleDist;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Grapple Mechanic")
		float DistanceFromGrapplePoint;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Grapple Mechanic")
		float LastDistanceToGrapplePoint;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Grapple Mechanic")
		TArray<USplineMeshComponent*> PuttySplineMeshes ;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Grapple Mechanic")
		UMaterialInterface* PuttyMat;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Grapple Mechanic")
		USplineComponent* PuttySpline;

	UPROPERTY(VisibleAnywhere, Category = "Grapple Mechanic")
		UTimelineComponent* GrappleMeshTimeline;

	UPROPERTY(EditAnywhere, Category = "Grapple Mechanic")
		class UCurveFloat* GrappleMeshCurve;

	UPROPERTY(VisibleAnywhere, Category = "Grapple Mechanic")
		UTimelineComponent* GrappleTickTimeline;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Grapple Mechanic")
		FTimerHandle GrappleLaunchDelayTimer;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Grapple Mechanic")
		UStaticMesh* PuttyItemMesh;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Grapple Mechanic")
		UStaticMesh* PuttyStretchedMesh;


	//POV shift variables

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "POV Shift Mechanic")
		float NewArmLength;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "POV Shift Mechanic")
		float TempArmLength;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "POV Shift Mechanic")
		bool FirstPerson;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "POV Shift Mechanic")
		bool CanChangePOV;
	
	void SetCanChangePOV(bool NewValue);

	UPROPERTY(VisibleAnywhere, Category = "Wind-up Mechanic")
		UTimelineComponent* ChangePOVTimeline;

	UPROPERTY(EditAnywhere, Category = "Wind-up Mechanic")
		class UCurveFloat* ChangePOVCurve;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "POV Shift Mechanic")
		bool POVTutComplete;

	//audio variables

	//jump audio
	UPROPERTY(EditAnywhere, Category = "Audio")
		USoundBase* Jump1;

	UPROPERTY(EditAnywhere, Category = "Audio")
		USoundBase* Jump2;

	UPROPERTY(EditAnywhere, Category = "Audio")
		USoundBase* Jump1Voc;

	UPROPERTY(EditAnywhere, Category = "Audio")
		UAudioComponent* Jump1VocComp;

	UPROPERTY(EditAnywhere, Category = "Audio")
		USoundBase* Jump2Voc;


	//winding audio
	UPROPERTY(EditAnywhere, Category = "Audio")
		USoundBase* WindSound;

	UPROPERTY(EditAnywhere, Category = "Audio")
		UAudioComponent* WindSoundComp;

	UPROPERTY(EditAnywhere, Category = "Audio")
		USoundBase* ZoomSound;

	UPROPERTY(EditAnywhere, Category = "Audio")
		UAudioComponent* ZoomSoundComp;

	UPROPERTY(EditAnywhere, Category = "Audio")
		USoundBase* ZoomRecoverSound;

	//item audio
	UPROPERTY(EditAnywhere, Category = "Audio")
		UAudioComponent* ItemSoundComp;

	UPROPERTY(EditAnywhere, Category = "Audio")
		USoundBase* ItemSound;



	//UI variables

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UI")
		TSubclassOf<UUserWidget> HUDWidgetClass;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UI")
		class UUserWidget* HUDWidget;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UI")
		TSubclassOf<UUserWidget> PauseMenuWidgetClass;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UI")
		class UUserWidget* PauseMenuWidget;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UI")
		TSubclassOf<UUserWidget> TutorialWidgetClass;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UI")
		class UUserWidget* TutorialWidget;

	UPROPERTY(VisibleAnywhere, Category = "UI")
		FTimerHandle HideTooltipHandle;


	//Throwing variables

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Throwing")
		AActor* ThrowableHeld;

	//character variables

	UPROPERTY()
		UWorld* World;

	UPROPERTY()
		UCharacterMovementComponent* MovementComponent;

	UPROPERTY(EditAnywhere, Category = "Misc.")
		bool Music;

	UPROPERTY(EditAnywhere, Category = "Misc.")
		bool Tutorial;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Misc.")
		bool CanMove;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Misc.")
		bool MoveTutComplete;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Misc.")
		bool CanLook;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Misc.")
		float BaseTurnRate = 45.f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Misc.")
		float BaseLookUpRate = 45.f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Misc.")
		bool LookTutComplete;


	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Misc.")
		bool CanSwapAbilities;

	void SetCanSwapAbilities(bool NewValue);

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Misc.")
		int CurrentAbility = 0;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Misc")
		UMaterialInstanceDynamic* BodyMat;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Misc")
		UMaterialInterface* BodyMatSource;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Misc")
		UMaterialInstanceDynamic* ScreenMat;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Misc")
		UMaterialInterface* ScreenMatSource;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Misc")
		UCPP_FunSizeGameInstance *GameInst;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Misc")
		UClass* BallClass;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Misc")
		TArray<USplineMeshComponent*> SplineMeshes;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Misc")
		UStaticMesh* MagnetSplineMesh;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Misc")
		UStaticMesh* PuttySplineMesh;



	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Misc")
		float LastLockAngle;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Misc")
		bool SwitchedLock;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Misc")
		TArray<AActor*> AvailableLockables;

	


	FOnTimelineFloat* ItemSwapUpdateDelegate;
	FOnTimelineEvent* ItemSwapMeshSwapDelegate;

	FOnTimelineFloat* ChangePOVUpdateDelegate;
	FOnTimelineEvent* ChangePOVHideMeshDelegate;
	FOnTimelineEvent* ChangePOVFinishedDelegate;

	FOnTimelineFloat* VerticalVelocityUpdateDelegate;

	FOnTimelineFloat* GrappleMeshUpdateDelegate;
	FOnTimelineEvent* GrappleMeshFinishedDelegate;
	FOnTimelineEvent* GrappleMeshReverseFinishedDelegate;

	FOnTimelineEvent* GrappleTickUpdateDelegate;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void MaterialInit();

	void GameInstanceInit();

	void BallSpawn();

	void UIInit();

	
	//mood swapping
	void SetMood(float FaceOffset);


	//input methods
	UFUNCTION()
	void GamepadInput(bool bReset);

	UFUNCTION()
	void KeyboardInput(bool bReset);

	
	
	UFUNCTION(BlueprintCallable)
	void Pause();

	
	void WindPress();

	
	void WindRelease();

	
	void AbilitySwap();

	
	void Jump();

	void JumpRelease();

	UFUNCTION()
	void ChangePOV(bool reset);

	void PrimaryAction();

	void PrimaryActionEnd();

	void SecondaryAction();

	void SecondaryActionEnd();

	void MenuBack();

	void MouseTurn(float axis);

	void MouseLookUp(float axis);

	void GamepadTurn(float axis);

	void GamepadLookUp(float axis);

	void MoveForward(float axis);

	void MoveRight(float axis);


	//primary ability methods

	void MagPullStart();

	void MagPullEnd();

	void MagPushStart();

	void MagPushEnd();

	UFUNCTION(BlueprintCallable)
		void StopMagnetizing();
	

	void GrappleSwingStart();

	void GrappleLaunchStart();

	void GrappleLaunch();

	void GrappleEnd();

	void ReelInGrappleSpline();

	void GrappleSwingReset();

	void GrappleSwingMesh();


	virtual void Landed(const FHitResult& Hit) override;
	//winding methods
	
	void Zoom();

	void ZoomCountdown();

	void WindTimerEnd();



public:

	//timeline-related methods

	void BindTimelineDelegates();

	//item swapping
	UFUNCTION()
	void SwapItemsUpdate(float ScaleFactor);

	UFUNCTION()
		void SwapItemsMeshSwap();

	//POV shift
	UFUNCTION()
		void ChangePOVUpdate(float Alpha);

	UFUNCTION()
		void ChangePOVOnFinished();
	
	UFUNCTION()
		void ChangePOVHideMesh();

	//Throwing
	UFUNCTION()
		bool YeetHeldYeetable();

	//hover vertical velocity

	UFUNCTION()
		void VerticalVelocityUpdate(float Alpha);

	//Grapple meshes

	UFUNCTION()
		void GrappleMeshUpdate(float Alpha);

	UFUNCTION()
		void GrappleMeshOnFinished();

	UFUNCTION()
		void GrappleMeshReverseFinished();

	UFUNCTION()
		void GrappleTickUpdate();



	//Spline Mesh methods

	void DestroySplineMeshes();

	void DrawMagnetMeshes();

	void DrawPuttyMeshes();

	//called when the player collects the magnet
	UFUNCTION(BlueprintCallable)
		void GetMagnet();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//tick-called methods
	void CamBoomLength();

	void LightBrightness();

	void SendMaterialCameraLocation();

	void CheckClosestMagLock();

	void HandleSpline();

	void CheckClosestGrappleLock();

	void CheckGrappleEnd();

	void SetPuttyEndLoc();


	void RotateUpperBody();

	void LerpToNormalSpeed(bool bReset);


	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	//flow control methods

	void Detour(bool reset, void(*DoOnce)(), void(*DoElse)());

};
