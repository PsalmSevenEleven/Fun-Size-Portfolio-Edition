// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACPP_WIPICharacter;
#ifdef COLLECTATHON_HUDInterface_generated_h
#error "HUDInterface.generated.h already included, missing '#pragma once' in HUDInterface.h"
#endif
#define COLLECTATHON_HUDInterface_generated_h

#define CollectAThon_Source_CollectAThon_Public_HUDInterface_h_13_SPARSE_DATA
#define CollectAThon_Source_CollectAThon_Public_HUDInterface_h_13_RPC_WRAPPERS \
	virtual void StopWinding_Implementation() {}; \
	virtual void Wind_Implementation() {}; \
	virtual void ShowAlert_Implementation() {}; \
	virtual void HideTooltip_Implementation() {}; \
	virtual void FToT_Implementation() {}; \
	virtual void TToF_Implementation() {}; \
	virtual void SetWIPI_Implementation(ACPP_WIPICharacter* inWIPI) {}; \
 \
	DECLARE_FUNCTION(execStopWinding); \
	DECLARE_FUNCTION(execWind); \
	DECLARE_FUNCTION(execShowAlert); \
	DECLARE_FUNCTION(execHideTooltip); \
	DECLARE_FUNCTION(execFToT); \
	DECLARE_FUNCTION(execTToF); \
	DECLARE_FUNCTION(execSetWIPI);


#define CollectAThon_Source_CollectAThon_Public_HUDInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void StopWinding_Implementation() {}; \
	virtual void Wind_Implementation() {}; \
	virtual void ShowAlert_Implementation() {}; \
	virtual void HideTooltip_Implementation() {}; \
	virtual void FToT_Implementation() {}; \
	virtual void TToF_Implementation() {}; \
	virtual void SetWIPI_Implementation(ACPP_WIPICharacter* inWIPI) {}; \
 \
	DECLARE_FUNCTION(execStopWinding); \
	DECLARE_FUNCTION(execWind); \
	DECLARE_FUNCTION(execShowAlert); \
	DECLARE_FUNCTION(execHideTooltip); \
	DECLARE_FUNCTION(execFToT); \
	DECLARE_FUNCTION(execTToF); \
	DECLARE_FUNCTION(execSetWIPI);


#define CollectAThon_Source_CollectAThon_Public_HUDInterface_h_13_EVENT_PARMS \
	struct HUDInterface_eventSetWIPI_Parms \
	{ \
		ACPP_WIPICharacter* inWIPI; \
	};


#define CollectAThon_Source_CollectAThon_Public_HUDInterface_h_13_CALLBACK_WRAPPERS
#define CollectAThon_Source_CollectAThon_Public_HUDInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COLLECTATHON_API UHUDInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHUDInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COLLECTATHON_API, UHUDInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHUDInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	COLLECTATHON_API UHUDInterface(UHUDInterface&&); \
	COLLECTATHON_API UHUDInterface(const UHUDInterface&); \
public:


#define CollectAThon_Source_CollectAThon_Public_HUDInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COLLECTATHON_API UHUDInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	COLLECTATHON_API UHUDInterface(UHUDInterface&&); \
	COLLECTATHON_API UHUDInterface(const UHUDInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COLLECTATHON_API, UHUDInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHUDInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHUDInterface)


#define CollectAThon_Source_CollectAThon_Public_HUDInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUHUDInterface(); \
	friend struct Z_Construct_UClass_UHUDInterface_Statics; \
public: \
	DECLARE_CLASS(UHUDInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/CollectAThon"), COLLECTATHON_API) \
	DECLARE_SERIALIZER(UHUDInterface)


#define CollectAThon_Source_CollectAThon_Public_HUDInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	CollectAThon_Source_CollectAThon_Public_HUDInterface_h_13_GENERATED_UINTERFACE_BODY() \
	CollectAThon_Source_CollectAThon_Public_HUDInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CollectAThon_Source_CollectAThon_Public_HUDInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	CollectAThon_Source_CollectAThon_Public_HUDInterface_h_13_GENERATED_UINTERFACE_BODY() \
	CollectAThon_Source_CollectAThon_Public_HUDInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CollectAThon_Source_CollectAThon_Public_HUDInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IHUDInterface() {} \
public: \
	typedef UHUDInterface UClassType; \
	typedef IHUDInterface ThisClass; \
	static void Execute_FToT(UObject* O); \
	static void Execute_HideTooltip(UObject* O); \
	static void Execute_SetWIPI(UObject* O, ACPP_WIPICharacter* inWIPI); \
	static void Execute_ShowAlert(UObject* O); \
	static void Execute_StopWinding(UObject* O); \
	static void Execute_TToF(UObject* O); \
	static void Execute_Wind(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define CollectAThon_Source_CollectAThon_Public_HUDInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IHUDInterface() {} \
public: \
	typedef UHUDInterface UClassType; \
	typedef IHUDInterface ThisClass; \
	static void Execute_FToT(UObject* O); \
	static void Execute_HideTooltip(UObject* O); \
	static void Execute_SetWIPI(UObject* O, ACPP_WIPICharacter* inWIPI); \
	static void Execute_ShowAlert(UObject* O); \
	static void Execute_StopWinding(UObject* O); \
	static void Execute_TToF(UObject* O); \
	static void Execute_Wind(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define CollectAThon_Source_CollectAThon_Public_HUDInterface_h_10_PROLOG \
	CollectAThon_Source_CollectAThon_Public_HUDInterface_h_13_EVENT_PARMS


#define CollectAThon_Source_CollectAThon_Public_HUDInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CollectAThon_Source_CollectAThon_Public_HUDInterface_h_13_SPARSE_DATA \
	CollectAThon_Source_CollectAThon_Public_HUDInterface_h_13_RPC_WRAPPERS \
	CollectAThon_Source_CollectAThon_Public_HUDInterface_h_13_CALLBACK_WRAPPERS \
	CollectAThon_Source_CollectAThon_Public_HUDInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CollectAThon_Source_CollectAThon_Public_HUDInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CollectAThon_Source_CollectAThon_Public_HUDInterface_h_13_SPARSE_DATA \
	CollectAThon_Source_CollectAThon_Public_HUDInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	CollectAThon_Source_CollectAThon_Public_HUDInterface_h_13_CALLBACK_WRAPPERS \
	CollectAThon_Source_CollectAThon_Public_HUDInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COLLECTATHON_API UClass* StaticClass<class UHUDInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CollectAThon_Source_CollectAThon_Public_HUDInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
