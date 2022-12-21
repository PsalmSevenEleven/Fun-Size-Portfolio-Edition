// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACPP_WIPICharacter;
#ifdef COLLECTATHON_TutorialInterface_generated_h
#error "TutorialInterface.generated.h already included, missing '#pragma once' in TutorialInterface.h"
#endif
#define COLLECTATHON_TutorialInterface_generated_h

#define CollectAThon_Source_CollectAThon_Public_TutorialInterface_h_13_SPARSE_DATA
#define CollectAThon_Source_CollectAThon_Public_TutorialInterface_h_13_RPC_WRAPPERS \
	virtual void POVPassed_Implementation() {}; \
	virtual void MovePassed_Implementation() {}; \
	virtual void LookPassed_Implementation() {}; \
	virtual void StartTutorial_Implementation() {}; \
	virtual void SetPlayer_Implementation(ACPP_WIPICharacter* Player) {}; \
 \
	DECLARE_FUNCTION(execPOVPassed); \
	DECLARE_FUNCTION(execMovePassed); \
	DECLARE_FUNCTION(execLookPassed); \
	DECLARE_FUNCTION(execStartTutorial); \
	DECLARE_FUNCTION(execSetPlayer);


#define CollectAThon_Source_CollectAThon_Public_TutorialInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void POVPassed_Implementation() {}; \
	virtual void MovePassed_Implementation() {}; \
	virtual void LookPassed_Implementation() {}; \
	virtual void StartTutorial_Implementation() {}; \
	virtual void SetPlayer_Implementation(ACPP_WIPICharacter* Player) {}; \
 \
	DECLARE_FUNCTION(execPOVPassed); \
	DECLARE_FUNCTION(execMovePassed); \
	DECLARE_FUNCTION(execLookPassed); \
	DECLARE_FUNCTION(execStartTutorial); \
	DECLARE_FUNCTION(execSetPlayer);


#define CollectAThon_Source_CollectAThon_Public_TutorialInterface_h_13_EVENT_PARMS \
	struct TutorialInterface_eventSetPlayer_Parms \
	{ \
		ACPP_WIPICharacter* Player; \
	};


#define CollectAThon_Source_CollectAThon_Public_TutorialInterface_h_13_CALLBACK_WRAPPERS
#define CollectAThon_Source_CollectAThon_Public_TutorialInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COLLECTATHON_API UTutorialInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTutorialInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COLLECTATHON_API, UTutorialInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTutorialInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	COLLECTATHON_API UTutorialInterface(UTutorialInterface&&); \
	COLLECTATHON_API UTutorialInterface(const UTutorialInterface&); \
public:


#define CollectAThon_Source_CollectAThon_Public_TutorialInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COLLECTATHON_API UTutorialInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	COLLECTATHON_API UTutorialInterface(UTutorialInterface&&); \
	COLLECTATHON_API UTutorialInterface(const UTutorialInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COLLECTATHON_API, UTutorialInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTutorialInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTutorialInterface)


#define CollectAThon_Source_CollectAThon_Public_TutorialInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTutorialInterface(); \
	friend struct Z_Construct_UClass_UTutorialInterface_Statics; \
public: \
	DECLARE_CLASS(UTutorialInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/CollectAThon"), COLLECTATHON_API) \
	DECLARE_SERIALIZER(UTutorialInterface)


#define CollectAThon_Source_CollectAThon_Public_TutorialInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	CollectAThon_Source_CollectAThon_Public_TutorialInterface_h_13_GENERATED_UINTERFACE_BODY() \
	CollectAThon_Source_CollectAThon_Public_TutorialInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CollectAThon_Source_CollectAThon_Public_TutorialInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	CollectAThon_Source_CollectAThon_Public_TutorialInterface_h_13_GENERATED_UINTERFACE_BODY() \
	CollectAThon_Source_CollectAThon_Public_TutorialInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CollectAThon_Source_CollectAThon_Public_TutorialInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITutorialInterface() {} \
public: \
	typedef UTutorialInterface UClassType; \
	typedef ITutorialInterface ThisClass; \
	static void Execute_LookPassed(UObject* O); \
	static void Execute_MovePassed(UObject* O); \
	static void Execute_POVPassed(UObject* O); \
	static void Execute_SetPlayer(UObject* O, ACPP_WIPICharacter* Player); \
	static void Execute_StartTutorial(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define CollectAThon_Source_CollectAThon_Public_TutorialInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~ITutorialInterface() {} \
public: \
	typedef UTutorialInterface UClassType; \
	typedef ITutorialInterface ThisClass; \
	static void Execute_LookPassed(UObject* O); \
	static void Execute_MovePassed(UObject* O); \
	static void Execute_POVPassed(UObject* O); \
	static void Execute_SetPlayer(UObject* O, ACPP_WIPICharacter* Player); \
	static void Execute_StartTutorial(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define CollectAThon_Source_CollectAThon_Public_TutorialInterface_h_10_PROLOG \
	CollectAThon_Source_CollectAThon_Public_TutorialInterface_h_13_EVENT_PARMS


#define CollectAThon_Source_CollectAThon_Public_TutorialInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CollectAThon_Source_CollectAThon_Public_TutorialInterface_h_13_SPARSE_DATA \
	CollectAThon_Source_CollectAThon_Public_TutorialInterface_h_13_RPC_WRAPPERS \
	CollectAThon_Source_CollectAThon_Public_TutorialInterface_h_13_CALLBACK_WRAPPERS \
	CollectAThon_Source_CollectAThon_Public_TutorialInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CollectAThon_Source_CollectAThon_Public_TutorialInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CollectAThon_Source_CollectAThon_Public_TutorialInterface_h_13_SPARSE_DATA \
	CollectAThon_Source_CollectAThon_Public_TutorialInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	CollectAThon_Source_CollectAThon_Public_TutorialInterface_h_13_CALLBACK_WRAPPERS \
	CollectAThon_Source_CollectAThon_Public_TutorialInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COLLECTATHON_API UClass* StaticClass<class UTutorialInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CollectAThon_Source_CollectAThon_Public_TutorialInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
