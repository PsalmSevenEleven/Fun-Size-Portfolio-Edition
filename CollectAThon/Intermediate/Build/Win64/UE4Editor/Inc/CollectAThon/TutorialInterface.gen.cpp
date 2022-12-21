// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CollectAThon/Public/TutorialInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTutorialInterface() {}
// Cross Module References
	COLLECTATHON_API UClass* Z_Construct_UClass_UTutorialInterface_NoRegister();
	COLLECTATHON_API UClass* Z_Construct_UClass_UTutorialInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_CollectAThon();
	COLLECTATHON_API UClass* Z_Construct_UClass_ACPP_WIPICharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ITutorialInterface::execPOVPassed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->POVPassed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ITutorialInterface::execMovePassed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MovePassed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ITutorialInterface::execLookPassed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LookPassed_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ITutorialInterface::execStartTutorial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartTutorial_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ITutorialInterface::execSetPlayer)
	{
		P_GET_OBJECT(ACPP_WIPICharacter,Z_Param_Player);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayer_Implementation(Z_Param_Player);
		P_NATIVE_END;
	}
	void ITutorialInterface::LookPassed()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_LookPassed instead.");
	}
	void ITutorialInterface::MovePassed()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_MovePassed instead.");
	}
	void ITutorialInterface::POVPassed()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_POVPassed instead.");
	}
	void ITutorialInterface::SetPlayer(ACPP_WIPICharacter* Player)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetPlayer instead.");
	}
	void ITutorialInterface::StartTutorial()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_StartTutorial instead.");
	}
	void UTutorialInterface::StaticRegisterNativesUTutorialInterface()
	{
		UClass* Class = UTutorialInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LookPassed", &ITutorialInterface::execLookPassed },
			{ "MovePassed", &ITutorialInterface::execMovePassed },
			{ "POVPassed", &ITutorialInterface::execPOVPassed },
			{ "SetPlayer", &ITutorialInterface::execSetPlayer },
			{ "StartTutorial", &ITutorialInterface::execStartTutorial },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTutorialInterface_LookPassed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTutorialInterface_LookPassed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tutorial" },
		{ "ModuleRelativePath", "Public/TutorialInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTutorialInterface_LookPassed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTutorialInterface, nullptr, "LookPassed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTutorialInterface_LookPassed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTutorialInterface_LookPassed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTutorialInterface_LookPassed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTutorialInterface_LookPassed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTutorialInterface_MovePassed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTutorialInterface_MovePassed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tutorial" },
		{ "ModuleRelativePath", "Public/TutorialInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTutorialInterface_MovePassed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTutorialInterface, nullptr, "MovePassed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTutorialInterface_MovePassed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTutorialInterface_MovePassed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTutorialInterface_MovePassed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTutorialInterface_MovePassed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTutorialInterface_POVPassed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTutorialInterface_POVPassed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tutorial" },
		{ "ModuleRelativePath", "Public/TutorialInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTutorialInterface_POVPassed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTutorialInterface, nullptr, "POVPassed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTutorialInterface_POVPassed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTutorialInterface_POVPassed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTutorialInterface_POVPassed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTutorialInterface_POVPassed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTutorialInterface_SetPlayer_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTutorialInterface_SetPlayer_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TutorialInterface_eventSetPlayer_Parms, Player), Z_Construct_UClass_ACPP_WIPICharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTutorialInterface_SetPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTutorialInterface_SetPlayer_Statics::NewProp_Player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTutorialInterface_SetPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tutorial" },
		{ "ModuleRelativePath", "Public/TutorialInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTutorialInterface_SetPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTutorialInterface, nullptr, "SetPlayer", nullptr, nullptr, sizeof(TutorialInterface_eventSetPlayer_Parms), Z_Construct_UFunction_UTutorialInterface_SetPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTutorialInterface_SetPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTutorialInterface_SetPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTutorialInterface_SetPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTutorialInterface_SetPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTutorialInterface_SetPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTutorialInterface_StartTutorial_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTutorialInterface_StartTutorial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tutorial" },
		{ "ModuleRelativePath", "Public/TutorialInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTutorialInterface_StartTutorial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTutorialInterface, nullptr, "StartTutorial", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTutorialInterface_StartTutorial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTutorialInterface_StartTutorial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTutorialInterface_StartTutorial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTutorialInterface_StartTutorial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTutorialInterface_NoRegister()
	{
		return UTutorialInterface::StaticClass();
	}
	struct Z_Construct_UClass_UTutorialInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTutorialInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CollectAThon,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTutorialInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTutorialInterface_LookPassed, "LookPassed" }, // 3574782546
		{ &Z_Construct_UFunction_UTutorialInterface_MovePassed, "MovePassed" }, // 34973053
		{ &Z_Construct_UFunction_UTutorialInterface_POVPassed, "POVPassed" }, // 3633729961
		{ &Z_Construct_UFunction_UTutorialInterface_SetPlayer, "SetPlayer" }, // 1769927330
		{ &Z_Construct_UFunction_UTutorialInterface_StartTutorial, "StartTutorial" }, // 1912905393
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTutorialInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TutorialInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTutorialInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITutorialInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTutorialInterface_Statics::ClassParams = {
		&UTutorialInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTutorialInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTutorialInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTutorialInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTutorialInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTutorialInterface, 2999495053);
	template<> COLLECTATHON_API UClass* StaticClass<UTutorialInterface>()
	{
		return UTutorialInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTutorialInterface(Z_Construct_UClass_UTutorialInterface, &UTutorialInterface::StaticClass, TEXT("/Script/CollectAThon"), TEXT("UTutorialInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTutorialInterface);
	static FName NAME_UTutorialInterface_LookPassed = FName(TEXT("LookPassed"));
	void ITutorialInterface::Execute_LookPassed(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTutorialInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UTutorialInterface_LookPassed);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (ITutorialInterface*)(O->GetNativeInterfaceAddress(UTutorialInterface::StaticClass())))
		{
			I->LookPassed_Implementation();
		}
	}
	static FName NAME_UTutorialInterface_MovePassed = FName(TEXT("MovePassed"));
	void ITutorialInterface::Execute_MovePassed(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTutorialInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UTutorialInterface_MovePassed);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (ITutorialInterface*)(O->GetNativeInterfaceAddress(UTutorialInterface::StaticClass())))
		{
			I->MovePassed_Implementation();
		}
	}
	static FName NAME_UTutorialInterface_POVPassed = FName(TEXT("POVPassed"));
	void ITutorialInterface::Execute_POVPassed(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTutorialInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UTutorialInterface_POVPassed);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (ITutorialInterface*)(O->GetNativeInterfaceAddress(UTutorialInterface::StaticClass())))
		{
			I->POVPassed_Implementation();
		}
	}
	static FName NAME_UTutorialInterface_SetPlayer = FName(TEXT("SetPlayer"));
	void ITutorialInterface::Execute_SetPlayer(UObject* O, ACPP_WIPICharacter* Player)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTutorialInterface::StaticClass()));
		TutorialInterface_eventSetPlayer_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTutorialInterface_SetPlayer);
		if (Func)
		{
			Parms.Player=Player;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (ITutorialInterface*)(O->GetNativeInterfaceAddress(UTutorialInterface::StaticClass())))
		{
			I->SetPlayer_Implementation(Player);
		}
	}
	static FName NAME_UTutorialInterface_StartTutorial = FName(TEXT("StartTutorial"));
	void ITutorialInterface::Execute_StartTutorial(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTutorialInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UTutorialInterface_StartTutorial);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (ITutorialInterface*)(O->GetNativeInterfaceAddress(UTutorialInterface::StaticClass())))
		{
			I->StartTutorial_Implementation();
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
