// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CollectAThon/Public/BallInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBallInterface() {}
// Cross Module References
	COLLECTATHON_API UClass* Z_Construct_UClass_UBallInterface_NoRegister();
	COLLECTATHON_API UClass* Z_Construct_UClass_UBallInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_CollectAThon();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IBallInterface::execSetComponentToFollow)
	{
		P_GET_OBJECT(AActor,Z_Param_Player);
		P_GET_OBJECT(USceneComponent,Z_Param_Comp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetComponentToFollow_Implementation(Z_Param_Player,Z_Param_Comp);
		P_NATIVE_END;
	}
	void IBallInterface::SetComponentToFollow(AActor* Player, USceneComponent* Comp)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetComponentToFollow instead.");
	}
	void UBallInterface::StaticRegisterNativesUBallInterface()
	{
		UClass* Class = UBallInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetComponentToFollow", &IBallInterface::execSetComponentToFollow },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBallInterface_SetComponentToFollow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Comp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Comp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBallInterface_SetComponentToFollow_Statics::NewProp_Comp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBallInterface_SetComponentToFollow_Statics::NewProp_Comp = { "Comp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BallInterface_eventSetComponentToFollow_Parms, Comp), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBallInterface_SetComponentToFollow_Statics::NewProp_Comp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBallInterface_SetComponentToFollow_Statics::NewProp_Comp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBallInterface_SetComponentToFollow_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BallInterface_eventSetComponentToFollow_Parms, Player), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBallInterface_SetComponentToFollow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBallInterface_SetComponentToFollow_Statics::NewProp_Comp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBallInterface_SetComponentToFollow_Statics::NewProp_Player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBallInterface_SetComponentToFollow_Statics::Function_MetaDataParams[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/BallInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBallInterface_SetComponentToFollow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBallInterface, nullptr, "SetComponentToFollow", nullptr, nullptr, sizeof(BallInterface_eventSetComponentToFollow_Parms), Z_Construct_UFunction_UBallInterface_SetComponentToFollow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBallInterface_SetComponentToFollow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBallInterface_SetComponentToFollow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBallInterface_SetComponentToFollow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBallInterface_SetComponentToFollow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBallInterface_SetComponentToFollow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBallInterface_NoRegister()
	{
		return UBallInterface::StaticClass();
	}
	struct Z_Construct_UClass_UBallInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBallInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CollectAThon,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBallInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBallInterface_SetComponentToFollow, "SetComponentToFollow" }, // 2970373590
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBallInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BallInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBallInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBallInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBallInterface_Statics::ClassParams = {
		&UBallInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBallInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBallInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBallInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBallInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBallInterface, 2966616716);
	template<> COLLECTATHON_API UClass* StaticClass<UBallInterface>()
	{
		return UBallInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBallInterface(Z_Construct_UClass_UBallInterface, &UBallInterface::StaticClass, TEXT("/Script/CollectAThon"), TEXT("UBallInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBallInterface);
	static FName NAME_UBallInterface_SetComponentToFollow = FName(TEXT("SetComponentToFollow"));
	void IBallInterface::Execute_SetComponentToFollow(UObject* O, AActor* Player, USceneComponent* Comp)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UBallInterface::StaticClass()));
		BallInterface_eventSetComponentToFollow_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UBallInterface_SetComponentToFollow);
		if (Func)
		{
			Parms.Player=Player;
			Parms.Comp=Comp;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IBallInterface*)(O->GetNativeInterfaceAddress(UBallInterface::StaticClass())))
		{
			I->SetComponentToFollow_Implementation(Player,Comp);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
