// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CollectAThon/Public/PauseMenuInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePauseMenuInterface() {}
// Cross Module References
	COLLECTATHON_API UClass* Z_Construct_UClass_UPauseMenuInterface_NoRegister();
	COLLECTATHON_API UClass* Z_Construct_UClass_UPauseMenuInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_CollectAThon();
// End Cross Module References
	DEFINE_FUNCTION(IPauseMenuInterface::execBack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Back_Implementation();
		P_NATIVE_END;
	}
	void IPauseMenuInterface::Back()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Back instead.");
	}
	void UPauseMenuInterface::StaticRegisterNativesUPauseMenuInterface()
	{
		UClass* Class = UPauseMenuInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Back", &IPauseMenuInterface::execBack },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPauseMenuInterface_Back_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPauseMenuInterface_Back_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pause Menu" },
		{ "ModuleRelativePath", "Public/PauseMenuInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPauseMenuInterface_Back_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPauseMenuInterface, nullptr, "Back", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPauseMenuInterface_Back_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPauseMenuInterface_Back_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPauseMenuInterface_Back()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPauseMenuInterface_Back_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPauseMenuInterface_NoRegister()
	{
		return UPauseMenuInterface::StaticClass();
	}
	struct Z_Construct_UClass_UPauseMenuInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPauseMenuInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CollectAThon,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPauseMenuInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPauseMenuInterface_Back, "Back" }, // 2942158526
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPauseMenuInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PauseMenuInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPauseMenuInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPauseMenuInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPauseMenuInterface_Statics::ClassParams = {
		&UPauseMenuInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPauseMenuInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPauseMenuInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPauseMenuInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPauseMenuInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPauseMenuInterface, 607607159);
	template<> COLLECTATHON_API UClass* StaticClass<UPauseMenuInterface>()
	{
		return UPauseMenuInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPauseMenuInterface(Z_Construct_UClass_UPauseMenuInterface, &UPauseMenuInterface::StaticClass, TEXT("/Script/CollectAThon"), TEXT("UPauseMenuInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPauseMenuInterface);
	static FName NAME_UPauseMenuInterface_Back = FName(TEXT("Back"));
	void IPauseMenuInterface::Execute_Back(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPauseMenuInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UPauseMenuInterface_Back);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IPauseMenuInterface*)(O->GetNativeInterfaceAddress(UPauseMenuInterface::StaticClass())))
		{
			I->Back_Implementation();
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
