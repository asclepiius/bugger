// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefence/TowerPlayerBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTowerPlayerBase() {}
// Cross Module References
	TOWERDEFENCE_API UClass* Z_Construct_UClass_ATowerBase();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_ATowerPlayerBase();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_ATowerPlayerBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TowerDefence();
// End Cross Module References
	void ATowerPlayerBase::StaticRegisterNativesATowerPlayerBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATowerPlayerBase);
	UClass* Z_Construct_UClass_ATowerPlayerBase_NoRegister()
	{
		return ATowerPlayerBase::StaticClass();
	}
	struct Z_Construct_UClass_ATowerPlayerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATowerPlayerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATowerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefence,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATowerPlayerBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TowerPlayerBase.h" },
		{ "ModuleRelativePath", "TowerPlayerBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATowerPlayerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATowerPlayerBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATowerPlayerBase_Statics::ClassParams = {
		&ATowerPlayerBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATowerPlayerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATowerPlayerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATowerPlayerBase()
	{
		if (!Z_Registration_Info_UClass_ATowerPlayerBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATowerPlayerBase.OuterSingleton, Z_Construct_UClass_ATowerPlayerBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATowerPlayerBase.OuterSingleton;
	}
	template<> TOWERDEFENCE_API UClass* StaticClass<ATowerPlayerBase>()
	{
		return ATowerPlayerBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATowerPlayerBase);
	ATowerPlayerBase::~ATowerPlayerBase() {}
	struct Z_CompiledInDeferFile_FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_TowerPlayerBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_TowerPlayerBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATowerPlayerBase, ATowerPlayerBase::StaticClass, TEXT("ATowerPlayerBase"), &Z_Registration_Info_UClass_ATowerPlayerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATowerPlayerBase), 4150663313U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_TowerPlayerBase_h_870555501(TEXT("/Script/TowerDefence"),
		Z_CompiledInDeferFile_FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_TowerPlayerBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_TowerPlayerBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
