// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CollectAThon/Public/GrappleableInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrappleableInterface() {}
// Cross Module References
	COLLECTATHON_API UClass* Z_Construct_UClass_UGrappleableInterface_NoRegister();
	COLLECTATHON_API UClass* Z_Construct_UClass_UGrappleableInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_CollectAThon();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(IGrappleableInterface::execGetGrappleLoc)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetGrappleLoc_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGrappleableInterface::execUnlock)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Unlock_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IGrappleableInterface::execLock)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Lock_Implementation();
		P_NATIVE_END;
	}
	FVector IGrappleableInterface::GetGrappleLoc()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetGrappleLoc instead.");
		GrappleableInterface_eventGetGrappleLoc_Parms Parms;
		return Parms.ReturnValue;
	}
	void IGrappleableInterface::Lock()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Lock instead.");
	}
	void IGrappleableInterface::Unlock()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Unlock instead.");
	}
	void UGrappleableInterface::StaticRegisterNativesUGrappleableInterface()
	{
		UClass* Class = UGrappleableInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGrappleLoc", &IGrappleableInterface::execGetGrappleLoc },
			{ "Lock", &IGrappleableInterface::execLock },
			{ "Unlock", &IGrappleableInterface::execUnlock },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGrappleableInterface_GetGrappleLoc_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGrappleableInterface_GetGrappleLoc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GrappleableInterface_eventGetGrappleLoc_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrappleableInterface_GetGrappleLoc_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrappleableInterface_GetGrappleLoc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrappleableInterface_GetGrappleLoc_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pullable" },
		{ "ModuleRelativePath", "Public/GrappleableInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrappleableInterface_GetGrappleLoc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrappleableInterface, nullptr, "GetGrappleLoc", nullptr, nullptr, sizeof(GrappleableInterface_eventGetGrappleLoc_Parms), Z_Construct_UFunction_UGrappleableInterface_GetGrappleLoc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrappleableInterface_GetGrappleLoc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrappleableInterface_GetGrappleLoc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrappleableInterface_GetGrappleLoc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrappleableInterface_GetGrappleLoc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrappleableInterface_GetGrappleLoc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrappleableInterface_Lock_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrappleableInterface_Lock_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grappleable" },
		{ "ModuleRelativePath", "Public/GrappleableInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrappleableInterface_Lock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrappleableInterface, nullptr, "Lock", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrappleableInterface_Lock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrappleableInterface_Lock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrappleableInterface_Lock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrappleableInterface_Lock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGrappleableInterface_Unlock_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGrappleableInterface_Unlock_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grappleable" },
		{ "ModuleRelativePath", "Public/GrappleableInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrappleableInterface_Unlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrappleableInterface, nullptr, "Unlock", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGrappleableInterface_Unlock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrappleableInterface_Unlock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGrappleableInterface_Unlock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGrappleableInterface_Unlock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGrappleableInterface_NoRegister()
	{
		return UGrappleableInterface::StaticClass();
	}
	struct Z_Construct_UClass_UGrappleableInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGrappleableInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CollectAThon,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGrappleableInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGrappleableInterface_GetGrappleLoc, "GetGrappleLoc" }, // 3658602832
		{ &Z_Construct_UFunction_UGrappleableInterface_Lock, "Lock" }, // 1759479556
		{ &Z_Construct_UFunction_UGrappleableInterface_Unlock, "Unlock" }, // 2749625875
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrappleableInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GrappleableInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGrappleableInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGrappleableInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGrappleableInterface_Statics::ClassParams = {
		&UGrappleableInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGrappleableInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGrappleableInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGrappleableInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGrappleableInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGrappleableInterface, 2926303345);
	template<> COLLECTATHON_API UClass* StaticClass<UGrappleableInterface>()
	{
		return UGrappleableInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGrappleableInterface(Z_Construct_UClass_UGrappleableInterface, &UGrappleableInterface::StaticClass, TEXT("/Script/CollectAThon"), TEXT("UGrappleableInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGrappleableInterface);
	static FName NAME_UGrappleableInterface_GetGrappleLoc = FName(TEXT("GetGrappleLoc"));
	FVector IGrappleableInterface::Execute_GetGrappleLoc(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UGrappleableInterface::StaticClass()));
		GrappleableInterface_eventGetGrappleLoc_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UGrappleableInterface_GetGrappleLoc);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IGrappleableInterface*)(O->GetNativeInterfaceAddress(UGrappleableInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetGrappleLoc_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UGrappleableInterface_Lock = FName(TEXT("Lock"));
	void IGrappleableInterface::Execute_Lock(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UGrappleableInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UGrappleableInterface_Lock);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IGrappleableInterface*)(O->GetNativeInterfaceAddress(UGrappleableInterface::StaticClass())))
		{
			I->Lock_Implementation();
		}
	}
	static FName NAME_UGrappleableInterface_Unlock = FName(TEXT("Unlock"));
	void IGrappleableInterface::Execute_Unlock(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UGrappleableInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UGrappleableInterface_Unlock);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IGrappleableInterface*)(O->GetNativeInterfaceAddress(UGrappleableInterface::StaticClass())))
		{
			I->Unlock_Implementation();
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
