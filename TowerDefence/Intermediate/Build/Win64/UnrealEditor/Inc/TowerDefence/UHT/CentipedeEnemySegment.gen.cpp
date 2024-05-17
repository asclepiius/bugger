// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefence/CentipedeEnemySegment.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCentipedeEnemySegment() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_ACentipedeEnemySegment();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_ACentipedeEnemySegment_NoRegister();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_AEnemyBase();
	UPackage* Z_Construct_UPackage__Script_TowerDefence();
// End Cross Module References
	void ACentipedeEnemySegment::StaticRegisterNativesACentipedeEnemySegment()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACentipedeEnemySegment);
	UClass* Z_Construct_UClass_ACentipedeEnemySegment_NoRegister()
	{
		return ACentipedeEnemySegment::StaticClass();
	}
	struct Z_Construct_UClass_ACentipedeEnemySegment_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Follower_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Follower;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACentipedeEnemySegment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefence,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACentipedeEnemySegment_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CentipedeEnemySegment.h" },
		{ "ModuleRelativePath", "CentipedeEnemySegment.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACentipedeEnemySegment_Statics::NewProp_Follower_MetaData[] = {
		{ "Category", "Behaviour" },
		{ "ModuleRelativePath", "CentipedeEnemySegment.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACentipedeEnemySegment_Statics::NewProp_Follower = { "Follower", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACentipedeEnemySegment, Follower), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACentipedeEnemySegment_Statics::NewProp_Follower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACentipedeEnemySegment_Statics::NewProp_Follower_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACentipedeEnemySegment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACentipedeEnemySegment_Statics::NewProp_Follower,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACentipedeEnemySegment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACentipedeEnemySegment>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACentipedeEnemySegment_Statics::ClassParams = {
		&ACentipedeEnemySegment::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACentipedeEnemySegment_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACentipedeEnemySegment_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACentipedeEnemySegment_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACentipedeEnemySegment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACentipedeEnemySegment()
	{
		if (!Z_Registration_Info_UClass_ACentipedeEnemySegment.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACentipedeEnemySegment.OuterSingleton, Z_Construct_UClass_ACentipedeEnemySegment_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACentipedeEnemySegment.OuterSingleton;
	}
	template<> TOWERDEFENCE_API UClass* StaticClass<ACentipedeEnemySegment>()
	{
		return ACentipedeEnemySegment::StaticClass();
	}
	ACentipedeEnemySegment::ACentipedeEnemySegment() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACentipedeEnemySegment);
	ACentipedeEnemySegment::~ACentipedeEnemySegment() {}
	struct Z_CompiledInDeferFile_FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_CentipedeEnemySegment_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_CentipedeEnemySegment_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACentipedeEnemySegment, ACentipedeEnemySegment::StaticClass, TEXT("ACentipedeEnemySegment"), &Z_Registration_Info_UClass_ACentipedeEnemySegment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACentipedeEnemySegment), 1402872652U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_CentipedeEnemySegment_h_3411207071(TEXT("/Script/TowerDefence"),
		Z_CompiledInDeferFile_FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_CentipedeEnemySegment_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_CentipedeEnemySegment_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
