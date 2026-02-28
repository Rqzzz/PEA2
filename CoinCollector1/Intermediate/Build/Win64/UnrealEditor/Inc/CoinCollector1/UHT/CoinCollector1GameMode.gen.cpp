// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoinCollector1GameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCoinCollector1GameMode() {}

// ********** Begin Cross Module References ********************************************************
COINCOLLECTOR1_API UClass* Z_Construct_UClass_ACoinCollector1GameMode();
COINCOLLECTOR1_API UClass* Z_Construct_UClass_ACoinCollector1GameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_CoinCollector1();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACoinCollector1GameMode **************************************************
void ACoinCollector1GameMode::StaticRegisterNativesACoinCollector1GameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACoinCollector1GameMode;
UClass* ACoinCollector1GameMode::GetPrivateStaticClass()
{
	using TClass = ACoinCollector1GameMode;
	if (!Z_Registration_Info_UClass_ACoinCollector1GameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CoinCollector1GameMode"),
			Z_Registration_Info_UClass_ACoinCollector1GameMode.InnerSingleton,
			StaticRegisterNativesACoinCollector1GameMode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ACoinCollector1GameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ACoinCollector1GameMode_NoRegister()
{
	return ACoinCollector1GameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACoinCollector1GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CoinCollector1GameMode.h" },
		{ "ModuleRelativePath", "CoinCollector1GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACoinCollector1GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACoinCollector1GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_CoinCollector1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACoinCollector1GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACoinCollector1GameMode_Statics::ClassParams = {
	&ACoinCollector1GameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACoinCollector1GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACoinCollector1GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACoinCollector1GameMode()
{
	if (!Z_Registration_Info_UClass_ACoinCollector1GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACoinCollector1GameMode.OuterSingleton, Z_Construct_UClass_ACoinCollector1GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACoinCollector1GameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACoinCollector1GameMode);
ACoinCollector1GameMode::~ACoinCollector1GameMode() {}
// ********** End Class ACoinCollector1GameMode ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_20127_PEA2_CoinCollector1_Source_CoinCollector1_CoinCollector1GameMode_h__Script_CoinCollector1_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACoinCollector1GameMode, ACoinCollector1GameMode::StaticClass, TEXT("ACoinCollector1GameMode"), &Z_Registration_Info_UClass_ACoinCollector1GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACoinCollector1GameMode), 3519763165U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_20127_PEA2_CoinCollector1_Source_CoinCollector1_CoinCollector1GameMode_h__Script_CoinCollector1_3533746622(TEXT("/Script/CoinCollector1"),
	Z_CompiledInDeferFile_FID_Users_20127_PEA2_CoinCollector1_Source_CoinCollector1_CoinCollector1GameMode_h__Script_CoinCollector1_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_20127_PEA2_CoinCollector1_Source_CoinCollector1_CoinCollector1GameMode_h__Script_CoinCollector1_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
