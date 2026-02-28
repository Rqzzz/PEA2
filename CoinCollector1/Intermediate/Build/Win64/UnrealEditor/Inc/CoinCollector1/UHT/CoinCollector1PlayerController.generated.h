// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CoinCollector1PlayerController.h"

#ifdef COINCOLLECTOR1_CoinCollector1PlayerController_generated_h
#error "CoinCollector1PlayerController.generated.h already included, missing '#pragma once' in CoinCollector1PlayerController.h"
#endif
#define COINCOLLECTOR1_CoinCollector1PlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACoinCollector1PlayerController ******************************************
COINCOLLECTOR1_API UClass* Z_Construct_UClass_ACoinCollector1PlayerController_NoRegister();

#define FID_Users_20127_PEA2_CoinCollector1_Source_CoinCollector1_CoinCollector1PlayerController_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACoinCollector1PlayerController(); \
	friend struct Z_Construct_UClass_ACoinCollector1PlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COINCOLLECTOR1_API UClass* Z_Construct_UClass_ACoinCollector1PlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(ACoinCollector1PlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoinCollector1"), Z_Construct_UClass_ACoinCollector1PlayerController_NoRegister) \
	DECLARE_SERIALIZER(ACoinCollector1PlayerController)


#define FID_Users_20127_PEA2_CoinCollector1_Source_CoinCollector1_CoinCollector1PlayerController_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACoinCollector1PlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACoinCollector1PlayerController(ACoinCollector1PlayerController&&) = delete; \
	ACoinCollector1PlayerController(const ACoinCollector1PlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACoinCollector1PlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACoinCollector1PlayerController); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACoinCollector1PlayerController) \
	NO_API virtual ~ACoinCollector1PlayerController();


#define FID_Users_20127_PEA2_CoinCollector1_Source_CoinCollector1_CoinCollector1PlayerController_h_16_PROLOG
#define FID_Users_20127_PEA2_CoinCollector1_Source_CoinCollector1_CoinCollector1PlayerController_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_20127_PEA2_CoinCollector1_Source_CoinCollector1_CoinCollector1PlayerController_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_20127_PEA2_CoinCollector1_Source_CoinCollector1_CoinCollector1PlayerController_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACoinCollector1PlayerController;

// ********** End Class ACoinCollector1PlayerController ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_20127_PEA2_CoinCollector1_Source_CoinCollector1_CoinCollector1PlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
