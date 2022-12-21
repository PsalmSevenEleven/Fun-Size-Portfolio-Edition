// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CollectAThon/Public/BP_FuncLib_VectorMath.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBP_FuncLib_VectorMath() {}
// Cross Module References
	COLLECTATHON_API UClass* Z_Construct_UClass_UBP_FuncLib_VectorMath_NoRegister();
	COLLECTATHON_API UClass* Z_Construct_UClass_UBP_FuncLib_VectorMath();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_CollectAThon();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(UBP_FuncLib_VectorMath::execVectorAtDistanceOnLine)
	{
		P_GET_STRUCT(FVector,Z_Param_startPoint);
		P_GET_STRUCT(FVector,Z_Param_endPoint);
		P_GET_PROPERTY(FFloatProperty,Z_Param_distance);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UBP_FuncLib_VectorMath::VectorAtDistanceOnLine(Z_Param_startPoint,Z_Param_endPoint,Z_Param_distance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBP_FuncLib_VectorMath::execGetAngleBetweenVectors)
	{
		P_GET_STRUCT(FVector,Z_Param_a);
		P_GET_STRUCT(FVector,Z_Param_b);
		P_GET_STRUCT(FVector,Z_Param_vertex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UBP_FuncLib_VectorMath::GetAngleBetweenVectors(Z_Param_a,Z_Param_b,Z_Param_vertex);
		P_NATIVE_END;
	}
	void UBP_FuncLib_VectorMath::StaticRegisterNativesUBP_FuncLib_VectorMath()
	{
		UClass* Class = UBP_FuncLib_VectorMath::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAngleBetweenVectors", &UBP_FuncLib_VectorMath::execGetAngleBetweenVectors },
			{ "VectorAtDistanceOnLine", &UBP_FuncLib_VectorMath::execVectorAtDistanceOnLine },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBP_FuncLib_VectorMath_GetAngleBetweenVectors_Statics
	{
		struct BP_FuncLib_VectorMath_eventGetAngleBetweenVectors_Parms
		{
			FVector a;
			FVector b;
			FVector vertex;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_vertex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_a;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBP_FuncLib_VectorMath_GetAngleBetweenVectors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_FuncLib_VectorMath_eventGetAngleBetweenVectors_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBP_FuncLib_VectorMath_GetAngleBetweenVectors_Statics::NewProp_vertex = { "vertex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_FuncLib_VectorMath_eventGetAngleBetweenVectors_Parms, vertex), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBP_FuncLib_VectorMath_GetAngleBetweenVectors_Statics::NewProp_b = { "b", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_FuncLib_VectorMath_eventGetAngleBetweenVectors_Parms, b), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBP_FuncLib_VectorMath_GetAngleBetweenVectors_Statics::NewProp_a = { "a", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_FuncLib_VectorMath_eventGetAngleBetweenVectors_Parms, a), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBP_FuncLib_VectorMath_GetAngleBetweenVectors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_FuncLib_VectorMath_GetAngleBetweenVectors_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_FuncLib_VectorMath_GetAngleBetweenVectors_Statics::NewProp_vertex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_FuncLib_VectorMath_GetAngleBetweenVectors_Statics::NewProp_b,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_FuncLib_VectorMath_GetAngleBetweenVectors_Statics::NewProp_a,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBP_FuncLib_VectorMath_GetAngleBetweenVectors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Custom 3D Vector Operations" },
		{ "ModuleRelativePath", "Public/BP_FuncLib_VectorMath.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBP_FuncLib_VectorMath_GetAngleBetweenVectors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBP_FuncLib_VectorMath, nullptr, "GetAngleBetweenVectors", nullptr, nullptr, sizeof(BP_FuncLib_VectorMath_eventGetAngleBetweenVectors_Parms), Z_Construct_UFunction_UBP_FuncLib_VectorMath_GetAngleBetweenVectors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_FuncLib_VectorMath_GetAngleBetweenVectors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBP_FuncLib_VectorMath_GetAngleBetweenVectors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_FuncLib_VectorMath_GetAngleBetweenVectors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBP_FuncLib_VectorMath_GetAngleBetweenVectors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBP_FuncLib_VectorMath_GetAngleBetweenVectors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBP_FuncLib_VectorMath_VectorAtDistanceOnLine_Statics
	{
		struct BP_FuncLib_VectorMath_eventVectorAtDistanceOnLine_Parms
		{
			FVector startPoint;
			FVector endPoint;
			float distance;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_distance;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_endPoint;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_startPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBP_FuncLib_VectorMath_VectorAtDistanceOnLine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_FuncLib_VectorMath_eventVectorAtDistanceOnLine_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBP_FuncLib_VectorMath_VectorAtDistanceOnLine_Statics::NewProp_distance = { "distance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_FuncLib_VectorMath_eventVectorAtDistanceOnLine_Parms, distance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBP_FuncLib_VectorMath_VectorAtDistanceOnLine_Statics::NewProp_endPoint = { "endPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_FuncLib_VectorMath_eventVectorAtDistanceOnLine_Parms, endPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBP_FuncLib_VectorMath_VectorAtDistanceOnLine_Statics::NewProp_startPoint = { "startPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BP_FuncLib_VectorMath_eventVectorAtDistanceOnLine_Parms, startPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBP_FuncLib_VectorMath_VectorAtDistanceOnLine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_FuncLib_VectorMath_VectorAtDistanceOnLine_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_FuncLib_VectorMath_VectorAtDistanceOnLine_Statics::NewProp_distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_FuncLib_VectorMath_VectorAtDistanceOnLine_Statics::NewProp_endPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_FuncLib_VectorMath_VectorAtDistanceOnLine_Statics::NewProp_startPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBP_FuncLib_VectorMath_VectorAtDistanceOnLine_Statics::Function_MetaDataParams[] = {
		{ "Category", "Custom 3D Vector Operations" },
		{ "ModuleRelativePath", "Public/BP_FuncLib_VectorMath.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBP_FuncLib_VectorMath_VectorAtDistanceOnLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBP_FuncLib_VectorMath, nullptr, "VectorAtDistanceOnLine", nullptr, nullptr, sizeof(BP_FuncLib_VectorMath_eventVectorAtDistanceOnLine_Parms), Z_Construct_UFunction_UBP_FuncLib_VectorMath_VectorAtDistanceOnLine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_FuncLib_VectorMath_VectorAtDistanceOnLine_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBP_FuncLib_VectorMath_VectorAtDistanceOnLine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_FuncLib_VectorMath_VectorAtDistanceOnLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBP_FuncLib_VectorMath_VectorAtDistanceOnLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBP_FuncLib_VectorMath_VectorAtDistanceOnLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBP_FuncLib_VectorMath_NoRegister()
	{
		return UBP_FuncLib_VectorMath::StaticClass();
	}
	struct Z_Construct_UClass_UBP_FuncLib_VectorMath_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBP_FuncLib_VectorMath_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CollectAThon,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBP_FuncLib_VectorMath_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBP_FuncLib_VectorMath_GetAngleBetweenVectors, "GetAngleBetweenVectors" }, // 2812704423
		{ &Z_Construct_UFunction_UBP_FuncLib_VectorMath_VectorAtDistanceOnLine, "VectorAtDistanceOnLine" }, // 1565263738
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBP_FuncLib_VectorMath_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BP_FuncLib_VectorMath.h" },
		{ "ModuleRelativePath", "Public/BP_FuncLib_VectorMath.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBP_FuncLib_VectorMath_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBP_FuncLib_VectorMath>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBP_FuncLib_VectorMath_Statics::ClassParams = {
		&UBP_FuncLib_VectorMath::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBP_FuncLib_VectorMath_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBP_FuncLib_VectorMath_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBP_FuncLib_VectorMath()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBP_FuncLib_VectorMath_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBP_FuncLib_VectorMath, 1253009857);
	template<> COLLECTATHON_API UClass* StaticClass<UBP_FuncLib_VectorMath>()
	{
		return UBP_FuncLib_VectorMath::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBP_FuncLib_VectorMath(Z_Construct_UClass_UBP_FuncLib_VectorMath, &UBP_FuncLib_VectorMath::StaticClass, TEXT("/Script/CollectAThon"), TEXT("UBP_FuncLib_VectorMath"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBP_FuncLib_VectorMath);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
