// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COLLECTATHON_PauseMenuInterface_generated_h
#error "PauseMenuInterface.generated.h already included, missing '#pragma once' in PauseMenuInterface.h"
#endif
#define COLLECTATHON_PauseMenuInterface_generated_h

#define CollectAThon_Source_CollectAThon_Public_PauseMenuInterface_h_13_SPARSE_DATA
#define CollectAThon_Source_CollectAThon_Public_PauseMenuInterface_h_13_RPC_WRAPPERS \
	virtual void Back_Implementation() {}; \
 \
	DECLARE_FUNCTION(execBack);


#define CollectAThon_Source_CollectAThon_Public_PauseMenuInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Back_Implementation() {}; \
 \
	DECLARE_FUNCTION(execBack);


#define CollectAThon_Source_CollectAThon_Public_PauseMenuInterface_h_13_EVENT_PARMS
#define CollectAThon_Source_CollectAThon_Public_PauseMenuInterface_h_13_CALLBACK_WRAPPERS
#define CollectAThon_Source_CollectAThon_Public_PauseMenuInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COLLECTATHON_API UPauseMenuInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPauseMenuInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COLLECTATHON_API, UPauseMenuInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPauseMenuInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	COLLECTATHON_API UPauseMenuInterface(UPauseMenuInterface&&); \
	COLLECTATHON_API UPauseMenuInterface(const UPauseMenuInterface&); \
public:


#define CollectAThon_Source_CollectAThon_Public_PauseMenuInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COLLECTATHON_API UPauseMenuInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	COLLECTATHON_API UPauseMenuInterface(UPauseMenuInterface&&); \
	COLLECTATHON_API UPauseMenuInterface(const UPauseMenuInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COLLECTATHON_API, UPauseMenuInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPauseMenuInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPauseMenuInterface)


#define CollectAThon_Source_CollectAThon_Public_PauseMenuInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPauseMenuInterface(); \
	friend struct Z_Construct_UClass_UPauseMenuInterface_Statics; \
public: \
	DECLARE_CLASS(UPauseMenuInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/CollectAThon"), COLLECTATHON_API) \
	DECLARE_SERIALIZER(UPauseMenuInterface)


#define CollectAThon_Source_CollectAThon_Public_PauseMenuInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	CollectAThon_Source_CollectAThon_Public_PauseMenuInterface_h_13_GENERATED_UINTERFACE_BODY() \
	CollectAThon_Source_CollectAThon_Public_PauseMenuInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CollectAThon_Source_CollectAThon_Public_PauseMenuInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	CollectAThon_Source_CollectAThon_Public_PauseMenuInterface_h_13_GENERATED_UINTERFACE_BODY() \
	CollectAThon_Source_CollectAThon_Public_PauseMenuInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CollectAThon_Source_CollectAThon_Public_PauseMenuInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPauseMenuInterface() {} \
public: \
	typedef UPauseMenuInterface UClassType; \
	typedef IPauseMenuInterface ThisClass; \
	static void Execute_Back(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define CollectAThon_Source_CollectAThon_Public_PauseMenuInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IPauseMenuInterface() {} \
public: \
	typedef UPauseMenuInterface UClassType; \
	typedef IPauseMenuInterface ThisClass; \
	static void Execute_Back(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define CollectAThon_Source_CollectAThon_Public_PauseMenuInterface_h_10_PROLOG \
	CollectAThon_Source_CollectAThon_Public_PauseMenuInterface_h_13_EVENT_PARMS


#define CollectAThon_Source_CollectAThon_Public_PauseMenuInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CollectAThon_Source_CollectAThon_Public_PauseMenuInterface_h_13_SPARSE_DATA \
	CollectAThon_Source_CollectAThon_Public_PauseMenuInterface_h_13_RPC_WRAPPERS \
	CollectAThon_Source_CollectAThon_Public_PauseMenuInterface_h_13_CALLBACK_WRAPPERS \
	CollectAThon_Source_CollectAThon_Public_PauseMenuInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CollectAThon_Source_CollectAThon_Public_PauseMenuInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CollectAThon_Source_CollectAThon_Public_PauseMenuInterface_h_13_SPARSE_DATA \
	CollectAThon_Source_CollectAThon_Public_PauseMenuInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	CollectAThon_Source_CollectAThon_Public_PauseMenuInterface_h_13_CALLBACK_WRAPPERS \
	CollectAThon_Source_CollectAThon_Public_PauseMenuInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COLLECTATHON_API UClass* StaticClass<class UPauseMenuInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CollectAThon_Source_CollectAThon_Public_PauseMenuInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
