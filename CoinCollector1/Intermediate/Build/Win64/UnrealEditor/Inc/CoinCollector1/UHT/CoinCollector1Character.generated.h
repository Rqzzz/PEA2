// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CoinCollector1Character.h"

#ifdef COINCOLLECTOR1_CoinCollector1Character_generated_h
#error "CoinCollector1Character.generated.h already included, missing '#pragma once' in CoinCollector1Character.h"
#endif
#define COINCOLLECTOR1_CoinCollector1Character_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACoinCollector1Character *************************************************
#define FID_Users_20127_PEA2_CoinCollector1_Source_CoinCollector1_CoinCollector1Character_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


COINCOLLECTOR1_API UClass* Z_Construct_UClass_ACoinCollector1Character_NoRegister();

#define FID_Users_20127_PEA2_CoinCollector1_Source_CoinCollector1_CoinCollector1Character_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACoinCollector1Character(); \
	friend struct Z_Construct_UClass_ACoinCollector1Character_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COINCOLLECTOR1_API UClass* Z_Construct_UClass_ACoinCollector1Character_NoRegister(); \
public: \
	DECLARE_CLASS2(ACoinCollector1Character, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/CoinCollector1"), Z_Construct_UClass_ACoinCollector1Character_NoRegister) \
	DECLARE_SERIALIZER(ACoinCollector1Character)


#define FID_Users_20127_PEA2_CoinCollector1_Source_CoinCollector1_CoinCollector1Character_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACoinCollector1Character(ACoinCollector1Character&&) = delete; \
	ACoinCollector1Character(const ACoinCollector1Character&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACoinCollector1Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACoinCollector1Character); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ACoinCollector1Character) \
	NO_API virtual ~ACoinCollector1Character();


#define FID_Users_20127_PEA2_CoinCollector1_Source_CoinCollector1_CoinCollector1Character_h_21_PROLOG
#define FID_Users_20127_PEA2_CoinCollector1_Source_CoinCollector1_CoinCollector1Character_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_20127_PEA2_CoinCollector1_Source_CoinCollector1_CoinCollector1Character_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_20127_PEA2_CoinCollector1_Source_CoinCollector1_CoinCollector1Character_h_24_INCLASS_NO_PURE_DECLS \
	FID_Users_20127_PEA2_CoinCollector1_Source_CoinCollector1_CoinCollector1Character_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACoinCollector1Character;

// ********** End Class ACoinCollector1Character ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_20127_PEA2_CoinCollector1_Source_CoinCollector1_CoinCollector1Character_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
