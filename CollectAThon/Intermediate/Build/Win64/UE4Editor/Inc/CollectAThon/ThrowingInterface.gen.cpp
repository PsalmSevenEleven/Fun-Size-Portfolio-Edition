// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CollectAThon/Public/ThrowingInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThrowingInterface() {}
// Cross Module References
	COLLECTATHON_API UClass* Z_Construct_UClass_UThrowingInterface_NoRegister();
	COLLECTATHON_API UClass* Z_Construct_UClass_UThrowingInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_CollectAThon();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IThrowingInterface::execSetActorClass)
	{
		P_GET_OBJECT(UClass,Z_Param_NewClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActorClass_Implementation(Z_Param_NewClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IThrowingInterface::execGetProjectileClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UClass**)Z_Param__Result=P_THIS->GetProjectileClass_Implementation();
		P_NATIVE_END;
	}
	UClass* IThrowingInterface::GetProjectileClass()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetProjectileClass instead.");
		ThrowingInterface_eventGetProjectileClass_Parms Parms;
		return Parms.ReturnValue;
	}
	void IThrowingInterface::SetActorClass(TSubclassOf<AActor>  NewClass)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetActorClass instead.");
	}
	void UThrowingInterface::StaticRegisterNativesUThrowingInterface()
	{
		UClass* Class = UThrowingInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetProjectileClass", &IThrowingInterface::execGetProjectileClass },
			{ "SetActorClass", &IThrowingInterface::execSetActorClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UThrowingInterface_GetProjectileClass_Statics
	{
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UThrowingInterface_GetProjectileClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ThrowingInterface_eventGetProjectileClass_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThrowingInterface_GetProjectileClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThrowingInterface_GetProjectileClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThrowingInterface_GetProjectileClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Throwing" },
		{ "ModuleRelativePath", "Public/ThrowingInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UThrowingInterface_GetProjectileClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UThrowingInterface, nullptr, "GetProjectileClass", nullptr, nullptr, sizeof(ThrowingInterface_eventGetProjectileClass_Parms), Z_Construct_UFunction_UThrowingInterface_GetProjectileClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UThrowingInterface_GetProjectileClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UThrowingInterface_GetProjectileClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UThrowingInterface_GetProjectileClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UThrowingInterface_GetProjectileClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UThrowingInterface_GetProjectileClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UThrowingInterface_SetActorClass_Statics
	{
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NewClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UThrowingInterface_SetActorClass_Statics::NewProp_NewClass = { "NewClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ThrowingInterface_eventSetActorClass_Parms, NewClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UThrowingInterface_SetActorClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UThrowingInterface_SetActorClass_Statics::NewProp_NewClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UThrowingInterface_SetActorClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Throwing" },
		{ "ModuleRelativePath", "Public/ThrowingInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UThrowingInterface_SetActorClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UThrowingInterface, nullptr, "SetActorClass", nullptr, nullptr, sizeof(ThrowingInterface_eventSetActorClass_Parms), Z_Construct_UFunction_UThrowingInterface_SetActorClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UThrowingInterface_SetActorClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UThrowingInterface_SetActorClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UThrowingInterface_SetActorClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UThrowingInterface_SetActorClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UThrowingInterface_SetActorClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UThrowingInterface_NoRegister()
	{
		return UThrowingInterface::StaticClass();
	}
	struct Z_Construct_UClass_UThrowingInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UThrowingInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CollectAThon,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UThrowingInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UThrowingInterface_GetProjectileClass, "GetProjectileClass" }, // 4070896229
		{ &Z_Construct_UFunction_UThrowingInterface_SetActorClass, "SetActorClass" }, // 2247239545
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UThrowingInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ThrowingInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UThrowingInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IThrowingInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UThrowingInterface_Statics::ClassParams = {
		&UThrowingInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UThrowingInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UThrowingInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UThrowingInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UThrowingInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UThrowingInterface, 2461739343);
	template<> COLLECTATHON_API UClass* StaticClass<UThrowingInterface>()
	{
		return UThrowingInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UThrowingInterface(Z_Construct_UClass_UThrowingInterface, &UThrowingInterface::StaticClass, TEXT("/Script/CollectAThon"), TEXT("UThrowingInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UThrowingInterface);
	static FName NAME_UThrowingInterface_GetProjectileClass = FName(TEXT("GetProjectileClass"));
	UClass* IThrowingInterface::Execute_GetProjectileClass(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UThrowingInterface::StaticClass()));
		ThrowingInterface_eventGetProjectileClass_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UThrowingInterface_GetProjectileClass);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IThrowingInterface*)(O->GetNativeInterfaceAddress(UThrowingInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetProjectileClass_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UThrowingInterface_SetActorClass = FName(TEXT("SetActorClass"));
	void IThrowingInterface::Execute_SetActorClass(UObject* O, TSubclassOf<AActor>  NewClass)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UThrowingInterface::StaticClass()));
		ThrowingInterface_eventSetActorClass_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UThrowingInterface_SetActorClass);
		if (Func)
		{
			Parms.NewClass=NewClass;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IThrowingInterface*)(O->GetNativeInterfaceAddress(UThrowingInterface::StaticClass())))
		{
			I->SetActorClass_Implementation(NewClass);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
