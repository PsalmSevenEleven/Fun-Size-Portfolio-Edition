// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef COLLECTATHON_BP_FuncLib_VectorMath_generated_h
#error "BP_FuncLib_VectorMath.generated.h already included, missing '#pragma once' in BP_FuncLib_VectorMath.h"
#endif
#define COLLECTATHON_BP_FuncLib_VectorMath_generated_h

#define CollectAThon_Source_CollectAThon_Public_BP_FuncLib_VectorMath_h_16_SPARSE_DATA
#define CollectAThon_Source_CollectAThon_Public_BP_FuncLib_VectorMath_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execVectorAtDistanceOnLine); \
	DECLARE_FUNCTION(execGetAngleBetweenVectors);


#define CollectAThon_Source_CollectAThon_Public_BP_FuncLib_VectorMath_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execVectorAtDistanceOnLine); \
	DECLARE_FUNCTION(execGetAngleBetweenVectors);


#define CollectAThon_Source_CollectAThon_Public_BP_FuncLib_VectorMath_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBP_FuncLib_VectorMath(); \
	friend struct Z_Construct_UClass_UBP_FuncLib_VectorMath_Statics; \
public: \
	DECLARE_CLASS(UBP_FuncLib_VectorMath, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CollectAThon"), NO_API) \
	DECLARE_SERIALIZER(UBP_FuncLib_VectorMath)


#define CollectAThon_Source_CollectAThon_Public_BP_FuncLib_VectorMath_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUBP_FuncLib_VectorMath(); \
	friend struct Z_Construct_UClass_UBP_FuncLib_VectorMath_Statics; \
public: \
	DECLARE_CLASS(UBP_FuncLib_VectorMath, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CollectAThon"), NO_API) \
	DECLARE_SERIALIZER(UBP_FuncLib_VectorMath)


#define CollectAThon_Source_CollectAThon_Public_BP_FuncLib_VectorMath_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBP_FuncLib_VectorMath(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBP_FuncLib_VectorMath) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBP_FuncLib_VectorMath); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBP_FuncLib_VectorMath); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBP_FuncLib_VectorMath(UBP_FuncLib_VectorMath&&); \
	NO_API UBP_FuncLib_VectorMath(const UBP_FuncLib_VectorMath&); \
public:


#define CollectAThon_Source_CollectAThon_Public_BP_FuncLib_VectorMath_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBP_FuncLib_VectorMath(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBP_FuncLib_VectorMath(UBP_FuncLib_VectorMath&&); \
	NO_API UBP_FuncLib_VectorMath(const UBP_FuncLib_VectorMath&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBP_FuncLib_VectorMath); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBP_FuncLib_VectorMath); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBP_FuncLib_VectorMath)


#define CollectAThon_Source_CollectAThon_Public_BP_FuncLib_VectorMath_h_16_PRIVATE_PROPERTY_OFFSET
#define CollectAThon_Source_CollectAThon_Public_BP_FuncLib_VectorMath_h_13_PROLOG
#define CollectAThon_Source_CollectAThon_Public_BP_FuncLib_VectorMath_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CollectAThon_Source_CollectAThon_Public_BP_FuncLib_VectorMath_h_16_PRIVATE_PROPERTY_OFFSET \
	CollectAThon_Source_CollectAThon_Public_BP_FuncLib_VectorMath_h_16_SPARSE_DATA \
	CollectAThon_Source_CollectAThon_Public_BP_FuncLib_VectorMath_h_16_RPC_WRAPPERS \
	CollectAThon_Source_CollectAThon_Public_BP_FuncLib_VectorMath_h_16_INCLASS \
	CollectAThon_Source_CollectAThon_Public_BP_FuncLib_VectorMath_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CollectAThon_Source_CollectAThon_Public_BP_FuncLib_VectorMath_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CollectAThon_Source_CollectAThon_Public_BP_FuncLib_VectorMath_h_16_PRIVATE_PROPERTY_OFFSET \
	CollectAThon_Source_CollectAThon_Public_BP_FuncLib_VectorMath_h_16_SPARSE_DATA \
	CollectAThon_Source_CollectAThon_Public_BP_FuncLib_VectorMath_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	CollectAThon_Source_CollectAThon_Public_BP_FuncLib_VectorMath_h_16_INCLASS_NO_PURE_DECLS \
	CollectAThon_Source_CollectAThon_Public_BP_FuncLib_VectorMath_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COLLECTATHON_API UClass* StaticClass<class UBP_FuncLib_VectorMath>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CollectAThon_Source_CollectAThon_Public_BP_FuncLib_VectorMath_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
