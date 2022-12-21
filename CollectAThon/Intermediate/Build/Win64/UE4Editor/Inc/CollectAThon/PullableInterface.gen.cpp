// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CollectAThon/Public/PullableInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePullableInterface() {}
// Cross Module References
	COLLECTATHON_API UClass* Z_Construct_UClass_UPullableInterface_NoRegister();
	COLLECTATHON_API UClass* Z_Construct_UClass_UPullableInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_CollectAThon();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(IPullableInterface::execGetMagLoc)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetMagLoc_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPullableInterface::execStopMoving)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopMoving_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPullableInterface::execMoveAway)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveAway_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPullableInterface::execMoveTo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveTo_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPullableInterface::execUnlock)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Unlock_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IPullableInterface::execLock)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Lock_Implementation();
		P_NATIVE_END;
	}
	FVector IPullableInterface::GetMagLoc()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetMagLoc instead.");
		PullableInterface_eventGetMagLoc_Parms Parms;
		return Parms.ReturnValue;
	}
	void IPullableInterface::Lock()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Lock instead.");
	}
	void IPullableInterface::MoveAway()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_MoveAway instead.");
	}
	void IPullableInterface::MoveTo()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_MoveTo instead.");
	}
	void IPullableInterface::StopMoving()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_StopMoving instead.");
	}
	void IPullableInterface::Unlock()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Unlock instead.");
	}
	void UPullableInterface::StaticRegisterNativesUPullableInterface()
	{
		UClass* Class = UPullableInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMagLoc", &IPullableInterface::execGetMagLoc },
			{ "Lock", &IPullableInterface::execLock },
			{ "MoveAway", &IPullableInterface::execMoveAway },
			{ "MoveTo", &IPullableInterface::execMoveTo },
			{ "StopMoving", &IPullableInterface::execStopMoving },
			{ "Unlock", &IPullableInterface::execUnlock },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPullableInterface_GetMagLoc_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPullableInterface_GetMagLoc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PullableInterface_eventGetMagLoc_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPullableInterface_GetMagLoc_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPullableInterface_GetMagLoc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPullableInterface_GetMagLoc_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pullable" },
		{ "ModuleRelativePath", "Public/PullableInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPullableInterface_GetMagLoc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPullableInterface, nullptr, "GetMagLoc", nullptr, nullptr, sizeof(PullableInterface_eventGetMagLoc_Parms), Z_Construct_UFunction_UPullableInterface_GetMagLoc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPullableInterface_GetMagLoc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPullableInterface_GetMagLoc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPullableInterface_GetMagLoc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPullableInterface_GetMagLoc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPullableInterface_GetMagLoc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPullableInterface_Lock_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPullableInterface_Lock_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pullable" },
		{ "ModuleRelativePath", "Public/PullableInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPullableInterface_Lock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPullableInterface, nullptr, "Lock", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPullableInterface_Lock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPullableInterface_Lock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPullableInterface_Lock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPullableInterface_Lock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPullableInterface_MoveAway_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPullableInterface_MoveAway_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pullable" },
		{ "ModuleRelativePath", "Public/PullableInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPullableInterface_MoveAway_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPullableInterface, nullptr, "MoveAway", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPullableInterface_MoveAway_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPullableInterface_MoveAway_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPullableInterface_MoveAway()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPullableInterface_MoveAway_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPullableInterface_MoveTo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPullableInterface_MoveTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pullable" },
		{ "ModuleRelativePath", "Public/PullableInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPullableInterface_MoveTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPullableInterface, nullptr, "MoveTo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPullableInterface_MoveTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPullableInterface_MoveTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPullableInterface_MoveTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPullableInterface_MoveTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPullableInterface_StopMoving_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPullableInterface_StopMoving_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pullable" },
		{ "ModuleRelativePath", "Public/PullableInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPullableInterface_StopMoving_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPullableInterface, nullptr, "StopMoving", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPullableInterface_StopMoving_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPullableInterface_StopMoving_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPullableInterface_StopMoving()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPullableInterface_StopMoving_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPullableInterface_Unlock_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPullableInterface_Unlock_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pullable" },
		{ "ModuleRelativePath", "Public/PullableInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPullableInterface_Unlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPullableInterface, nullptr, "Unlock", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPullableInterface_Unlock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPullableInterface_Unlock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPullableInterface_Unlock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPullableInterface_Unlock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPullableInterface_NoRegister()
	{
		return UPullableInterface::StaticClass();
	}
	struct Z_Construct_UClass_UPullableInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPullableInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CollectAThon,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPullableInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPullableInterface_GetMagLoc, "GetMagLoc" }, // 2039454937
		{ &Z_Construct_UFunction_UPullableInterface_Lock, "Lock" }, // 3865237372
		{ &Z_Construct_UFunction_UPullableInterface_MoveAway, "MoveAway" }, // 117951014
		{ &Z_Construct_UFunction_UPullableInterface_MoveTo, "MoveTo" }, // 1899892667
		{ &Z_Construct_UFunction_UPullableInterface_StopMoving, "StopMoving" }, // 4211865175
		{ &Z_Construct_UFunction_UPullableInterface_Unlock, "Unlock" }, // 3002101067
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPullableInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PullableInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPullableInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPullableInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPullableInterface_Statics::ClassParams = {
		&UPullableInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPullableInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPullableInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPullableInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPullableInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPullableInterface, 3148948242);
	template<> COLLECTATHON_API UClass* StaticClass<UPullableInterface>()
	{
		return UPullableInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPullableInterface(Z_Construct_UClass_UPullableInterface, &UPullableInterface::StaticClass, TEXT("/Script/CollectAThon"), TEXT("UPullableInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPullableInterface);
	static FName NAME_UPullableInterface_GetMagLoc = FName(TEXT("GetMagLoc"));
	FVector IPullableInterface::Execute_GetMagLoc(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPullableInterface::StaticClass()));
		PullableInterface_eventGetMagLoc_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UPullableInterface_GetMagLoc);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IPullableInterface*)(O->GetNativeInterfaceAddress(UPullableInterface::StaticClass())))
		{
			Parms.ReturnValue = I->GetMagLoc_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UPullableInterface_Lock = FName(TEXT("Lock"));
	void IPullableInterface::Execute_Lock(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPullableInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UPullableInterface_Lock);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IPullableInterface*)(O->GetNativeInterfaceAddress(UPullableInterface::StaticClass())))
		{
			I->Lock_Implementation();
		}
	}
	static FName NAME_UPullableInterface_MoveAway = FName(TEXT("MoveAway"));
	void IPullableInterface::Execute_MoveAway(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPullableInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UPullableInterface_MoveAway);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IPullableInterface*)(O->GetNativeInterfaceAddress(UPullableInterface::StaticClass())))
		{
			I->MoveAway_Implementation();
		}
	}
	static FName NAME_UPullableInterface_MoveTo = FName(TEXT("MoveTo"));
	void IPullableInterface::Execute_MoveTo(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPullableInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UPullableInterface_MoveTo);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IPullableInterface*)(O->GetNativeInterfaceAddress(UPullableInterface::StaticClass())))
		{
			I->MoveTo_Implementation();
		}
	}
	static FName NAME_UPullableInterface_StopMoving = FName(TEXT("StopMoving"));
	void IPullableInterface::Execute_StopMoving(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPullableInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UPullableInterface_StopMoving);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IPullableInterface*)(O->GetNativeInterfaceAddress(UPullableInterface::StaticClass())))
		{
			I->StopMoving_Implementation();
		}
	}
	static FName NAME_UPullableInterface_Unlock = FName(TEXT("Unlock"));
	void IPullableInterface::Execute_Unlock(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UPullableInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UPullableInterface_Unlock);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IPullableInterface*)(O->GetNativeInterfaceAddress(UPullableInterface::StaticClass())))
		{
			I->Unlock_Implementation();
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
