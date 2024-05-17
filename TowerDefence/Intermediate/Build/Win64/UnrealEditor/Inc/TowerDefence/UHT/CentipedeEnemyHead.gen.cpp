// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefence/CentipedeEnemyHead.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCentipedeEnemyHead() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_ACentipedeEnemyHead();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_ACentipedeEnemyHead_NoRegister();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_ACentipedeEnemySegment_NoRegister();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_AEnemyBase();
	UPackage* Z_Construct_UPackage__Script_TowerDefence();
// End Cross Module References
	void ACentipedeEnemyHead::StaticRegisterNativesACentipedeEnemyHead()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACentipedeEnemyHead);
	UClass* Z_Construct_UClass_ACentipedeEnemyHead_NoRegister()
	{
		return ACentipedeEnemyHead::StaticClass();
	}
	struct Z_Construct_UClass_ACentipedeEnemyHead_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfSegments_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NumberOfSegments;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SegmentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SegmentClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TailClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TailClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACentipedeEnemyHead_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefence,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACentipedeEnemyHead_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CentipedeEnemyHead.h" },
		{ "ModuleRelativePath", "CentipedeEnemyHead.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACentipedeEnemyHead_Statics::NewProp_NumberOfSegments_MetaData[] = {
		{ "Category", "Behaviour" },
		{ "ModuleRelativePath", "CentipedeEnemyHead.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACentipedeEnemyHead_Statics::NewProp_NumberOfSegments = { "NumberOfSegments", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACentipedeEnemyHead, NumberOfSegments), METADATA_PARAMS(Z_Construct_UClass_ACentipedeEnemyHead_Statics::NewProp_NumberOfSegments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACentipedeEnemyHead_Statics::NewProp_NumberOfSegments_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACentipedeEnemyHead_Statics::NewProp_SegmentClass_MetaData[] = {
		{ "Category", "Behaviour" },
		{ "ModuleRelativePath", "CentipedeEnemyHead.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACentipedeEnemyHead_Statics::NewProp_SegmentClass = { "SegmentClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACentipedeEnemyHead, SegmentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ACentipedeEnemySegment_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACentipedeEnemyHead_Statics::NewProp_SegmentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACentipedeEnemyHead_Statics::NewProp_SegmentClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACentipedeEnemyHead_Statics::NewProp_TailClass_MetaData[] = {
		{ "Category", "Behaviour" },
		{ "ModuleRelativePath", "CentipedeEnemyHead.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACentipedeEnemyHead_Statics::NewProp_TailClass = { "TailClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACentipedeEnemyHead, TailClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ACentipedeEnemySegment_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACentipedeEnemyHead_Statics::NewProp_TailClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACentipedeEnemyHead_Statics::NewProp_TailClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACentipedeEnemyHead_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACentipedeEnemyHead_Statics::NewProp_NumberOfSegments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACentipedeEnemyHead_Statics::NewProp_SegmentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACentipedeEnemyHead_Statics::NewProp_TailClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACentipedeEnemyHead_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACentipedeEnemyHead>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACentipedeEnemyHead_Statics::ClassParams = {
		&ACentipedeEnemyHead::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACentipedeEnemyHead_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACentipedeEnemyHead_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACentipedeEnemyHead_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACentipedeEnemyHead_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACentipedeEnemyHead()
	{
		if (!Z_Registration_Info_UClass_ACentipedeEnemyHead.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACentipedeEnemyHead.OuterSingleton, Z_Construct_UClass_ACentipedeEnemyHead_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACentipedeEnemyHead.OuterSingleton;
	}
	template<> TOWERDEFENCE_API UClass* StaticClass<ACentipedeEnemyHead>()
	{
		return ACentipedeEnemyHead::StaticClass();
	}
	ACentipedeEnemyHead::ACentipedeEnemyHead() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACentipedeEnemyHead);
	ACentipedeEnemyHead::~ACentipedeEnemyHead() {}
	struct Z_CompiledInDeferFile_FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_CentipedeEnemyHead_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_CentipedeEnemyHead_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACentipedeEnemyHead, ACentipedeEnemyHead::StaticClass, TEXT("ACentipedeEnemyHead"), &Z_Registration_Info_UClass_ACentipedeEnemyHead, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACentipedeEnemyHead), 2600675748U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_CentipedeEnemyHead_h_647330518(TEXT("/Script/TowerDefence"),
		Z_CompiledInDeferFile_FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_CentipedeEnemyHead_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_CentipedeEnemyHead_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
