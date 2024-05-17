// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefence/WaveManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaveManager() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_AWaveManager();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_AWaveManager_NoRegister();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_UWaveDefinition_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TowerDefence();
// End Cross Module References
	DEFINE_FUNCTION(AWaveManager::execGameEnded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GameEnded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWaveManager::execStartWave)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartWave();
		P_NATIVE_END;
	}
	void AWaveManager::StaticRegisterNativesAWaveManager()
	{
		UClass* Class = AWaveManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GameEnded", &AWaveManager::execGameEnded },
			{ "StartWave", &AWaveManager::execStartWave },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWaveManager_GameEnded_Statics
	{
		struct WaveManager_eventGameEnded_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AWaveManager_GameEnded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WaveManager_eventGameEnded_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWaveManager_GameEnded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(WaveManager_eventGameEnded_Parms), &Z_Construct_UFunction_AWaveManager_GameEnded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWaveManager_GameEnded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaveManager_GameEnded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWaveManager_GameEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WaveManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWaveManager_GameEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWaveManager, nullptr, "GameEnded", nullptr, nullptr, sizeof(Z_Construct_UFunction_AWaveManager_GameEnded_Statics::WaveManager_eventGameEnded_Parms), Z_Construct_UFunction_AWaveManager_GameEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaveManager_GameEnded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWaveManager_GameEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaveManager_GameEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWaveManager_GameEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWaveManager_GameEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWaveManager_StartWave_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWaveManager_StartWave_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WaveManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWaveManager_StartWave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWaveManager, nullptr, "StartWave", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWaveManager_StartWave_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaveManager_StartWave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWaveManager_StartWave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWaveManager_StartWave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWaveManager);
	UClass* Z_Construct_UClass_AWaveManager_NoRegister()
	{
		return AWaveManager::StaticClass();
	}
	struct Z_Construct_UClass_AWaveManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinEnemySpawnRadius_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MinEnemySpawnRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxEnemySpawnRadius_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxEnemySpawnRadius;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Waves_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Waves_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Waves;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWaveManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWaveManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWaveManager_GameEnded, "GameEnded" }, // 3272470062
		{ &Z_Construct_UFunction_AWaveManager_StartWave, "StartWave" }, // 2120569039
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaveManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WaveManager.h" },
		{ "ModuleRelativePath", "WaveManager.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaveManager_Statics::NewProp_MinEnemySpawnRadius_MetaData[] = {
		{ "Category", "Behaviour" },
		{ "ModuleRelativePath", "WaveManager.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AWaveManager_Statics::NewProp_MinEnemySpawnRadius = { "MinEnemySpawnRadius", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaveManager, MinEnemySpawnRadius), METADATA_PARAMS(Z_Construct_UClass_AWaveManager_Statics::NewProp_MinEnemySpawnRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaveManager_Statics::NewProp_MinEnemySpawnRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaveManager_Statics::NewProp_MaxEnemySpawnRadius_MetaData[] = {
		{ "Category", "Behaviour" },
		{ "ModuleRelativePath", "WaveManager.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AWaveManager_Statics::NewProp_MaxEnemySpawnRadius = { "MaxEnemySpawnRadius", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaveManager, MaxEnemySpawnRadius), METADATA_PARAMS(Z_Construct_UClass_AWaveManager_Statics::NewProp_MaxEnemySpawnRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaveManager_Statics::NewProp_MaxEnemySpawnRadius_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWaveManager_Statics::NewProp_Waves_Inner = { "Waves", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UWaveDefinition_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaveManager_Statics::NewProp_Waves_MetaData[] = {
		{ "Category", "Behaviour" },
		{ "ModuleRelativePath", "WaveManager.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWaveManager_Statics::NewProp_Waves = { "Waves", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AWaveManager, Waves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AWaveManager_Statics::NewProp_Waves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaveManager_Statics::NewProp_Waves_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWaveManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaveManager_Statics::NewProp_MinEnemySpawnRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaveManager_Statics::NewProp_MaxEnemySpawnRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaveManager_Statics::NewProp_Waves_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaveManager_Statics::NewProp_Waves,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWaveManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWaveManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWaveManager_Statics::ClassParams = {
		&AWaveManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWaveManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWaveManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWaveManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWaveManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWaveManager()
	{
		if (!Z_Registration_Info_UClass_AWaveManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWaveManager.OuterSingleton, Z_Construct_UClass_AWaveManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWaveManager.OuterSingleton;
	}
	template<> TOWERDEFENCE_API UClass* StaticClass<AWaveManager>()
	{
		return AWaveManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWaveManager);
	AWaveManager::~AWaveManager() {}
	struct Z_CompiledInDeferFile_FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_WaveManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_WaveManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWaveManager, AWaveManager::StaticClass, TEXT("AWaveManager"), &Z_Registration_Info_UClass_AWaveManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWaveManager), 1258508352U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_WaveManager_h_2264372981(TEXT("/Script/TowerDefence"),
		Z_CompiledInDeferFile_FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_WaveManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_WaveManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
