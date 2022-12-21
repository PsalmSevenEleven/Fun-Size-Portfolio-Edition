// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CollectAThon/Public/HUDInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHUDInterface() {}
// Cross Module References
	COLLECTATHON_API UClass* Z_Construct_UClass_UHUDInterface_NoRegister();
	COLLECTATHON_API UClass* Z_Construct_UClass_UHUDInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_CollectAThon();
	COLLECTATHON_API UClass* Z_Construct_UClass_ACPP_WIPICharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IHUDInterface::execStopWinding)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopWinding_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IHUDInterface::execWind)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Wind_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IHUDInterface::execShowAlert)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowAlert_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IHUDInterface::execHideTooltip)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideTooltip_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IHUDInterface::execFToT)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FToT_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IHUDInterface::execTToF)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TToF_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IHUDInterface::execSetWIPI)
	{
		P_GET_OBJECT(ACPP_WIPICharacter,Z_Param_inWIPI);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWIPI_Implementation(Z_Param_inWIPI);
		P_NATIVE_END;
	}
	void IHUDInterface::FToT()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_FToT instead.");
	}
	void IHUDInterface::HideTooltip()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_HideTooltip instead.");
	}
	void IHUDInterface::SetWIPI(ACPP_WIPICharacter* inWIPI)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetWIPI instead.");
	}
	void IHUDInterface::ShowAlert()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ShowAlert instead.");
	}
	void IHUDInterface::StopWinding()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_StopWinding instead.");
	}
	void IHUDInterface::TToF()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_TToF instead.");
	}
	void IHUDInterface::Wind()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Wind instead.");
	}
	void UHUDInterface::StaticRegisterNativesUHUDInterface()
	{
		UClass* Class = UHUDInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FToT", &IHUDInterface::execFToT },
			{ "HideTooltip", &IHUDInterface::execHideTooltip },
			{ "SetWIPI", &IHUDInterface::execSetWIPI },
			{ "ShowAlert", &IHUDInterface::execShowAlert },
			{ "StopWinding", &IHUDInterface::execStopWinding },
			{ "TToF", &IHUDInterface::execTToF },
			{ "Wind", &IHUDInterface::execWind },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHUDInterface_FToT_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHUDInterface_FToT_Statics::Function_MetaDataParams[] = {
		{ "Category", "POV" },
		{ "ModuleRelativePath", "Public/HUDInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHUDInterface_FToT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHUDInterface, nullptr, "FToT", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHUDInterface_FToT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHUDInterface_FToT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHUDInterface_FToT()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHUDInterface_FToT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHUDInterface_HideTooltip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHUDInterface_HideTooltip_Statics::Function_MetaDataParams[] = {
		{ "Category", "Alerts" },
		{ "ModuleRelativePath", "Public/HUDInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHUDInterface_HideTooltip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHUDInterface, nullptr, "HideTooltip", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHUDInterface_HideTooltip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHUDInterface_HideTooltip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHUDInterface_HideTooltip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHUDInterface_HideTooltip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHUDInterface_SetWIPI_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_inWIPI;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHUDInterface_SetWIPI_Statics::NewProp_inWIPI = { "inWIPI", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUDInterface_eventSetWIPI_Parms, inWIPI), Z_Construct_UClass_ACPP_WIPICharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHUDInterface_SetWIPI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHUDInterface_SetWIPI_Statics::NewProp_inWIPI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHUDInterface_SetWIPI_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/HUDInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHUDInterface_SetWIPI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHUDInterface, nullptr, "SetWIPI", nullptr, nullptr, sizeof(HUDInterface_eventSetWIPI_Parms), Z_Construct_UFunction_UHUDInterface_SetWIPI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHUDInterface_SetWIPI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHUDInterface_SetWIPI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHUDInterface_SetWIPI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHUDInterface_SetWIPI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHUDInterface_SetWIPI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHUDInterface_ShowAlert_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHUDInterface_ShowAlert_Statics::Function_MetaDataParams[] = {
		{ "Category", "Alerts" },
		{ "ModuleRelativePath", "Public/HUDInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHUDInterface_ShowAlert_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHUDInterface, nullptr, "ShowAlert", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHUDInterface_ShowAlert_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHUDInterface_ShowAlert_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHUDInterface_ShowAlert()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHUDInterface_ShowAlert_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHUDInterface_StopWinding_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHUDInterface_StopWinding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Winding" },
		{ "ModuleRelativePath", "Public/HUDInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHUDInterface_StopWinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHUDInterface, nullptr, "StopWinding", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHUDInterface_StopWinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHUDInterface_StopWinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHUDInterface_StopWinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHUDInterface_StopWinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHUDInterface_TToF_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHUDInterface_TToF_Statics::Function_MetaDataParams[] = {
		{ "Category", "POV" },
		{ "ModuleRelativePath", "Public/HUDInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHUDInterface_TToF_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHUDInterface, nullptr, "TToF", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHUDInterface_TToF_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHUDInterface_TToF_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHUDInterface_TToF()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHUDInterface_TToF_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHUDInterface_Wind_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHUDInterface_Wind_Statics::Function_MetaDataParams[] = {
		{ "Category", "Winding" },
		{ "ModuleRelativePath", "Public/HUDInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHUDInterface_Wind_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHUDInterface, nullptr, "Wind", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHUDInterface_Wind_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHUDInterface_Wind_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHUDInterface_Wind()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHUDInterface_Wind_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHUDInterface_NoRegister()
	{
		return UHUDInterface::StaticClass();
	}
	struct Z_Construct_UClass_UHUDInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHUDInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CollectAThon,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHUDInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHUDInterface_FToT, "FToT" }, // 2105689926
		{ &Z_Construct_UFunction_UHUDInterface_HideTooltip, "HideTooltip" }, // 2820720381
		{ &Z_Construct_UFunction_UHUDInterface_SetWIPI, "SetWIPI" }, // 1005055420
		{ &Z_Construct_UFunction_UHUDInterface_ShowAlert, "ShowAlert" }, // 1442234808
		{ &Z_Construct_UFunction_UHUDInterface_StopWinding, "StopWinding" }, // 1157536900
		{ &Z_Construct_UFunction_UHUDInterface_TToF, "TToF" }, // 1290519556
		{ &Z_Construct_UFunction_UHUDInterface_Wind, "Wind" }, // 3517725564
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHUDInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HUDInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHUDInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IHUDInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHUDInterface_Statics::ClassParams = {
		&UHUDInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHUDInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHUDInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHUDInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHUDInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHUDInterface, 192233245);
	template<> COLLECTATHON_API UClass* StaticClass<UHUDInterface>()
	{
		return UHUDInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHUDInterface(Z_Construct_UClass_UHUDInterface, &UHUDInterface::StaticClass, TEXT("/Script/CollectAThon"), TEXT("UHUDInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHUDInterface);
	static FName NAME_UHUDInterface_FToT = FName(TEXT("FToT"));
	void IHUDInterface::Execute_FToT(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UHUDInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UHUDInterface_FToT);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IHUDInterface*)(O->GetNativeInterfaceAddress(UHUDInterface::StaticClass())))
		{
			I->FToT_Implementation();
		}
	}
	static FName NAME_UHUDInterface_HideTooltip = FName(TEXT("HideTooltip"));
	void IHUDInterface::Execute_HideTooltip(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UHUDInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UHUDInterface_HideTooltip);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IHUDInterface*)(O->GetNativeInterfaceAddress(UHUDInterface::StaticClass())))
		{
			I->HideTooltip_Implementation();
		}
	}
	static FName NAME_UHUDInterface_SetWIPI = FName(TEXT("SetWIPI"));
	void IHUDInterface::Execute_SetWIPI(UObject* O, ACPP_WIPICharacter* inWIPI)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UHUDInterface::StaticClass()));
		HUDInterface_eventSetWIPI_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UHUDInterface_SetWIPI);
		if (Func)
		{
			Parms.inWIPI=inWIPI;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IHUDInterface*)(O->GetNativeInterfaceAddress(UHUDInterface::StaticClass())))
		{
			I->SetWIPI_Implementation(inWIPI);
		}
	}
	static FName NAME_UHUDInterface_ShowAlert = FName(TEXT("ShowAlert"));
	void IHUDInterface::Execute_ShowAlert(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UHUDInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UHUDInterface_ShowAlert);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IHUDInterface*)(O->GetNativeInterfaceAddress(UHUDInterface::StaticClass())))
		{
			I->ShowAlert_Implementation();
		}
	}
	static FName NAME_UHUDInterface_StopWinding = FName(TEXT("StopWinding"));
	void IHUDInterface::Execute_StopWinding(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UHUDInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UHUDInterface_StopWinding);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IHUDInterface*)(O->GetNativeInterfaceAddress(UHUDInterface::StaticClass())))
		{
			I->StopWinding_Implementation();
		}
	}
	static FName NAME_UHUDInterface_TToF = FName(TEXT("TToF"));
	void IHUDInterface::Execute_TToF(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UHUDInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UHUDInterface_TToF);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IHUDInterface*)(O->GetNativeInterfaceAddress(UHUDInterface::StaticClass())))
		{
			I->TToF_Implementation();
		}
	}
	static FName NAME_UHUDInterface_Wind = FName(TEXT("Wind"));
	void IHUDInterface::Execute_Wind(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UHUDInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UHUDInterface_Wind);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IHUDInterface*)(O->GetNativeInterfaceAddress(UHUDInterface::StaticClass())))
		{
			I->Wind_Implementation();
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
