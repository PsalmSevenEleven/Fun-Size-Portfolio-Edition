// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef COLLECTATHON_PullableInterface_generated_h
#error "PullableInterface.generated.h already included, missing '#pragma once' in PullableInterface.h"
#endif
#define COLLECTATHON_PullableInterface_generated_h

#define CollectAThon_Source_CollectAThon_Public_PullableInterface_h_13_SPARSE_DATA
#define CollectAThon_Source_CollectAThon_Public_PullableInterface_h_13_RPC_WRAPPERS \
	virtual FVector GetMagLoc_Implementation() { return FVector(ForceInit); }; \
	virtual void StopMoving_Implementation() {}; \
	virtual void MoveAway_Implementation() {}; \
	virtual void MoveTo_Implementation() {}; \
	virtual void Unlock_Implementation() {}; \
	virtual void Lock_Implementation() {}; \
 \
	DECLARE_FUNCTION(execGetMagLoc); \
	DECLARE_FUNCTION(execStopMoving); \
	DECLARE_FUNCTION(execMoveAway); \
	DECLARE_FUNCTION(execMoveTo); \
	DECLARE_FUNCTION(execUnlock); \
	DECLARE_FUNCTION(execLock);


#define CollectAThon_Source_CollectAThon_Public_PullableInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual FVector GetMagLoc_Implementation() { return FVector(ForceInit); }; \
	virtual void StopMoving_Implementation() {}; \
	virtual void MoveAway_Implementation() {}; \
	virtual void MoveTo_Implementation() {}; \
	virtual void Unlock_Implementation() {}; \
	virtual void Lock_Implementation() {}; \
 \
	DECLARE_FUNCTION(execGetMagLoc); \
	DECLARE_FUNCTION(execStopMoving); \
	DECLARE_FUNCTION(execMoveAway); \
	DECLARE_FUNCTION(execMoveTo); \
	DECLARE_FUNCTION(execUnlock); \
	DECLARE_FUNCTION(execLock);


#define CollectAThon_Source_CollectAThon_Public_PullableInterface_h_13_EVENT_PARMS \
	struct PullableInterface_eventGetMagLoc_Parms \
	{ \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		PullableInterface_eventGetMagLoc_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	};


#define CollectAThon_Source_CollectAThon_Public_PullableInterface_h_13_CALLBACK_WRAPPERS
#define CollectAThon_Source_CollectAThon_Public_PullableInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COLLECTATHON_API UPullableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPullableInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COLLECTATHON_API, UPullableInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPullableInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	COLLECTATHON_API UPullableInterface(UPullableInterface&&); \
	COLLECTATHON_API UPullableInterface(const UPullableInterface&); \
public:


#define CollectAThon_Source_CollectAThon_Public_PullableInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COLLECTATHON_API UPullableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	COLLECTATHON_API UPullableInterface(UPullableInterface&&); \
	COLLECTATHON_API UPullableInterface(const UPullableInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COLLECTATHON_API, UPullableInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPullableInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPullableInterface)


#define CollectAThon_Source_CollectAThon_Public_PullableInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPullableInterface(); \
	friend struct Z_Construct_UClass_UPullableInterface_Statics; \
public: \
	DECLARE_CLASS(UPullableInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/CollectAThon"), COLLECTATHON_API) \
	DECLARE_SERIALIZER(UPullableInterface)


#define CollectAThon_Source_CollectAThon_Public_PullableInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	CollectAThon_Source_CollectAThon_Public_PullableInterface_h_13_GENERATED_UINTERFACE_BODY() \
	CollectAThon_Source_CollectAThon_Public_PullableInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CollectAThon_Source_CollectAThon_Public_PullableInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	CollectAThon_Source_CollectAThon_Public_PullableInterface_h_13_GENERATED_UINTERFACE_BODY() \
	CollectAThon_Source_CollectAThon_Public_PullableInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CollectAThon_Source_CollectAThon_Public_PullableInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPullableInterface() {} \
public: \
	typedef UPullableInterface UClassType; \
	typedef IPullableInterface ThisClass; \
	static FVector Execute_GetMagLoc(UObject* O); \
	static void Execute_Lock(UObject* O); \
	static void Execute_MoveAway(UObject* O); \
	static void Execute_MoveTo(UObject* O); \
	static void Execute_StopMoving(UObject* O); \
	static void Execute_Unlock(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define CollectAThon_Source_CollectAThon_Public_PullableInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IPullableInterface() {} \
public: \
	typedef UPullableInterface UClassType; \
	typedef IPullableInterface ThisClass; \
	static FVector Execute_GetMagLoc(UObject* O); \
	static void Execute_Lock(UObject* O); \
	static void Execute_MoveAway(UObject* O); \
	static void Execute_MoveTo(UObject* O); \
	static void Execute_StopMoving(UObject* O); \
	static void Execute_Unlock(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define CollectAThon_Source_CollectAThon_Public_PullableInterface_h_10_PROLOG \
	CollectAThon_Source_CollectAThon_Public_PullableInterface_h_13_EVENT_PARMS


#define CollectAThon_Source_CollectAThon_Public_PullableInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CollectAThon_Source_CollectAThon_Public_PullableInterface_h_13_SPARSE_DATA \
	CollectAThon_Source_CollectAThon_Public_PullableInterface_h_13_RPC_WRAPPERS \
	CollectAThon_Source_CollectAThon_Public_PullableInterface_h_13_CALLBACK_WRAPPERS \
	CollectAThon_Source_CollectAThon_Public_PullableInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CollectAThon_Source_CollectAThon_Public_PullableInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CollectAThon_Source_CollectAThon_Public_PullableInterface_h_13_SPARSE_DATA \
	CollectAThon_Source_CollectAThon_Public_PullableInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	CollectAThon_Source_CollectAThon_Public_PullableInterface_h_13_CALLBACK_WRAPPERS \
	CollectAThon_Source_CollectAThon_Public_PullableInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COLLECTATHON_API UClass* StaticClass<class UPullableInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CollectAThon_Source_CollectAThon_Public_PullableInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
