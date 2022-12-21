// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CollectAThon/Public/CPP_WIPICharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_WIPICharacter() {}
// Cross Module References
	COLLECTATHON_API UClass* Z_Construct_UClass_ACPP_WIPICharacter_NoRegister();
	COLLECTATHON_API UClass* Z_Construct_UClass_ACPP_WIPICharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_CollectAThon();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COLLECTATHON_API UClass* Z_Construct_UClass_UCPP_FunSizeGameInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTimelineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ACPP_WIPICharacter::execGetMagnet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetMagnet();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_WIPICharacter::execGrappleTickUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GrappleTickUpdate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_WIPICharacter::execGrappleMeshReverseFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GrappleMeshReverseFinished();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_WIPICharacter::execGrappleMeshOnFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GrappleMeshOnFinished();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_WIPICharacter::execGrappleMeshUpdate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Alpha);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GrappleMeshUpdate(Z_Param_Alpha);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_WIPICharacter::execVerticalVelocityUpdate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Alpha);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->VerticalVelocityUpdate(Z_Param_Alpha);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_WIPICharacter::execYeetHeldYeetable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->YeetHeldYeetable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_WIPICharacter::execChangePOVHideMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangePOVHideMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_WIPICharacter::execChangePOVOnFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangePOVOnFinished();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_WIPICharacter::execChangePOVUpdate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Alpha);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangePOVUpdate(Z_Param_Alpha);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_WIPICharacter::execSwapItemsMeshSwap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwapItemsMeshSwap();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_WIPICharacter::execSwapItemsUpdate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScaleFactor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwapItemsUpdate(Z_Param_ScaleFactor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_WIPICharacter::execStopMagnetizing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopMagnetizing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_WIPICharacter::execChangePOV)
	{
		P_GET_UBOOL(Z_Param_reset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangePOV(Z_Param_reset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_WIPICharacter::execPause)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Pause();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_WIPICharacter::execKeyboardInput)
	{
		P_GET_UBOOL(Z_Param_bReset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->KeyboardInput(Z_Param_bReset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_WIPICharacter::execGamepadInput)
	{
		P_GET_UBOOL(Z_Param_bReset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GamepadInput(Z_Param_bReset);
		P_NATIVE_END;
	}
	void ACPP_WIPICharacter::StaticRegisterNativesACPP_WIPICharacter()
	{
		UClass* Class = ACPP_WIPICharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangePOV", &ACPP_WIPICharacter::execChangePOV },
			{ "ChangePOVHideMesh", &ACPP_WIPICharacter::execChangePOVHideMesh },
			{ "ChangePOVOnFinished", &ACPP_WIPICharacter::execChangePOVOnFinished },
			{ "ChangePOVUpdate", &ACPP_WIPICharacter::execChangePOVUpdate },
			{ "GamepadInput", &ACPP_WIPICharacter::execGamepadInput },
			{ "GetMagnet", &ACPP_WIPICharacter::execGetMagnet },
			{ "GrappleMeshOnFinished", &ACPP_WIPICharacter::execGrappleMeshOnFinished },
			{ "GrappleMeshReverseFinished", &ACPP_WIPICharacter::execGrappleMeshReverseFinished },
			{ "GrappleMeshUpdate", &ACPP_WIPICharacter::execGrappleMeshUpdate },
			{ "GrappleTickUpdate", &ACPP_WIPICharacter::execGrappleTickUpdate },
			{ "KeyboardInput", &ACPP_WIPICharacter::execKeyboardInput },
			{ "Pause", &ACPP_WIPICharacter::execPause },
			{ "StopMagnetizing", &ACPP_WIPICharacter::execStopMagnetizing },
			{ "SwapItemsMeshSwap", &ACPP_WIPICharacter::execSwapItemsMeshSwap },
			{ "SwapItemsUpdate", &ACPP_WIPICharacter::execSwapItemsUpdate },
			{ "VerticalVelocityUpdate", &ACPP_WIPICharacter::execVerticalVelocityUpdate },
			{ "YeetHeldYeetable", &ACPP_WIPICharacter::execYeetHeldYeetable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACPP_WIPICharacter_ChangePOV_Statics
	{
		struct CPP_WIPICharacter_eventChangePOV_Parms
		{
			bool reset;
		};
		static void NewProp_reset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_reset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACPP_WIPICharacter_ChangePOV_Statics::NewProp_reset_SetBit(void* Obj)
	{
		((CPP_WIPICharacter_eventChangePOV_Parms*)Obj)->reset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACPP_WIPICharacter_ChangePOV_Statics::NewProp_reset = { "reset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CPP_WIPICharacter_eventChangePOV_Parms), &Z_Construct_UFunction_ACPP_WIPICharacter_ChangePOV_Statics::NewProp_reset_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_WIPICharacter_ChangePOV_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_WIPICharacter_ChangePOV_Statics::NewProp_reset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_WIPICharacter_ChangePOV_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_WIPICharacter_ChangePOV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_WIPICharacter, nullptr, "ChangePOV", nullptr, nullptr, sizeof(CPP_WIPICharacter_eventChangePOV_Parms), Z_Construct_UFunction_ACPP_WIPICharacter_ChangePOV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_WIPICharacter_ChangePOV_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_WIPICharacter_ChangePOV_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_WIPICharacter_ChangePOV_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_WIPICharacter_ChangePOV()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPP_WIPICharacter_ChangePOV_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_WIPICharacter_ChangePOVHideMesh_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_WIPICharacter_ChangePOVHideMesh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_WIPICharacter_ChangePOVHideMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_WIPICharacter, nullptr, "ChangePOVHideMesh", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_WIPICharacter_ChangePOVHideMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_WIPICharacter_ChangePOVHideMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_WIPICharacter_ChangePOVHideMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPP_WIPICharacter_ChangePOVHideMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_WIPICharacter_ChangePOVOnFinished_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_WIPICharacter_ChangePOVOnFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_WIPICharacter_ChangePOVOnFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_WIPICharacter, nullptr, "ChangePOVOnFinished", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_WIPICharacter_ChangePOVOnFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_WIPICharacter_ChangePOVOnFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_WIPICharacter_ChangePOVOnFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPP_WIPICharacter_ChangePOVOnFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_WIPICharacter_ChangePOVUpdate_Statics
	{
		struct CPP_WIPICharacter_eventChangePOVUpdate_Parms
		{
			float Alpha;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACPP_WIPICharacter_ChangePOVUpdate_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPP_WIPICharacter_eventChangePOVUpdate_Parms, Alpha), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_WIPICharacter_ChangePOVUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_WIPICharacter_ChangePOVUpdate_Statics::NewProp_Alpha,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_WIPICharacter_ChangePOVUpdate_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//POV shift\n" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
		{ "ToolTip", "POV shift" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_WIPICharacter_ChangePOVUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_WIPICharacter, nullptr, "ChangePOVUpdate", nullptr, nullptr, sizeof(CPP_WIPICharacter_eventChangePOVUpdate_Parms), Z_Construct_UFunction_ACPP_WIPICharacter_ChangePOVUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_WIPICharacter_ChangePOVUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_WIPICharacter_ChangePOVUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_WIPICharacter_ChangePOVUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_WIPICharacter_ChangePOVUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPP_WIPICharacter_ChangePOVUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_WIPICharacter_GamepadInput_Statics
	{
		struct CPP_WIPICharacter_eventGamepadInput_Parms
		{
			bool bReset;
		};
		static void NewProp_bReset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACPP_WIPICharacter_GamepadInput_Statics::NewProp_bReset_SetBit(void* Obj)
	{
		((CPP_WIPICharacter_eventGamepadInput_Parms*)Obj)->bReset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACPP_WIPICharacter_GamepadInput_Statics::NewProp_bReset = { "bReset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CPP_WIPICharacter_eventGamepadInput_Parms), &Z_Construct_UFunction_ACPP_WIPICharacter_GamepadInput_Statics::NewProp_bReset_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_WIPICharacter_GamepadInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_WIPICharacter_GamepadInput_Statics::NewProp_bReset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_WIPICharacter_GamepadInput_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//input methods\n" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
		{ "ToolTip", "input methods" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_WIPICharacter_GamepadInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_WIPICharacter, nullptr, "GamepadInput", nullptr, nullptr, sizeof(CPP_WIPICharacter_eventGamepadInput_Parms), Z_Construct_UFunction_ACPP_WIPICharacter_GamepadInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_WIPICharacter_GamepadInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_WIPICharacter_GamepadInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_WIPICharacter_GamepadInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_WIPICharacter_GamepadInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPP_WIPICharacter_GamepadInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_WIPICharacter_GetMagnet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_WIPICharacter_GetMagnet_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//called when the player collects the magnet\n" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
		{ "ToolTip", "called when the player collects the magnet" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_WIPICharacter_GetMagnet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_WIPICharacter, nullptr, "GetMagnet", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_WIPICharacter_GetMagnet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_WIPICharacter_GetMagnet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_WIPICharacter_GetMagnet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPP_WIPICharacter_GetMagnet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_WIPICharacter_GrappleMeshOnFinished_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_WIPICharacter_GrappleMeshOnFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_WIPICharacter_GrappleMeshOnFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_WIPICharacter, nullptr, "GrappleMeshOnFinished", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_WIPICharacter_GrappleMeshOnFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_WIPICharacter_GrappleMeshOnFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_WIPICharacter_GrappleMeshOnFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPP_WIPICharacter_GrappleMeshOnFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_WIPICharacter_GrappleMeshReverseFinished_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_WIPICharacter_GrappleMeshReverseFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_WIPICharacter_GrappleMeshReverseFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_WIPICharacter, nullptr, "GrappleMeshReverseFinished", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_WIPICharacter_GrappleMeshReverseFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_WIPICharacter_GrappleMeshReverseFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_WIPICharacter_GrappleMeshReverseFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPP_WIPICharacter_GrappleMeshReverseFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_WIPICharacter_GrappleMeshUpdate_Statics
	{
		struct CPP_WIPICharacter_eventGrappleMeshUpdate_Parms
		{
			float Alpha;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACPP_WIPICharacter_GrappleMeshUpdate_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPP_WIPICharacter_eventGrappleMeshUpdate_Parms, Alpha), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_WIPICharacter_GrappleMeshUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_WIPICharacter_GrappleMeshUpdate_Statics::NewProp_Alpha,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_WIPICharacter_GrappleMeshUpdate_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Grapple meshes\n" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
		{ "ToolTip", "Grapple meshes" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_WIPICharacter_GrappleMeshUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_WIPICharacter, nullptr, "GrappleMeshUpdate", nullptr, nullptr, sizeof(CPP_WIPICharacter_eventGrappleMeshUpdate_Parms), Z_Construct_UFunction_ACPP_WIPICharacter_GrappleMeshUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_WIPICharacter_GrappleMeshUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_WIPICharacter_GrappleMeshUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_WIPICharacter_GrappleMeshUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_WIPICharacter_GrappleMeshUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPP_WIPICharacter_GrappleMeshUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_WIPICharacter_GrappleTickUpdate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_WIPICharacter_GrappleTickUpdate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_WIPICharacter_GrappleTickUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_WIPICharacter, nullptr, "GrappleTickUpdate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_WIPICharacter_GrappleTickUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_WIPICharacter_GrappleTickUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_WIPICharacter_GrappleTickUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPP_WIPICharacter_GrappleTickUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_WIPICharacter_KeyboardInput_Statics
	{
		struct CPP_WIPICharacter_eventKeyboardInput_Parms
		{
			bool bReset;
		};
		static void NewProp_bReset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACPP_WIPICharacter_KeyboardInput_Statics::NewProp_bReset_SetBit(void* Obj)
	{
		((CPP_WIPICharacter_eventKeyboardInput_Parms*)Obj)->bReset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACPP_WIPICharacter_KeyboardInput_Statics::NewProp_bReset = { "bReset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CPP_WIPICharacter_eventKeyboardInput_Parms), &Z_Construct_UFunction_ACPP_WIPICharacter_KeyboardInput_Statics::NewProp_bReset_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_WIPICharacter_KeyboardInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_WIPICharacter_KeyboardInput_Statics::NewProp_bReset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_WIPICharacter_KeyboardInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_WIPICharacter_KeyboardInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_WIPICharacter, nullptr, "KeyboardInput", nullptr, nullptr, sizeof(CPP_WIPICharacter_eventKeyboardInput_Parms), Z_Construct_UFunction_ACPP_WIPICharacter_KeyboardInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_WIPICharacter_KeyboardInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_WIPICharacter_KeyboardInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_WIPICharacter_KeyboardInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_WIPICharacter_KeyboardInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPP_WIPICharacter_KeyboardInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_WIPICharacter_Pause_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_WIPICharacter_Pause_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_WIPICharacter_Pause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_WIPICharacter, nullptr, "Pause", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_WIPICharacter_Pause_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_WIPICharacter_Pause_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_WIPICharacter_Pause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPP_WIPICharacter_Pause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_WIPICharacter_StopMagnetizing_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_WIPICharacter_StopMagnetizing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_WIPICharacter_StopMagnetizing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_WIPICharacter, nullptr, "StopMagnetizing", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_WIPICharacter_StopMagnetizing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_WIPICharacter_StopMagnetizing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_WIPICharacter_StopMagnetizing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPP_WIPICharacter_StopMagnetizing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_WIPICharacter_SwapItemsMeshSwap_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_WIPICharacter_SwapItemsMeshSwap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_WIPICharacter_SwapItemsMeshSwap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_WIPICharacter, nullptr, "SwapItemsMeshSwap", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_WIPICharacter_SwapItemsMeshSwap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_WIPICharacter_SwapItemsMeshSwap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_WIPICharacter_SwapItemsMeshSwap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPP_WIPICharacter_SwapItemsMeshSwap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_WIPICharacter_SwapItemsUpdate_Statics
	{
		struct CPP_WIPICharacter_eventSwapItemsUpdate_Parms
		{
			float ScaleFactor;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleFactor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACPP_WIPICharacter_SwapItemsUpdate_Statics::NewProp_ScaleFactor = { "ScaleFactor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPP_WIPICharacter_eventSwapItemsUpdate_Parms, ScaleFactor), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_WIPICharacter_SwapItemsUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_WIPICharacter_SwapItemsUpdate_Statics::NewProp_ScaleFactor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_WIPICharacter_SwapItemsUpdate_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//item swapping\n" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
		{ "ToolTip", "item swapping" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_WIPICharacter_SwapItemsUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_WIPICharacter, nullptr, "SwapItemsUpdate", nullptr, nullptr, sizeof(CPP_WIPICharacter_eventSwapItemsUpdate_Parms), Z_Construct_UFunction_ACPP_WIPICharacter_SwapItemsUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_WIPICharacter_SwapItemsUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_WIPICharacter_SwapItemsUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_WIPICharacter_SwapItemsUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_WIPICharacter_SwapItemsUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPP_WIPICharacter_SwapItemsUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_WIPICharacter_VerticalVelocityUpdate_Statics
	{
		struct CPP_WIPICharacter_eventVerticalVelocityUpdate_Parms
		{
			float Alpha;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACPP_WIPICharacter_VerticalVelocityUpdate_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPP_WIPICharacter_eventVerticalVelocityUpdate_Parms, Alpha), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_WIPICharacter_VerticalVelocityUpdate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_WIPICharacter_VerticalVelocityUpdate_Statics::NewProp_Alpha,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_WIPICharacter_VerticalVelocityUpdate_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//hover vertical velocity\n" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
		{ "ToolTip", "hover vertical velocity" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_WIPICharacter_VerticalVelocityUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_WIPICharacter, nullptr, "VerticalVelocityUpdate", nullptr, nullptr, sizeof(CPP_WIPICharacter_eventVerticalVelocityUpdate_Parms), Z_Construct_UFunction_ACPP_WIPICharacter_VerticalVelocityUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_WIPICharacter_VerticalVelocityUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_WIPICharacter_VerticalVelocityUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_WIPICharacter_VerticalVelocityUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_WIPICharacter_VerticalVelocityUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPP_WIPICharacter_VerticalVelocityUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_WIPICharacter_YeetHeldYeetable_Statics
	{
		struct CPP_WIPICharacter_eventYeetHeldYeetable_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACPP_WIPICharacter_YeetHeldYeetable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CPP_WIPICharacter_eventYeetHeldYeetable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACPP_WIPICharacter_YeetHeldYeetable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CPP_WIPICharacter_eventYeetHeldYeetable_Parms), &Z_Construct_UFunction_ACPP_WIPICharacter_YeetHeldYeetable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_WIPICharacter_YeetHeldYeetable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_WIPICharacter_YeetHeldYeetable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_WIPICharacter_YeetHeldYeetable_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Throwing\n" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
		{ "ToolTip", "Throwing" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_WIPICharacter_YeetHeldYeetable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_WIPICharacter, nullptr, "YeetHeldYeetable", nullptr, nullptr, sizeof(CPP_WIPICharacter_eventYeetHeldYeetable_Parms), Z_Construct_UFunction_ACPP_WIPICharacter_YeetHeldYeetable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_WIPICharacter_YeetHeldYeetable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_WIPICharacter_YeetHeldYeetable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_WIPICharacter_YeetHeldYeetable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_WIPICharacter_YeetHeldYeetable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACPP_WIPICharacter_YeetHeldYeetable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACPP_WIPICharacter_NoRegister()
	{
		return ACPP_WIPICharacter::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_WIPICharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvailableLockables_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AvailableLockables;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AvailableLockables_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwitchedLock_MetaData[];
#endif
		static void NewProp_SwitchedLock_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SwitchedLock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastLockAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastLockAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PuttySplineMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PuttySplineMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagnetSplineMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MagnetSplineMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SplineMeshes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineMeshes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BallClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BallClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameInst_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameInst;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenMatSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScreenMatSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenMat_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScreenMat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyMatSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BodyMatSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyMat_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BodyMat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentAbility_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentAbility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanSwapAbilities_MetaData[];
#endif
		static void NewProp_CanSwapAbilities_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanSwapAbilities;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookTutComplete_MetaData[];
#endif
		static void NewProp_LookTutComplete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LookTutComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanLook_MetaData[];
#endif
		static void NewProp_CanLook_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanLook;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveTutComplete_MetaData[];
#endif
		static void NewProp_MoveTutComplete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MoveTutComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanMove_MetaData[];
#endif
		static void NewProp_CanMove_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanMove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tutorial_MetaData[];
#endif
		static void NewProp_Tutorial_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Tutorial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Music_MetaData[];
#endif
		static void NewProp_Music_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Music;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovementComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThrowableHeld_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThrowableHeld;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HideTooltipHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HideTooltipHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TutorialWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TutorialWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TutorialWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_TutorialWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PauseMenuWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PauseMenuWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PauseMenuWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PauseMenuWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HUDWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HUDWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemSoundComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemSoundComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoomRecoverSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ZoomRecoverSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoomSoundComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ZoomSoundComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoomSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ZoomSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindSoundComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WindSoundComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WindSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Jump2Voc_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Jump2Voc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Jump1VocComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Jump1VocComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Jump1Voc_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Jump1Voc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Jump2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Jump2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Jump1_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Jump1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_POVTutComplete_MetaData[];
#endif
		static void NewProp_POVTutComplete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_POVTutComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChangePOVCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChangePOVCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChangePOVTimeline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChangePOVTimeline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanChangePOV_MetaData[];
#endif
		static void NewProp_CanChangePOV_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanChangePOV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPerson_MetaData[];
#endif
		static void NewProp_FirstPerson_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FirstPerson;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TempArmLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TempArmLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewArmLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewArmLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PuttyStretchedMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PuttyStretchedMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PuttyItemMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PuttyItemMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrappleLaunchDelayTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GrappleLaunchDelayTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrappleTickTimeline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrappleTickTimeline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrappleMeshCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrappleMeshCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrappleMeshTimeline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrappleMeshTimeline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PuttySpline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PuttySpline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PuttyMat_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PuttyMat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PuttySplineMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PuttySplineMeshes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PuttySplineMeshes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastDistanceToGrapplePoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastDistanceToGrapplePoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceFromGrapplePoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceFromGrapplePoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrappleDist_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GrappleDist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockedGrappleable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LockedGrappleable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrappledPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrappledPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvailableGrappleables_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AvailableGrappleables;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AvailableGrappleables_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanEndGrapple_MetaData[];
#endif
		static void NewProp_CanEndGrapple_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanEndGrapple;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grappling_MetaData[];
#endif
		static void NewProp_Grappling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Grappling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrappleLaunching_MetaData[];
#endif
		static void NewProp_GrappleLaunching_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_GrappleLaunching;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Putty_MetaData[];
#endif
		static void NewProp_Putty_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Putty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrappleSplineEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GrappleSplineEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrappleLoc_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GrappleLoc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagMatSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MagMatSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagMat_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MagMat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwitchedMagnetLock_MetaData[];
#endif
		static void NewProp_SwitchedMagnetLock_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SwitchedMagnetLock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pulling_MetaData[];
#endif
		static void NewProp_Pulling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Pulling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pushing_MetaData[];
#endif
		static void NewProp_Pushing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Pushing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Magnetizing_MetaData[];
#endif
		static void NewProp_Magnetizing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Magnetizing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvailablePullables_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AvailablePullables;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AvailablePullables_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockedPullable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LockedPullable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagDist_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MagDist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalVelocityCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VerticalVelocityCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalVelocityTimeline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VerticalVelocityTimeline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasHover_MetaData[];
#endif
		static void NewProp_HasHover_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasHover;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanHover_MetaData[];
#endif
		static void NewProp_CanHover_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanHover;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hovertime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Hovertime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemSwapCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemSwapCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemSwapTimeline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemSwapTimeline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZoomCountDownTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ZoomCountDownTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WindTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindDownTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WindDownTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gears_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Gears;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static void NewProp_Key_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Wound_MetaData[];
#endif
		static void NewProp_Wound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Wound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Winding_MetaData[];
#endif
		static void NewProp_Winding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Winding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanWind_MetaData[];
#endif
		static void NewProp_CanWind_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanWind;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasWind_MetaData[];
#endif
		static void NewProp_HasWind_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasWind;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WoundDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WoundDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WoundSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WoundSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NormalSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WindTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WindTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PuttyEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PuttyEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointLightComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PointLightComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplinePlayerTangent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplinePlayerTangent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagnetPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MagnetPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagSpline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MagSpline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PuttySplineOrigin_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PuttySplineOrigin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PuttyMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PuttyMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagnetMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MagnetMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoldablesPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HoldablesPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BodyMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpperBodyParent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UpperBodyParent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_WIPICharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_CollectAThon,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACPP_WIPICharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACPP_WIPICharacter_ChangePOV, "ChangePOV" }, // 97768464
		{ &Z_Construct_UFunction_ACPP_WIPICharacter_ChangePOVHideMesh, "ChangePOVHideMesh" }, // 2740607895
		{ &Z_Construct_UFunction_ACPP_WIPICharacter_ChangePOVOnFinished, "ChangePOVOnFinished" }, // 2480568074
		{ &Z_Construct_UFunction_ACPP_WIPICharacter_ChangePOVUpdate, "ChangePOVUpdate" }, // 421015806
		{ &Z_Construct_UFunction_ACPP_WIPICharacter_GamepadInput, "GamepadInput" }, // 2786926555
		{ &Z_Construct_UFunction_ACPP_WIPICharacter_GetMagnet, "GetMagnet" }, // 2638181529
		{ &Z_Construct_UFunction_ACPP_WIPICharacter_GrappleMeshOnFinished, "GrappleMeshOnFinished" }, // 3478584037
		{ &Z_Construct_UFunction_ACPP_WIPICharacter_GrappleMeshReverseFinished, "GrappleMeshReverseFinished" }, // 3788653489
		{ &Z_Construct_UFunction_ACPP_WIPICharacter_GrappleMeshUpdate, "GrappleMeshUpdate" }, // 3290664250
		{ &Z_Construct_UFunction_ACPP_WIPICharacter_GrappleTickUpdate, "GrappleTickUpdate" }, // 1906372419
		{ &Z_Construct_UFunction_ACPP_WIPICharacter_KeyboardInput, "KeyboardInput" }, // 904299026
		{ &Z_Construct_UFunction_ACPP_WIPICharacter_Pause, "Pause" }, // 362629355
		{ &Z_Construct_UFunction_ACPP_WIPICharacter_StopMagnetizing, "StopMagnetizing" }, // 3027591034
		{ &Z_Construct_UFunction_ACPP_WIPICharacter_SwapItemsMeshSwap, "SwapItemsMeshSwap" }, // 504711686
		{ &Z_Construct_UFunction_ACPP_WIPICharacter_SwapItemsUpdate, "SwapItemsUpdate" }, // 3671353311
		{ &Z_Construct_UFunction_ACPP_WIPICharacter_VerticalVelocityUpdate, "VerticalVelocityUpdate" }, // 2154073
		{ &Z_Construct_UFunction_ACPP_WIPICharacter_YeetHeldYeetable, "YeetHeldYeetable" }, // 1542507604
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CPP_WIPICharacter.h" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_AvailableLockables_MetaData[] = {
		{ "Category", "Misc" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_AvailableLockables = { "AvailableLockables", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, AvailableLockables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_AvailableLockables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_AvailableLockables_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_AvailableLockables_Inner = { "AvailableLockables", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_SwitchedLock_MetaData[] = {
		{ "Category", "Misc" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	void Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_SwitchedLock_SetBit(void* Obj)
	{
		((ACPP_WIPICharacter*)Obj)->SwitchedLock = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_SwitchedLock = { "SwitchedLock", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPP_WIPICharacter), &Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_SwitchedLock_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_SwitchedLock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_SwitchedLock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_LastLockAngle_MetaData[] = {
		{ "Category", "Misc" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_LastLockAngle = { "LastLockAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, LastLockAngle), METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_LastLockAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_LastLockAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_PuttySplineMesh_MetaData[] = {
		{ "Category", "Misc" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_PuttySplineMesh = { "PuttySplineMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, PuttySplineMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_PuttySplineMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_PuttySplineMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_MagnetSplineMesh_MetaData[] = {
		{ "Category", "Misc" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_MagnetSplineMesh = { "MagnetSplineMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, MagnetSplineMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_MagnetSplineMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_MagnetSplineMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_SplineMeshes_MetaData[] = {
		{ "Category", "Misc" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_SplineMeshes = { "SplineMeshes", nullptr, (EPropertyFlags)0x001000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, SplineMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_SplineMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_SplineMeshes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_SplineMeshes_Inner = { "SplineMeshes", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_BallClass_MetaData[] = {
		{ "Category", "Misc" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_BallClass = { "BallClass", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, BallClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_BallClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_BallClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_GameInst_MetaData[] = {
		{ "Category", "Misc" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_GameInst = { "GameInst", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, GameInst), Z_Construct_UClass_UCPP_FunSizeGameInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_GameInst_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_GameInst_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ScreenMatSource_MetaData[] = {
		{ "Category", "Misc" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ScreenMatSource = { "ScreenMatSource", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, ScreenMatSource), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ScreenMatSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ScreenMatSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ScreenMat_MetaData[] = {
		{ "Category", "Misc" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ScreenMat = { "ScreenMat", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, ScreenMat), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ScreenMat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ScreenMat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_BodyMatSource_MetaData[] = {
		{ "Category", "Misc" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_BodyMatSource = { "BodyMatSource", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, BodyMatSource), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_BodyMatSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_BodyMatSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_BodyMat_MetaData[] = {
		{ "Category", "Misc" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_BodyMat = { "BodyMat", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, BodyMat), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_BodyMat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_BodyMat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_CurrentAbility_MetaData[] = {
		{ "Category", "Misc." },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_CurrentAbility = { "CurrentAbility", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, CurrentAbility), METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_CurrentAbility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_CurrentAbility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_CanSwapAbilities_MetaData[] = {
		{ "Category", "Misc." },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	void Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_CanSwapAbilities_SetBit(void* Obj)
	{
		((ACPP_WIPICharacter*)Obj)->CanSwapAbilities = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_CanSwapAbilities = { "CanSwapAbilities", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPP_WIPICharacter), &Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_CanSwapAbilities_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_CanSwapAbilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_CanSwapAbilities_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_LookTutComplete_MetaData[] = {
		{ "Category", "Misc." },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	void Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_LookTutComplete_SetBit(void* Obj)
	{
		((ACPP_WIPICharacter*)Obj)->LookTutComplete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_LookTutComplete = { "LookTutComplete", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPP_WIPICharacter), &Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_LookTutComplete_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_LookTutComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_LookTutComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Misc." },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Misc." },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_CanLook_MetaData[] = {
		{ "Category", "Misc." },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	void Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_CanLook_SetBit(void* Obj)
	{
		((ACPP_WIPICharacter*)Obj)->CanLook = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_CanLook = { "CanLook", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPP_WIPICharacter), &Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_CanLook_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_CanLook_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_CanLook_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_MoveTutComplete_MetaData[] = {
		{ "Category", "Misc." },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	void Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_MoveTutComplete_SetBit(void* Obj)
	{
		((ACPP_WIPICharacter*)Obj)->MoveTutComplete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_MoveTutComplete = { "MoveTutComplete", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPP_WIPICharacter), &Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_MoveTutComplete_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_MoveTutComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_MoveTutComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_CanMove_MetaData[] = {
		{ "Category", "Misc." },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	void Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_CanMove_SetBit(void* Obj)
	{
		((ACPP_WIPICharacter*)Obj)->CanMove = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_CanMove = { "CanMove", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPP_WIPICharacter), &Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_CanMove_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_CanMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_CanMove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Tutorial_MetaData[] = {
		{ "Category", "Misc." },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	void Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Tutorial_SetBit(void* Obj)
	{
		((ACPP_WIPICharacter*)Obj)->Tutorial = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Tutorial = { "Tutorial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPP_WIPICharacter), &Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Tutorial_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Tutorial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Tutorial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Music_MetaData[] = {
		{ "Category", "Misc." },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	void Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Music_SetBit(void* Obj)
	{
		((ACPP_WIPICharacter*)Obj)->Music = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Music = { "Music", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPP_WIPICharacter), &Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Music_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Music_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Music_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_MovementComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, MovementComponent), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_MovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_MovementComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_World_MetaData[] = {
		{ "Comment", "//character variables\n" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
		{ "ToolTip", "character variables" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_World_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_World_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ThrowableHeld_MetaData[] = {
		{ "Category", "Throwing" },
		{ "Comment", "//Throwing variables\n" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
		{ "ToolTip", "Throwing variables" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ThrowableHeld = { "ThrowableHeld", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, ThrowableHeld), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ThrowableHeld_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ThrowableHeld_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_HideTooltipHandle_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_HideTooltipHandle = { "HideTooltipHandle", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, HideTooltipHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_HideTooltipHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_HideTooltipHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_TutorialWidget_MetaData[] = {
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_TutorialWidget = { "TutorialWidget", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, TutorialWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_TutorialWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_TutorialWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_TutorialWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_TutorialWidgetClass = { "TutorialWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, TutorialWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_TutorialWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_TutorialWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_PauseMenuWidget_MetaData[] = {
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_PauseMenuWidget = { "PauseMenuWidget", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, PauseMenuWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_PauseMenuWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_PauseMenuWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_PauseMenuWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_PauseMenuWidgetClass = { "PauseMenuWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, PauseMenuWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_PauseMenuWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_PauseMenuWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_HUDWidget_MetaData[] = {
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_HUDWidget = { "HUDWidget", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, HUDWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_HUDWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_HUDWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_HUDWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "Comment", "//UI variables\n" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
		{ "ToolTip", "UI variables" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_HUDWidgetClass = { "HUDWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, HUDWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_HUDWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_HUDWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ItemSound_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ItemSound = { "ItemSound", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, ItemSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ItemSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ItemSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ItemSoundComp_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "//item audio\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
		{ "ToolTip", "item audio" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ItemSoundComp = { "ItemSoundComp", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, ItemSoundComp), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ItemSoundComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ItemSoundComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ZoomRecoverSound_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ZoomRecoverSound = { "ZoomRecoverSound", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, ZoomRecoverSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ZoomRecoverSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ZoomRecoverSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ZoomSoundComp_MetaData[] = {
		{ "Category", "Audio" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ZoomSoundComp = { "ZoomSoundComp", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, ZoomSoundComp), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ZoomSoundComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ZoomSoundComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ZoomSound_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ZoomSound = { "ZoomSound", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, ZoomSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ZoomSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ZoomSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_WindSoundComp_MetaData[] = {
		{ "Category", "Audio" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_WindSoundComp = { "WindSoundComp", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, WindSoundComp), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_WindSoundComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_WindSoundComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_WindSound_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "//winding audio\n" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
		{ "ToolTip", "winding audio" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_WindSound = { "WindSound", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, WindSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_WindSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_WindSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Jump2Voc_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Jump2Voc = { "Jump2Voc", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, Jump2Voc), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Jump2Voc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Jump2Voc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Jump1VocComp_MetaData[] = {
		{ "Category", "Audio" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Jump1VocComp = { "Jump1VocComp", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, Jump1VocComp), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Jump1VocComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Jump1VocComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Jump1Voc_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Jump1Voc = { "Jump1Voc", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, Jump1Voc), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Jump1Voc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Jump1Voc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Jump2_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Jump2 = { "Jump2", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, Jump2), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Jump2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Jump2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Jump1_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "//jump audio\n" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
		{ "ToolTip", "jump audio" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Jump1 = { "Jump1", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, Jump1), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Jump1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Jump1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_POVTutComplete_MetaData[] = {
		{ "Category", "POV Shift Mechanic" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	void Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_POVTutComplete_SetBit(void* Obj)
	{
		((ACPP_WIPICharacter*)Obj)->POVTutComplete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_POVTutComplete = { "POVTutComplete", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPP_WIPICharacter), &Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_POVTutComplete_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_POVTutComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_POVTutComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ChangePOVCurve_MetaData[] = {
		{ "Category", "Wind-up Mechanic" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ChangePOVCurve = { "ChangePOVCurve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, ChangePOVCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ChangePOVCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ChangePOVCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ChangePOVTimeline_MetaData[] = {
		{ "Category", "Wind-up Mechanic" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ChangePOVTimeline = { "ChangePOVTimeline", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, ChangePOVTimeline), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ChangePOVTimeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ChangePOVTimeline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_CanChangePOV_MetaData[] = {
		{ "Category", "POV Shift Mechanic" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	void Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_CanChangePOV_SetBit(void* Obj)
	{
		((ACPP_WIPICharacter*)Obj)->CanChangePOV = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_CanChangePOV = { "CanChangePOV", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPP_WIPICharacter), &Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_CanChangePOV_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_CanChangePOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_CanChangePOV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_FirstPerson_MetaData[] = {
		{ "Category", "POV Shift Mechanic" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	void Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_FirstPerson_SetBit(void* Obj)
	{
		((ACPP_WIPICharacter*)Obj)->FirstPerson = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_FirstPerson = { "FirstPerson", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPP_WIPICharacter), &Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_FirstPerson_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_FirstPerson_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_FirstPerson_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_TempArmLength_MetaData[] = {
		{ "Category", "POV Shift Mechanic" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_TempArmLength = { "TempArmLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, TempArmLength), METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_TempArmLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_TempArmLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_NewArmLength_MetaData[] = {
		{ "Category", "POV Shift Mechanic" },
		{ "Comment", "//POV shift variables\n" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
		{ "ToolTip", "POV shift variables" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_NewArmLength = { "NewArmLength", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, NewArmLength), METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_NewArmLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_NewArmLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_PuttyStretchedMesh_MetaData[] = {
		{ "Category", "Grapple Mechanic" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_PuttyStretchedMesh = { "PuttyStretchedMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, PuttyStretchedMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_PuttyStretchedMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_PuttyStretchedMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_PuttyItemMesh_MetaData[] = {
		{ "Category", "Grapple Mechanic" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_PuttyItemMesh = { "PuttyItemMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, PuttyItemMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_PuttyItemMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_PuttyItemMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_GrappleLaunchDelayTimer_MetaData[] = {
		{ "Category", "Grapple Mechanic" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_GrappleLaunchDelayTimer = { "GrappleLaunchDelayTimer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, GrappleLaunchDelayTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_GrappleLaunchDelayTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_GrappleLaunchDelayTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_GrappleTickTimeline_MetaData[] = {
		{ "Category", "Grapple Mechanic" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_GrappleTickTimeline = { "GrappleTickTimeline", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, GrappleTickTimeline), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_GrappleTickTimeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_GrappleTickTimeline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_GrappleMeshCurve_MetaData[] = {
		{ "Category", "Grapple Mechanic" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_GrappleMeshCurve = { "GrappleMeshCurve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, GrappleMeshCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_GrappleMeshCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_GrappleMeshCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_GrappleMeshTimeline_MetaData[] = {
		{ "Category", "Grapple Mechanic" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_GrappleMeshTimeline = { "GrappleMeshTimeline", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, GrappleMeshTimeline), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_GrappleMeshTimeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_GrappleMeshTimeline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_PuttySpline_MetaData[] = {
		{ "Category", "Grapple Mechanic" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_PuttySpline = { "PuttySpline", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, PuttySpline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_PuttySpline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_PuttySpline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_PuttyMat_MetaData[] = {
		{ "Category", "Grapple Mechanic" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_PuttyMat = { "PuttyMat", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, PuttyMat), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_PuttyMat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_PuttyMat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_PuttySplineMeshes_MetaData[] = {
		{ "Category", "Grapple Mechanic" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_PuttySplineMeshes = { "PuttySplineMeshes", nullptr, (EPropertyFlags)0x001000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, PuttySplineMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_PuttySplineMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_PuttySplineMeshes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_PuttySplineMeshes_Inner = { "PuttySplineMeshes", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_LastDistanceToGrapplePoint_MetaData[] = {
		{ "Category", "Grapple Mechanic" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_LastDistanceToGrapplePoint = { "LastDistanceToGrapplePoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, LastDistanceToGrapplePoint), METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_LastDistanceToGrapplePoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_LastDistanceToGrapplePoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_DistanceFromGrapplePoint_MetaData[] = {
		{ "Category", "Grapple Mechanic" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_DistanceFromGrapplePoint = { "DistanceFromGrapplePoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, DistanceFromGrapplePoint), METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_DistanceFromGrapplePoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_DistanceFromGrapplePoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_GrappleDist_MetaData[] = {
		{ "Category", "Grapple Mechanic" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_GrappleDist = { "GrappleDist", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, GrappleDist), METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_GrappleDist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_GrappleDist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_LockedGrappleable_MetaData[] = {
		{ "Category", "Grapple Mechanic" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_LockedGrappleable = { "LockedGrappleable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, LockedGrappleable), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_LockedGrappleable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_LockedGrappleable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_GrappledPoint_MetaData[] = {
		{ "Category", "Grapple Mechanic" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_GrappledPoint = { "GrappledPoint", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, GrappledPoint), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_GrappledPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_GrappledPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_AvailableGrappleables_MetaData[] = {
		{ "Category", "Grapple Mechanic" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_AvailableGrappleables = { "AvailableGrappleables", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, AvailableGrappleables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_AvailableGrappleables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_AvailableGrappleables_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_AvailableGrappleables_Inner = { "AvailableGrappleables", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_CanEndGrapple_MetaData[] = {
		{ "Category", "Grapple Mechanic" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	void Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_CanEndGrapple_SetBit(void* Obj)
	{
		((ACPP_WIPICharacter*)Obj)->CanEndGrapple = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_CanEndGrapple = { "CanEndGrapple", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPP_WIPICharacter), &Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_CanEndGrapple_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_CanEndGrapple_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_CanEndGrapple_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Grappling_MetaData[] = {
		{ "Category", "Grapple Mechanic" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	void Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Grappling_SetBit(void* Obj)
	{
		((ACPP_WIPICharacter*)Obj)->Grappling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Grappling = { "Grappling", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPP_WIPICharacter), &Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Grappling_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Grappling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Grappling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_GrappleLaunching_MetaData[] = {
		{ "Category", "Grapple Mechanic" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	void Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_GrappleLaunching_SetBit(void* Obj)
	{
		((ACPP_WIPICharacter*)Obj)->GrappleLaunching = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_GrappleLaunching = { "GrappleLaunching", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPP_WIPICharacter), &Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_GrappleLaunching_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_GrappleLaunching_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_GrappleLaunching_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Putty_MetaData[] = {
		{ "Category", "Grapple Mechanic" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	void Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Putty_SetBit(void* Obj)
	{
		((ACPP_WIPICharacter*)Obj)->Putty = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Putty = { "Putty", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPP_WIPICharacter), &Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Putty_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Putty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Putty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_GrappleSplineEnd_MetaData[] = {
		{ "Category", "Grapple Mechanic" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_GrappleSplineEnd = { "GrappleSplineEnd", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, GrappleSplineEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_GrappleSplineEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_GrappleSplineEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_GrappleLoc_MetaData[] = {
		{ "Category", "Grapple Mechanic" },
		{ "Comment", "//grapple mechanic variables\n" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
		{ "ToolTip", "grapple mechanic variables" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_GrappleLoc = { "GrappleLoc", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, GrappleLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_GrappleLoc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_GrappleLoc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_MagMatSource_MetaData[] = {
		{ "Category", "MagnetMechanic" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_MagMatSource = { "MagMatSource", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, MagMatSource), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_MagMatSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_MagMatSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_MagMat_MetaData[] = {
		{ "Category", "Magnet Mechanic" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_MagMat = { "MagMat", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, MagMat), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_MagMat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_MagMat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_SwitchedMagnetLock_MetaData[] = {
		{ "Category", "Magnet Mechanic" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	void Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_SwitchedMagnetLock_SetBit(void* Obj)
	{
		((ACPP_WIPICharacter*)Obj)->SwitchedMagnetLock = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_SwitchedMagnetLock = { "SwitchedMagnetLock", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPP_WIPICharacter), &Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_SwitchedMagnetLock_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_SwitchedMagnetLock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_SwitchedMagnetLock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Pulling_MetaData[] = {
		{ "Category", "Magnet Mechanic" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	void Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Pulling_SetBit(void* Obj)
	{
		((ACPP_WIPICharacter*)Obj)->Pulling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Pulling = { "Pulling", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPP_WIPICharacter), &Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Pulling_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Pulling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Pulling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Pushing_MetaData[] = {
		{ "Category", "Magnet Mechanic" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	void Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Pushing_SetBit(void* Obj)
	{
		((ACPP_WIPICharacter*)Obj)->Pushing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Pushing = { "Pushing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPP_WIPICharacter), &Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Pushing_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Pushing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Pushing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Magnetizing_MetaData[] = {
		{ "Category", "Magnet Mechanic" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	void Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Magnetizing_SetBit(void* Obj)
	{
		((ACPP_WIPICharacter*)Obj)->Magnetizing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Magnetizing = { "Magnetizing", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPP_WIPICharacter), &Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Magnetizing_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Magnetizing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Magnetizing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_AvailablePullables_MetaData[] = {
		{ "Category", "Magnet Mechanic" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_AvailablePullables = { "AvailablePullables", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, AvailablePullables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_AvailablePullables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_AvailablePullables_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_AvailablePullables_Inner = { "AvailablePullables", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_LockedPullable_MetaData[] = {
		{ "Category", "Magnet Mechanic" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_LockedPullable = { "LockedPullable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, LockedPullable), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_LockedPullable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_LockedPullable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_MagDist_MetaData[] = {
		{ "Category", "Magnet Mechanic" },
		{ "Comment", "//magnet mechanic variables\n" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
		{ "ToolTip", "magnet mechanic variables" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_MagDist = { "MagDist", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, MagDist), METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_MagDist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_MagDist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_VerticalVelocityCurve_MetaData[] = {
		{ "Category", "Hover Mechanic" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_VerticalVelocityCurve = { "VerticalVelocityCurve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, VerticalVelocityCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_VerticalVelocityCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_VerticalVelocityCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_VerticalVelocityTimeline_MetaData[] = {
		{ "Category", "Hover Mechanic" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_VerticalVelocityTimeline = { "VerticalVelocityTimeline", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, VerticalVelocityTimeline), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_VerticalVelocityTimeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_VerticalVelocityTimeline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_HasHover_MetaData[] = {
		{ "Category", "Hover Mechanic" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	void Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_HasHover_SetBit(void* Obj)
	{
		((ACPP_WIPICharacter*)Obj)->HasHover = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_HasHover = { "HasHover", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPP_WIPICharacter), &Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_HasHover_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_HasHover_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_HasHover_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_CanHover_MetaData[] = {
		{ "Category", "Hover Mechanic" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	void Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_CanHover_SetBit(void* Obj)
	{
		((ACPP_WIPICharacter*)Obj)->CanHover = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_CanHover = { "CanHover", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPP_WIPICharacter), &Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_CanHover_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_CanHover_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_CanHover_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Hovertime_MetaData[] = {
		{ "Category", "Hover Mechanic" },
		{ "Comment", "//hover mechanic variables\n" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
		{ "ToolTip", "hover mechanic variables" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Hovertime = { "Hovertime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, Hovertime), METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Hovertime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Hovertime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ItemSwapCurve_MetaData[] = {
		{ "Category", "Wind-up Mechanic" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ItemSwapCurve = { "ItemSwapCurve", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, ItemSwapCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ItemSwapCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ItemSwapCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ItemSwapTimeline_MetaData[] = {
		{ "Category", "Wind-up Mechanic" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ItemSwapTimeline = { "ItemSwapTimeline", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, ItemSwapTimeline), Z_Construct_UClass_UTimelineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ItemSwapTimeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ItemSwapTimeline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ZoomCountDownTimer_MetaData[] = {
		{ "Category", "Wind-up Mechanic" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ZoomCountDownTimer = { "ZoomCountDownTimer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, ZoomCountDownTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ZoomCountDownTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ZoomCountDownTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_WindTimer_MetaData[] = {
		{ "Category", "Wind-up Mechanic" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_WindTimer = { "WindTimer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, WindTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_WindTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_WindTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_WindDownTimer_MetaData[] = {
		{ "Category", "Wind-up Mechanic" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_WindDownTimer = { "WindDownTimer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, WindDownTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_WindDownTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_WindDownTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Gears_MetaData[] = {
		{ "Category", "Wind-up Mechanic" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Gears = { "Gears", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, Gears), METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Gears_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Gears_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "Wind-up Mechanic" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	void Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Key_SetBit(void* Obj)
	{
		((ACPP_WIPICharacter*)Obj)->Key = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPP_WIPICharacter), &Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Key_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Wound_MetaData[] = {
		{ "Category", "Wind-up Mechanic" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	void Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Wound_SetBit(void* Obj)
	{
		((ACPP_WIPICharacter*)Obj)->Wound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Wound = { "Wound", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPP_WIPICharacter), &Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Wound_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Wound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Wound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Winding_MetaData[] = {
		{ "Category", "Wind-up Mechanic" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	void Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Winding_SetBit(void* Obj)
	{
		((ACPP_WIPICharacter*)Obj)->Winding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Winding = { "Winding", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPP_WIPICharacter), &Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Winding_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Winding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Winding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_CanWind_MetaData[] = {
		{ "Category", "Wind-up Mechanic" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	void Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_CanWind_SetBit(void* Obj)
	{
		((ACPP_WIPICharacter*)Obj)->CanWind = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_CanWind = { "CanWind", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPP_WIPICharacter), &Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_CanWind_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_CanWind_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_CanWind_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_HasWind_MetaData[] = {
		{ "Category", "Wind-up Mechanic" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	void Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_HasWind_SetBit(void* Obj)
	{
		((ACPP_WIPICharacter*)Obj)->HasWind = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_HasWind = { "HasWind", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACPP_WIPICharacter), &Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_HasWind_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_HasWind_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_HasWind_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_WoundDuration_MetaData[] = {
		{ "Category", "Wind-up Mechanic" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_WoundDuration = { "WoundDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, WoundDuration), METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_WoundDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_WoundDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_WoundSpeed_MetaData[] = {
		{ "Category", "Wind-up Mechanic" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_WoundSpeed = { "WoundSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, WoundSpeed), METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_WoundSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_WoundSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_NormalSpeed_MetaData[] = {
		{ "Category", "Wind-up Mechanic" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_NormalSpeed = { "NormalSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, NormalSpeed), METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_NormalSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_NormalSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_WindTime_MetaData[] = {
		{ "Category", "Wind-up Mechanic" },
		{ "Comment", "//wind up mechanic variables\n" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
		{ "ToolTip", "wind up mechanic variables" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_WindTime = { "WindTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, WindTime), METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_WindTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_WindTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_PuttyEnd_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "//endpoint of the putty spline\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
		{ "ToolTip", "endpoint of the putty spline" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_PuttyEnd = { "PuttyEnd", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, PuttyEnd), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_PuttyEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_PuttyEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_PointLightComp_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "//light used to indicate to the player WIPI's movement and make dark areas easier to navigate\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
		{ "ToolTip", "light used to indicate to the player WIPI's movement and make dark areas easier to navigate" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_PointLightComp = { "PointLightComp", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, PointLightComp), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_PointLightComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_PointLightComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_SplinePlayerTangent_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "//scene component used as a midpoint reference point for the magnet ability's actual logic/execution; attached to MagnetPoint\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
		{ "ToolTip", "scene component used as a midpoint reference point for the magnet ability's actual logic/execution; attached to MagnetPoint" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_SplinePlayerTangent = { "SplinePlayerTangent", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, SplinePlayerTangent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_SplinePlayerTangent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_SplinePlayerTangent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_MagnetPoint_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "//scene component used as an origin reference point for the magnet ability's actual logic/execution\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
		{ "ToolTip", "scene component used as an origin reference point for the magnet ability's actual logic/execution" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_MagnetPoint = { "MagnetPoint", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, MagnetPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_MagnetPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_MagnetPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_MagSpline_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "//spline for the magnet ability; attached to HoldablesPoint\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
		{ "ToolTip", "spline for the magnet ability; attached to HoldablesPoint" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_MagSpline = { "MagSpline", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, MagSpline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_MagSpline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_MagSpline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_PuttySplineOrigin_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "//point to use when creating splines for magnet or putty abilities; attached to HoldablesPoint\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
		{ "ToolTip", "point to use when creating splines for magnet or putty abilities; attached to HoldablesPoint" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_PuttySplineOrigin = { "PuttySplineOrigin", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, PuttySplineOrigin), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_PuttySplineOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_PuttySplineOrigin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_PuttyMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "//mesh for the putty that WIPI holds; attached to HoldablesPoint\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
		{ "ToolTip", "mesh for the putty that WIPI holds; attached to HoldablesPoint" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_PuttyMesh = { "PuttyMesh", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, PuttyMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_PuttyMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_PuttyMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_MagnetMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "//mesh for the magnet that WIPI holds; attached to HoldablesPoint\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
		{ "ToolTip", "mesh for the magnet that WIPI holds; attached to HoldablesPoint" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_MagnetMesh = { "MagnetMesh", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, MagnetMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_MagnetMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_MagnetMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_HoldablesPoint_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "//parent point for the putty and magnet meshes later\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
		{ "ToolTip", "parent point for the putty and magnet meshes later" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_HoldablesPoint = { "HoldablesPoint", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, HoldablesPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_HoldablesPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_HoldablesPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "//camera; attached to CamBoom\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
		{ "ToolTip", "camera; attached to CamBoom" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "//camera boom\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
		{ "ToolTip", "camera boom" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_BodyMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "//main skeletal mesh; is attached to UpperBodyParent\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
		{ "ToolTip", "main skeletal mesh; is attached to UpperBodyParent" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_BodyMesh = { "BodyMesh", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, BodyMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_BodyMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_BodyMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_UpperBodyParent_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "//this is a scene component that will determine the upper body's rotation\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CPP_WIPICharacter.h" },
		{ "ToolTip", "this is a scene component that will determine the upper body's rotation" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_UpperBodyParent = { "UpperBodyParent", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_WIPICharacter, UpperBodyParent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_UpperBodyParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_UpperBodyParent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPP_WIPICharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_AvailableLockables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_AvailableLockables_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_SwitchedLock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_LastLockAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_PuttySplineMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_MagnetSplineMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_SplineMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_SplineMeshes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_BallClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_GameInst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ScreenMatSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ScreenMat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_BodyMatSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_BodyMat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_CurrentAbility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_CanSwapAbilities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_LookTutComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_CanLook,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_MoveTutComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_CanMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Tutorial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Music,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_MovementComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ThrowableHeld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_HideTooltipHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_TutorialWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_TutorialWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_PauseMenuWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_PauseMenuWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_HUDWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_HUDWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ItemSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ItemSoundComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ZoomRecoverSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ZoomSoundComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ZoomSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_WindSoundComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_WindSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Jump2Voc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Jump1VocComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Jump1Voc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Jump2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Jump1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_POVTutComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ChangePOVCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ChangePOVTimeline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_CanChangePOV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_FirstPerson,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_TempArmLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_NewArmLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_PuttyStretchedMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_PuttyItemMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_GrappleLaunchDelayTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_GrappleTickTimeline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_GrappleMeshCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_GrappleMeshTimeline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_PuttySpline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_PuttyMat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_PuttySplineMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_PuttySplineMeshes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_LastDistanceToGrapplePoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_DistanceFromGrapplePoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_GrappleDist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_LockedGrappleable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_GrappledPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_AvailableGrappleables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_AvailableGrappleables_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_CanEndGrapple,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Grappling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_GrappleLaunching,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Putty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_GrappleSplineEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_GrappleLoc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_MagMatSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_MagMat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_SwitchedMagnetLock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Pulling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Pushing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Magnetizing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_AvailablePullables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_AvailablePullables_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_LockedPullable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_MagDist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_VerticalVelocityCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_VerticalVelocityTimeline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_HasHover,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_CanHover,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Hovertime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ItemSwapCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ItemSwapTimeline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_ZoomCountDownTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_WindTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_WindDownTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Gears,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Wound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_Winding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_CanWind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_HasWind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_WoundDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_WoundSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_NormalSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_WindTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_PuttyEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_PointLightComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_SplinePlayerTangent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_MagnetPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_MagSpline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_PuttySplineOrigin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_PuttyMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_MagnetMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_HoldablesPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_BodyMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_WIPICharacter_Statics::NewProp_UpperBodyParent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_WIPICharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_WIPICharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACPP_WIPICharacter_Statics::ClassParams = {
		&ACPP_WIPICharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACPP_WIPICharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACPP_WIPICharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_WIPICharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACPP_WIPICharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACPP_WIPICharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACPP_WIPICharacter, 1050549524);
	template<> COLLECTATHON_API UClass* StaticClass<ACPP_WIPICharacter>()
	{
		return ACPP_WIPICharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACPP_WIPICharacter(Z_Construct_UClass_ACPP_WIPICharacter, &ACPP_WIPICharacter::StaticClass, TEXT("/Script/CollectAThon"), TEXT("ACPP_WIPICharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_WIPICharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
