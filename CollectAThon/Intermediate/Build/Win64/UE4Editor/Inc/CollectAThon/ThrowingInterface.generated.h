// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
#ifdef COLLECTATHON_ThrowingInterface_generated_h
#error "ThrowingInterface.generated.h already included, missing '#pragma once' in ThrowingInterface.h"
#endif
#define COLLECTATHON_ThrowingInterface_generated_h

#define CollectAThon_Source_CollectAThon_Public_ThrowingInterface_h_13_SPARSE_DATA
#define CollectAThon_Source_CollectAThon_Public_ThrowingInterface_h_13_RPC_WRAPPERS \
	virtual void SetActorClass_Implementation(TSubclassOf<AActor>  NewClass) {}; \
	virtual UClass* GetProjectileClass_Implementation() { return NULL; }; \
 \
	DECLARE_FUNCTION(execSetActorClass); \
	DECLARE_FUNCTION(execGetProjectileClass);


#define CollectAThon_Source_CollectAThon_Public_ThrowingInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetActorClass_Implementation(TSubclassOf<AActor>  NewClass) {}; \
	virtual UClass* GetProjectileClass_Implementation() { return NULL; }; \
 \
	DECLARE_FUNCTION(execSetActorClass); \
	DECLARE_FUNCTION(execGetProjectileClass);


#define CollectAThon_Source_CollectAThon_Public_ThrowingInterface_h_13_EVENT_PARMS \
	struct ThrowingInterface_eventGetProjectileClass_Parms \
	{ \
		UClass* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ThrowingInterface_eventGetProjectileClass_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct ThrowingInterface_eventSetActorClass_Parms \
	{ \
		TSubclassOf<AActor>  NewClass; \
	};


#define CollectAThon_Source_CollectAThon_Public_ThrowingInterface_h_13_CALLBACK_WRAPPERS
#define CollectAThon_Source_CollectAThon_Public_ThrowingInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COLLECTATHON_API UThrowingInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UThrowingInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COLLECTATHON_API, UThrowingInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UThrowingInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	COLLECTATHON_API UThrowingInterface(UThrowingInterface&&); \
	COLLECTATHON_API UThrowingInterface(const UThrowingInterface&); \
public:


#define CollectAThon_Source_CollectAThon_Public_ThrowingInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COLLECTATHON_API UThrowingInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	COLLECTATHON_API UThrowingInterface(UThrowingInterface&&); \
	COLLECTATHON_API UThrowingInterface(const UThrowingInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COLLECTATHON_API, UThrowingInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UThrowingInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UThrowingInterface)


#define CollectAThon_Source_CollectAThon_Public_ThrowingInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUThrowingInterface(); \
	friend struct Z_Construct_UClass_UThrowingInterface_Statics; \
public: \
	DECLARE_CLASS(UThrowingInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/CollectAThon"), COLLECTATHON_API) \
	DECLARE_SERIALIZER(UThrowingInterface)


#define CollectAThon_Source_CollectAThon_Public_ThrowingInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	CollectAThon_Source_CollectAThon_Public_ThrowingInterface_h_13_GENERATED_UINTERFACE_BODY() \
	CollectAThon_Source_CollectAThon_Public_ThrowingInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CollectAThon_Source_CollectAThon_Public_ThrowingInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	CollectAThon_Source_CollectAThon_Public_ThrowingInterface_h_13_GENERATED_UINTERFACE_BODY() \
	CollectAThon_Source_CollectAThon_Public_ThrowingInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CollectAThon_Source_CollectAThon_Public_ThrowingInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IThrowingInterface() {} \
public: \
	typedef UThrowingInterface UClassType; \
	typedef IThrowingInterface ThisClass; \
	static UClass* Execute_GetProjectileClass(UObject* O); \
	static void Execute_SetActorClass(UObject* O, TSubclassOf<AActor>  NewClass); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define CollectAThon_Source_CollectAThon_Public_ThrowingInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IThrowingInterface() {} \
public: \
	typedef UThrowingInterface UClassType; \
	typedef IThrowingInterface ThisClass; \
	static UClass* Execute_GetProjectileClass(UObject* O); \
	static void Execute_SetActorClass(UObject* O, TSubclassOf<AActor>  NewClass); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define CollectAThon_Source_CollectAThon_Public_ThrowingInterface_h_10_PROLOG \
	CollectAThon_Source_CollectAThon_Public_ThrowingInterface_h_13_EVENT_PARMS


#define CollectAThon_Source_CollectAThon_Public_ThrowingInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CollectAThon_Source_CollectAThon_Public_ThrowingInterface_h_13_SPARSE_DATA \
	CollectAThon_Source_CollectAThon_Public_ThrowingInterface_h_13_RPC_WRAPPERS \
	CollectAThon_Source_CollectAThon_Public_ThrowingInterface_h_13_CALLBACK_WRAPPERS \
	CollectAThon_Source_CollectAThon_Public_ThrowingInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CollectAThon_Source_CollectAThon_Public_ThrowingInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CollectAThon_Source_CollectAThon_Public_ThrowingInterface_h_13_SPARSE_DATA \
	CollectAThon_Source_CollectAThon_Public_ThrowingInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	CollectAThon_Source_CollectAThon_Public_ThrowingInterface_h_13_CALLBACK_WRAPPERS \
	CollectAThon_Source_CollectAThon_Public_ThrowingInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COLLECTATHON_API UClass* StaticClass<class UThrowingInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CollectAThon_Source_CollectAThon_Public_ThrowingInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
