// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef COLLECTATHON_GrappleableInterface_generated_h
#error "GrappleableInterface.generated.h already included, missing '#pragma once' in GrappleableInterface.h"
#endif
#define COLLECTATHON_GrappleableInterface_generated_h

#define CollectAThon_Source_CollectAThon_Public_GrappleableInterface_h_13_SPARSE_DATA
#define CollectAThon_Source_CollectAThon_Public_GrappleableInterface_h_13_RPC_WRAPPERS \
	virtual FVector GetGrappleLoc_Implementation() { return FVector(ForceInit); }; \
	virtual void Unlock_Implementation() {}; \
	virtual void Lock_Implementation() {}; \
 \
	DECLARE_FUNCTION(execGetGrappleLoc); \
	DECLARE_FUNCTION(execUnlock); \
	DECLARE_FUNCTION(execLock);


#define CollectAThon_Source_CollectAThon_Public_GrappleableInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FVector GetGrappleLoc_Implementation() { return FVector(ForceInit); }; \
	virtual void Unlock_Implementation() {}; \
	virtual void Lock_Implementation() {}; \
 \
	DECLARE_FUNCTION(execGetGrappleLoc); \
	DECLARE_FUNCTION(execUnlock); \
	DECLARE_FUNCTION(execLock);


#define CollectAThon_Source_CollectAThon_Public_GrappleableInterface_h_13_EVENT_PARMS \
	struct GrappleableInterface_eventGetGrappleLoc_Parms \
	{ \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GrappleableInterface_eventGetGrappleLoc_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	};


#define CollectAThon_Source_CollectAThon_Public_GrappleableInterface_h_13_CALLBACK_WRAPPERS
#define CollectAThon_Source_CollectAThon_Public_GrappleableInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COLLECTATHON_API UGrappleableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGrappleableInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COLLECTATHON_API, UGrappleableInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGrappleableInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	COLLECTATHON_API UGrappleableInterface(UGrappleableInterface&&); \
	COLLECTATHON_API UGrappleableInterface(const UGrappleableInterface&); \
public:


#define CollectAThon_Source_CollectAThon_Public_GrappleableInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COLLECTATHON_API UGrappleableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	COLLECTATHON_API UGrappleableInterface(UGrappleableInterface&&); \
	COLLECTATHON_API UGrappleableInterface(const UGrappleableInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COLLECTATHON_API, UGrappleableInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGrappleableInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGrappleableInterface)


#define CollectAThon_Source_CollectAThon_Public_GrappleableInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGrappleableInterface(); \
	friend struct Z_Construct_UClass_UGrappleableInterface_Statics; \
public: \
	DECLARE_CLASS(UGrappleableInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/CollectAThon"), COLLECTATHON_API) \
	DECLARE_SERIALIZER(UGrappleableInterface)


#define CollectAThon_Source_CollectAThon_Public_GrappleableInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	CollectAThon_Source_CollectAThon_Public_GrappleableInterface_h_13_GENERATED_UINTERFACE_BODY() \
	CollectAThon_Source_CollectAThon_Public_GrappleableInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CollectAThon_Source_CollectAThon_Public_GrappleableInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	CollectAThon_Source_CollectAThon_Public_GrappleableInterface_h_13_GENERATED_UINTERFACE_BODY() \
	CollectAThon_Source_CollectAThon_Public_GrappleableInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CollectAThon_Source_CollectAThon_Public_GrappleableInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGrappleableInterface() {} \
public: \
	typedef UGrappleableInterface UClassType; \
	typedef IGrappleableInterface ThisClass; \
	static FVector Execute_GetGrappleLoc(UObject* O); \
	static void Execute_Lock(UObject* O); \
	static void Execute_Unlock(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define CollectAThon_Source_CollectAThon_Public_GrappleableInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IGrappleableInterface() {} \
public: \
	typedef UGrappleableInterface UClassType; \
	typedef IGrappleableInterface ThisClass; \
	static FVector Execute_GetGrappleLoc(UObject* O); \
	static void Execute_Lock(UObject* O); \
	static void Execute_Unlock(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define CollectAThon_Source_CollectAThon_Public_GrappleableInterface_h_10_PROLOG \
	CollectAThon_Source_CollectAThon_Public_GrappleableInterface_h_13_EVENT_PARMS


#define CollectAThon_Source_CollectAThon_Public_GrappleableInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CollectAThon_Source_CollectAThon_Public_GrappleableInterface_h_13_SPARSE_DATA \
	CollectAThon_Source_CollectAThon_Public_GrappleableInterface_h_13_RPC_WRAPPERS \
	CollectAThon_Source_CollectAThon_Public_GrappleableInterface_h_13_CALLBACK_WRAPPERS \
	CollectAThon_Source_CollectAThon_Public_GrappleableInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CollectAThon_Source_CollectAThon_Public_GrappleableInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CollectAThon_Source_CollectAThon_Public_GrappleableInterface_h_13_SPARSE_DATA \
	CollectAThon_Source_CollectAThon_Public_GrappleableInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	CollectAThon_Source_CollectAThon_Public_GrappleableInterface_h_13_CALLBACK_WRAPPERS \
	CollectAThon_Source_CollectAThon_Public_GrappleableInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COLLECTATHON_API UClass* StaticClass<class UGrappleableInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CollectAThon_Source_CollectAThon_Public_GrappleableInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
