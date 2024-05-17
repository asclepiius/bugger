// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefence/TowerDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTowerDefinition() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_ATowerBase_NoRegister();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_UTowerDefinition();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_UTowerDefinition_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TowerDefence();
// End Cross Module References
	void UTowerDefinition::StaticRegisterNativesUTowerDefinition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTowerDefinition);
	UClass* Z_Construct_UClass_UTowerDefinition_NoRegister()
	{
		return UTowerDefinition::StaticClass();
	}
	struct Z_Construct_UClass_UTowerDefinition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TowerName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TowerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TowerDescription_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TowerDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TowerAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TowerAsset;
		static const UECodeGen_Private::FClassPropertyParams NewProp_TowerLevels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TowerLevels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TowerLevels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseTowerCost_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_BaseTowerCost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TowerUpgradeCost_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TowerUpgradeCost;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTowerDefinition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefence,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTowerDefinition_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TowerDefinition.h" },
		{ "ModuleRelativePath", "TowerDefinition.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTowerDefinition_Statics::NewProp_TowerName_MetaData[] = {
		{ "Category", "Tower Description" },
		{ "ModuleRelativePath", "TowerDefinition.h" },
		{ "ToolTip", "The name of the tower." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTowerDefinition_Statics::NewProp_TowerName = { "TowerName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTowerDefinition, TowerName), METADATA_PARAMS(Z_Construct_UClass_UTowerDefinition_Statics::NewProp_TowerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTowerDefinition_Statics::NewProp_TowerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTowerDefinition_Statics::NewProp_TowerDescription_MetaData[] = {
		{ "Category", "Tower Description" },
		{ "ModuleRelativePath", "TowerDefinition.h" },
		{ "ToolTip", "The description of the tower." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTowerDefinition_Statics::NewProp_TowerDescription = { "TowerDescription", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTowerDefinition, TowerDescription), METADATA_PARAMS(Z_Construct_UClass_UTowerDefinition_Statics::NewProp_TowerDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTowerDefinition_Statics::NewProp_TowerDescription_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTowerDefinition_Statics::NewProp_TowerAsset_MetaData[] = {
		{ "Category", "Tower Visuals" },
		{ "ModuleRelativePath", "TowerDefinition.h" },
		{ "ToolTip", "The tower's asset in build mode." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTowerDefinition_Statics::NewProp_TowerAsset = { "TowerAsset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTowerDefinition, TowerAsset), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTowerDefinition_Statics::NewProp_TowerAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTowerDefinition_Statics::NewProp_TowerAsset_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTowerDefinition_Statics::NewProp_TowerLevels_Inner = { "TowerLevels", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_ATowerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTowerDefinition_Statics::NewProp_TowerLevels_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "TowerDefinition.h" },
		{ "ToolTip", "The levels of the tower." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTowerDefinition_Statics::NewProp_TowerLevels = { "TowerLevels", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTowerDefinition, TowerLevels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTowerDefinition_Statics::NewProp_TowerLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTowerDefinition_Statics::NewProp_TowerLevels_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTowerDefinition_Statics::NewProp_BaseTowerCost_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "TowerDefinition.h" },
		{ "ToolTip", "The cost of the tower." },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UTowerDefinition_Statics::NewProp_BaseTowerCost = { "BaseTowerCost", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTowerDefinition, BaseTowerCost), METADATA_PARAMS(Z_Construct_UClass_UTowerDefinition_Statics::NewProp_BaseTowerCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTowerDefinition_Statics::NewProp_BaseTowerCost_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTowerDefinition_Statics::NewProp_TowerUpgradeCost_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "TowerDefinition.h" },
		{ "ToolTip", "The cost to upgrade the." },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UTowerDefinition_Statics::NewProp_TowerUpgradeCost = { "TowerUpgradeCost", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTowerDefinition, TowerUpgradeCost), METADATA_PARAMS(Z_Construct_UClass_UTowerDefinition_Statics::NewProp_TowerUpgradeCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTowerDefinition_Statics::NewProp_TowerUpgradeCost_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTowerDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTowerDefinition_Statics::NewProp_TowerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTowerDefinition_Statics::NewProp_TowerDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTowerDefinition_Statics::NewProp_TowerAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTowerDefinition_Statics::NewProp_TowerLevels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTowerDefinition_Statics::NewProp_TowerLevels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTowerDefinition_Statics::NewProp_BaseTowerCost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTowerDefinition_Statics::NewProp_TowerUpgradeCost,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTowerDefinition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTowerDefinition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTowerDefinition_Statics::ClassParams = {
		&UTowerDefinition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTowerDefinition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTowerDefinition_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTowerDefinition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTowerDefinition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTowerDefinition()
	{
		if (!Z_Registration_Info_UClass_UTowerDefinition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTowerDefinition.OuterSingleton, Z_Construct_UClass_UTowerDefinition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTowerDefinition.OuterSingleton;
	}
	template<> TOWERDEFENCE_API UClass* StaticClass<UTowerDefinition>()
	{
		return UTowerDefinition::StaticClass();
	}
	UTowerDefinition::UTowerDefinition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTowerDefinition);
	UTowerDefinition::~UTowerDefinition() {}
	struct Z_CompiledInDeferFile_FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_TowerDefinition_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_TowerDefinition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTowerDefinition, UTowerDefinition::StaticClass, TEXT("UTowerDefinition"), &Z_Registration_Info_UClass_UTowerDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTowerDefinition), 3678248020U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_TowerDefinition_h_3122274166(TEXT("/Script/TowerDefence"),
		Z_CompiledInDeferFile_FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_TowerDefinition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_TowerDefinition_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
