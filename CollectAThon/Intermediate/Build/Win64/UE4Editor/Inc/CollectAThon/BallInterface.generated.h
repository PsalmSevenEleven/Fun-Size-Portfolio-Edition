// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class USceneComponent;
#ifdef COLLECTATHON_BallInterface_generated_h
#error "BallInterface.generated.h already included, missing '#pragma once' in BallInterface.h"
#endif
#define COLLECTATHON_BallInterface_generated_h

#define CollectAThon_Source_CollectAThon_Public_BallInterface_h_13_SPARSE_DATA
#define CollectAThon_Source_CollectAThon_Public_BallInterface_h_13_RPC_WRAPPERS \
	virtual void SetComponentToFollow_Implementation(AActor* Player, USceneComponent* Comp) {}; \
 \
	DECLARE_FUNCTION(execSetComponentToFollow);


#define CollectAThon_Source_CollectAThon_Public_BallInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetComponentToFollow_Implementation(AActor* Player, USceneComponent* Comp) {}; \
 \
	DECLARE_FUNCTION(execSetComponentToFollow);


#define CollectAThon_Source_CollectAThon_Public_BallInterface_h_13_EVENT_PARMS \
	struct BallInterface_eventSetComponentToFollow_Parms \
	{ \
		AActor* Player; \
		USceneComponent* Comp; \
	};


#define CollectAThon_Source_CollectAThon_Public_BallInterface_h_13_CALLBACK_WRAPPERS
#define CollectAThon_Source_CollectAThon_Public_BallInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COLLECTATHON_API UBallInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBallInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COLLECTATHON_API, UBallInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBallInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	COLLECTATHON_API UBallInterface(UBallInterface&&); \
	COLLECTATHON_API UBallInterface(const UBallInterface&); \
public:


#define CollectAThon_Source_CollectAThon_Public_BallInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COLLECTATHON_API UBallInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	COLLECTATHON_API UBallInterface(UBallInterface&&); \
	COLLECTATHON_API UBallInterface(const UBallInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COLLECTATHON_API, UBallInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBallInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBallInterface)


#define CollectAThon_Source_CollectAThon_Public_BallInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUBallInterface(); \
	friend struct Z_Construct_UClass_UBallInterface_Statics; \
public: \
	DECLARE_CLASS(UBallInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/CollectAThon"), COLLECTATHON_API) \
	DECLARE_SERIALIZER(UBallInterface)


#define CollectAThon_Source_CollectAThon_Public_BallInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	CollectAThon_Source_CollectAThon_Public_BallInterface_h_13_GENERATED_UINTERFACE_BODY() \
	CollectAThon_Source_CollectAThon_Public_BallInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CollectAThon_Source_CollectAThon_Public_BallInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	CollectAThon_Source_CollectAThon_Public_BallInterface_h_13_GENERATED_UINTERFACE_BODY() \
	CollectAThon_Source_CollectAThon_Public_BallInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CollectAThon_Source_CollectAThon_Public_BallInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IBallInterface() {} \
public: \
	typedef UBallInterface UClassType; \
	typedef IBallInterface ThisClass; \
	static void Execute_SetComponentToFollow(UObject* O, AActor* Player, USceneComponent* Comp); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define CollectAThon_Source_CollectAThon_Public_BallInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IBallInterface() {} \
public: \
	typedef UBallInterface UClassType; \
	typedef IBallInterface ThisClass; \
	static void Execute_SetComponentToFollow(UObject* O, AActor* Player, USceneComponent* Comp); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define CollectAThon_Source_CollectAThon_Public_BallInterface_h_10_PROLOG \
	CollectAThon_Source_CollectAThon_Public_BallInterface_h_13_EVENT_PARMS


#define CollectAThon_Source_CollectAThon_Public_BallInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CollectAThon_Source_CollectAThon_Public_BallInterface_h_13_SPARSE_DATA \
	CollectAThon_Source_CollectAThon_Public_BallInterface_h_13_RPC_WRAPPERS \
	CollectAThon_Source_CollectAThon_Public_BallInterface_h_13_CALLBACK_WRAPPERS \
	CollectAThon_Source_CollectAThon_Public_BallInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CollectAThon_Source_CollectAThon_Public_BallInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CollectAThon_Source_CollectAThon_Public_BallInterface_h_13_SPARSE_DATA \
	CollectAThon_Source_CollectAThon_Public_BallInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	CollectAThon_Source_CollectAThon_Public_BallInterface_h_13_CALLBACK_WRAPPERS \
	CollectAThon_Source_CollectAThon_Public_BallInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COLLECTATHON_API UClass* StaticClass<class UBallInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CollectAThon_Source_CollectAThon_Public_BallInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
