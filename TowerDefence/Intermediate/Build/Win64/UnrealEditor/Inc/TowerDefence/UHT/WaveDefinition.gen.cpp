// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefence/WaveDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaveDefinition() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_AEnemyBase_NoRegister();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_UWaveDefinition();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_UWaveDefinition_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TowerDefence();
// End Cross Module References
	void UWaveDefinition::StaticRegisterNativesUWaveDefinition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWaveDefinition);
	UClass* Z_Construct_UClass_UWaveDefinition_NoRegister()
	{
		return UWaveDefinition::StaticClass();
	}
	struct Z_Construct_UClass_UWaveDefinition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemySpawnAngleCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemySpawnAngleCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemiesToSpawnPerSpawnOpportunity_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemiesToSpawnPerSpawnOpportunity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeBetweenSpawningAnEnemy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TimeBetweenSpawningAnEnemy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeUntilNextWave_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TimeUntilNextWave;
		static const UECodeGen_Private::FClassPropertyParams NewProp_EnemiesToSpawn_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemiesToSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EnemiesToSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnOpportunities_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SpawnOpportunities;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWaveDefinition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefence,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveDefinition_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "WaveDefinition.h" },
		{ "ModuleRelativePath", "WaveDefinition.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveDefinition_Statics::NewProp_EnemySpawnAngleCurve_MetaData[] = {
		{ "Category", "Wave Curves" },
		{ "ModuleRelativePath", "WaveDefinition.h" },
		{ "ToolTip", "Over the course of the wave, the maximum angle (+/-) will increase by this amount at this point along the curve." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWaveDefinition_Statics::NewProp_EnemySpawnAngleCurve = { "EnemySpawnAngleCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaveDefinition, EnemySpawnAngleCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaveDefinition_Statics::NewProp_EnemySpawnAngleCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveDefinition_Statics::NewProp_EnemySpawnAngleCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveDefinition_Statics::NewProp_EnemiesToSpawnPerSpawnOpportunity_MetaData[] = {
		{ "Category", "Wave Curves" },
		{ "ModuleRelativePath", "WaveDefinition.h" },
		{ "ToolTip", "When a spawn opportunity occurs, spawn the enemy at this point along the curve." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWaveDefinition_Statics::NewProp_EnemiesToSpawnPerSpawnOpportunity = { "EnemiesToSpawnPerSpawnOpportunity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaveDefinition, EnemiesToSpawnPerSpawnOpportunity), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaveDefinition_Statics::NewProp_EnemiesToSpawnPerSpawnOpportunity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveDefinition_Statics::NewProp_EnemiesToSpawnPerSpawnOpportunity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveDefinition_Statics::NewProp_TimeBetweenSpawningAnEnemy_MetaData[] = {
		{ "Category", "Wave Curves" },
		{ "ModuleRelativePath", "WaveDefinition.h" },
		{ "ToolTip", "When an enemy is spawned, the curve will be sampled along this point to decide the next time until an enemy spawns, in seconds." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWaveDefinition_Statics::NewProp_TimeBetweenSpawningAnEnemy = { "TimeBetweenSpawningAnEnemy", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaveDefinition, TimeBetweenSpawningAnEnemy), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWaveDefinition_Statics::NewProp_TimeBetweenSpawningAnEnemy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveDefinition_Statics::NewProp_TimeBetweenSpawningAnEnemy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveDefinition_Statics::NewProp_TimeUntilNextWave_MetaData[] = {
		{ "Category", "Wave Parameters" },
		{ "ModuleRelativePath", "WaveDefinition.h" },
		{ "ToolTip", "When the wave is over, wait this long until the next wave, regardless of enemies." },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UWaveDefinition_Statics::NewProp_TimeUntilNextWave = { "TimeUntilNextWave", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaveDefinition, TimeUntilNextWave), METADATA_PARAMS(Z_Construct_UClass_UWaveDefinition_Statics::NewProp_TimeUntilNextWave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveDefinition_Statics::NewProp_TimeUntilNextWave_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWaveDefinition_Statics::NewProp_EnemiesToSpawn_Inner = { "EnemiesToSpawn", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AEnemyBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveDefinition_Statics::NewProp_EnemiesToSpawn_MetaData[] = {
		{ "Category", "Wave Parameters" },
		{ "ModuleRelativePath", "WaveDefinition.h" },
		{ "ToolTip", "Spawn these enemies over the wave." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWaveDefinition_Statics::NewProp_EnemiesToSpawn = { "EnemiesToSpawn", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaveDefinition, EnemiesToSpawn), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWaveDefinition_Statics::NewProp_EnemiesToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveDefinition_Statics::NewProp_EnemiesToSpawn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWaveDefinition_Statics::NewProp_SpawnOpportunities_MetaData[] = {
		{ "Category", "Wave Parameters" },
		{ "ModuleRelativePath", "WaveDefinition.h" },
		{ "ToolTip", "Over the course of the wave, enemies will be spawned this many times." },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UWaveDefinition_Statics::NewProp_SpawnOpportunities = { "SpawnOpportunities", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWaveDefinition, SpawnOpportunities), METADATA_PARAMS(Z_Construct_UClass_UWaveDefinition_Statics::NewProp_SpawnOpportunities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveDefinition_Statics::NewProp_SpawnOpportunities_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWaveDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveDefinition_Statics::NewProp_EnemySpawnAngleCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveDefinition_Statics::NewProp_EnemiesToSpawnPerSpawnOpportunity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveDefinition_Statics::NewProp_TimeBetweenSpawningAnEnemy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveDefinition_Statics::NewProp_TimeUntilNextWave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveDefinition_Statics::NewProp_EnemiesToSpawn_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveDefinition_Statics::NewProp_EnemiesToSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWaveDefinition_Statics::NewProp_SpawnOpportunities,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWaveDefinition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWaveDefinition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWaveDefinition_Statics::ClassParams = {
		&UWaveDefinition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWaveDefinition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWaveDefinition_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWaveDefinition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWaveDefinition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWaveDefinition()
	{
		if (!Z_Registration_Info_UClass_UWaveDefinition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWaveDefinition.OuterSingleton, Z_Construct_UClass_UWaveDefinition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWaveDefinition.OuterSingleton;
	}
	template<> TOWERDEFENCE_API UClass* StaticClass<UWaveDefinition>()
	{
		return UWaveDefinition::StaticClass();
	}
	UWaveDefinition::UWaveDefinition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWaveDefinition);
	UWaveDefinition::~UWaveDefinition() {}
	struct Z_CompiledInDeferFile_FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_WaveDefinition_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_WaveDefinition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWaveDefinition, UWaveDefinition::StaticClass, TEXT("UWaveDefinition"), &Z_Registration_Info_UClass_UWaveDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWaveDefinition), 536575860U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_WaveDefinition_h_3614634002(TEXT("/Script/TowerDefence"),
		Z_CompiledInDeferFile_FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_WaveDefinition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_WaveDefinition_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
