// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefence/TowerDefenceGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTowerDefenceGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_ATowerDefenceGameMode();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_ATowerDefenceGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TowerDefence();
// End Cross Module References
	void ATowerDefenceGameMode::StaticRegisterNativesATowerDefenceGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATowerDefenceGameMode);
	UClass* Z_Construct_UClass_ATowerDefenceGameMode_NoRegister()
	{
		return ATowerDefenceGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATowerDefenceGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATowerDefenceGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefence,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATowerDefenceGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TowerDefenceGameMode.h" },
		{ "ModuleRelativePath", "TowerDefenceGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATowerDefenceGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATowerDefenceGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATowerDefenceGameMode_Statics::ClassParams = {
		&ATowerDefenceGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATowerDefenceGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATowerDefenceGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATowerDefenceGameMode()
	{
		if (!Z_Registration_Info_UClass_ATowerDefenceGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATowerDefenceGameMode.OuterSingleton, Z_Construct_UClass_ATowerDefenceGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATowerDefenceGameMode.OuterSingleton;
	}
	template<> TOWERDEFENCE_API UClass* StaticClass<ATowerDefenceGameMode>()
	{
		return ATowerDefenceGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATowerDefenceGameMode);
	ATowerDefenceGameMode::~ATowerDefenceGameMode() {}
	struct Z_CompiledInDeferFile_FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_TowerDefenceGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_TowerDefenceGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATowerDefenceGameMode, ATowerDefenceGameMode::StaticClass, TEXT("ATowerDefenceGameMode"), &Z_Registration_Info_UClass_ATowerDefenceGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATowerDefenceGameMode), 3329843700U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_TowerDefenceGameMode_h_2988325213(TEXT("/Script/TowerDefence"),
		Z_CompiledInDeferFile_FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_TowerDefenceGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_TowerDefenceGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
