// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCoinCollector1_init() {}
	COINCOLLECTOR1_API UFunction* Z_Construct_UDelegateFunction_CoinCollector1_OnEnemyDied__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_CoinCollector1;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_CoinCollector1()
	{
		if (!Z_Registration_Info_UPackage__Script_CoinCollector1.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_CoinCollector1_OnEnemyDied__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/CoinCollector1",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x8A26168A,
				0xA86C7EF8,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_CoinCollector1.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_CoinCollector1.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_CoinCollector1(Z_Construct_UPackage__Script_CoinCollector1, TEXT("/Script/CoinCollector1"), Z_Registration_Info_UPackage__Script_CoinCollector1, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x8A26168A, 0xA86C7EF8));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
