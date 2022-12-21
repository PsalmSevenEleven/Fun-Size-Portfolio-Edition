// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CollectAThon/Public/CPP_LevelHandler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_LevelHandler() {}
// Cross Module References
	COLLECTATHON_API UClass* Z_Construct_UClass_ACPP_LevelHandler_NoRegister();
	COLLECTATHON_API UClass* Z_Construct_UClass_ACPP_LevelHandler();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CollectAThon();
// End Cross Module References
	void ACPP_LevelHandler::StaticRegisterNativesACPP_LevelHandler()
	{
	}
	UClass* Z_Construct_UClass_ACPP_LevelHandler_NoRegister()
	{
		return ACPP_LevelHandler::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_LevelHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_LevelHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CollectAThon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_LevelHandler_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CPP_LevelHandler.h" },
		{ "ModuleRelativePath", "Public/CPP_LevelHandler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_LevelHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_LevelHandler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACPP_LevelHandler_Statics::ClassParams = {
		&ACPP_LevelHandler::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACPP_LevelHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_LevelHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACPP_LevelHandler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACPP_LevelHandler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACPP_LevelHandler, 4126284489);
	template<> COLLECTATHON_API UClass* StaticClass<ACPP_LevelHandler>()
	{
		return ACPP_LevelHandler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACPP_LevelHandler(Z_Construct_UClass_ACPP_LevelHandler, &ACPP_LevelHandler::StaticClass, TEXT("/Script/CollectAThon"), TEXT("ACPP_LevelHandler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_LevelHandler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
