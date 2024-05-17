// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TowerDefence/TowerBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTowerBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_AEnemyBase_NoRegister();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_ATowerBase();
	TOWERDEFENCE_API UClass* Z_Construct_UClass_ATowerBase_NoRegister();
	TOWERDEFENCE_API UScriptStruct* Z_Construct_UScriptStruct_FTowerParams();
	UPackage* Z_Construct_UPackage__Script_TowerDefence();
// End Cross Module References

static_assert(std::is_polymorphic<FTowerParams>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FTowerParams cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TowerParams;
class UScriptStruct* FTowerParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TowerParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TowerParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTowerParams, (UObject*)Z_Construct_UPackage__Script_TowerDefence(), TEXT("TowerParams"));
	}
	return Z_Registration_Info_UScriptStruct_TowerParams.OuterSingleton;
}
template<> TOWERDEFENCE_API UScriptStruct* StaticStruct<FTowerParams>()
{
	return FTowerParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTowerParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpgradeCost_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UpgradeCost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTowerParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "TowerBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTowerParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTowerParams>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTowerParams_Statics::NewProp_UpgradeCost_MetaData[] = {
		{ "Category", "TowerParams" },
		{ "ModuleRelativePath", "TowerBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTowerParams_Statics::NewProp_UpgradeCost = { "UpgradeCost", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTowerParams, UpgradeCost), METADATA_PARAMS(Z_Construct_UScriptStruct_FTowerParams_Statics::NewProp_UpgradeCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTowerParams_Statics::NewProp_UpgradeCost_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTowerParams_Statics::NewProp_AttackRange_MetaData[] = {
		{ "Category", "TowerParams" },
		{ "ModuleRelativePath", "TowerBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTowerParams_Statics::NewProp_AttackRange = { "AttackRange", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTowerParams, AttackRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FTowerParams_Statics::NewProp_AttackRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTowerParams_Statics::NewProp_AttackRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTowerParams_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "TowerParams" },
		{ "ModuleRelativePath", "TowerBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTowerParams_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTowerParams, Damage), METADATA_PARAMS(Z_Construct_UScriptStruct_FTowerParams_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTowerParams_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTowerParams_Statics::NewProp_AttackSpeed_MetaData[] = {
		{ "Category", "TowerParams" },
		{ "ModuleRelativePath", "TowerBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTowerParams_Statics::NewProp_AttackSpeed = { "AttackSpeed", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTowerParams, AttackSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FTowerParams_Statics::NewProp_AttackSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTowerParams_Statics::NewProp_AttackSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTowerParams_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "TowerParams" },
		{ "ModuleRelativePath", "TowerBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTowerParams_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTowerParams, Health), METADATA_PARAMS(Z_Construct_UScriptStruct_FTowerParams_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTowerParams_Statics::NewProp_Health_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTowerParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTowerParams_Statics::NewProp_UpgradeCost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTowerParams_Statics::NewProp_AttackRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTowerParams_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTowerParams_Statics::NewProp_AttackSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTowerParams_Statics::NewProp_Health,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTowerParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefence,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"TowerParams",
		sizeof(FTowerParams),
		alignof(FTowerParams),
		Z_Construct_UScriptStruct_FTowerParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTowerParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTowerParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTowerParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTowerParams()
	{
		if (!Z_Registration_Info_UScriptStruct_TowerParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TowerParams.InnerSingleton, Z_Construct_UScriptStruct_FTowerParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TowerParams.InnerSingleton;
	}
	DEFINE_FUNCTION(ATowerBase::execGetTowerParams)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTowerParams*)Z_Param__Result=P_THIS->GetTowerParams();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATowerBase::execParseTowerParamsForLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ParseTowerParamsForLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATowerBase::execTowerBehaviour)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TowerBehaviour_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATowerBase::execUpgradeTower)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpgradeTower();
		P_NATIVE_END;
	}
	static FName NAME_ATowerBase_TowerBehaviour = FName(TEXT("TowerBehaviour"));
	void ATowerBase::TowerBehaviour()
	{
		ProcessEvent(FindFunctionChecked(NAME_ATowerBase_TowerBehaviour),NULL);
	}
	void ATowerBase::StaticRegisterNativesATowerBase()
	{
		UClass* Class = ATowerBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTowerParams", &ATowerBase::execGetTowerParams },
			{ "ParseTowerParamsForLevel", &ATowerBase::execParseTowerParamsForLevel },
			{ "TowerBehaviour", &ATowerBase::execTowerBehaviour },
			{ "UpgradeTower", &ATowerBase::execUpgradeTower },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATowerBase_GetTowerParams_Statics
	{
		struct TowerBase_eventGetTowerParams_Parms
		{
			FTowerParams ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATowerBase_GetTowerParams_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TowerBase_eventGetTowerParams_Parms, ReturnValue), Z_Construct_UScriptStruct_FTowerParams, METADATA_PARAMS(nullptr, 0) }; // 1490535722
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATowerBase_GetTowerParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATowerBase_GetTowerParams_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATowerBase_GetTowerParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "TowerBehaviour" },
		{ "ModuleRelativePath", "TowerBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATowerBase_GetTowerParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATowerBase, nullptr, "GetTowerParams", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATowerBase_GetTowerParams_Statics::TowerBase_eventGetTowerParams_Parms), Z_Construct_UFunction_ATowerBase_GetTowerParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATowerBase_GetTowerParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATowerBase_GetTowerParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATowerBase_GetTowerParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATowerBase_GetTowerParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATowerBase_GetTowerParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATowerBase_ParseTowerParamsForLevel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATowerBase_ParseTowerParamsForLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "TowerBehaviour" },
		{ "ModuleRelativePath", "TowerBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATowerBase_ParseTowerParamsForLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATowerBase, nullptr, "ParseTowerParamsForLevel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATowerBase_ParseTowerParamsForLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATowerBase_ParseTowerParamsForLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATowerBase_ParseTowerParamsForLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATowerBase_ParseTowerParamsForLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATowerBase_TowerBehaviour_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATowerBase_TowerBehaviour_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tower Behaviour" },
		{ "ModuleRelativePath", "TowerBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATowerBase_TowerBehaviour_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATowerBase, nullptr, "TowerBehaviour", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATowerBase_TowerBehaviour_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATowerBase_TowerBehaviour_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATowerBase_TowerBehaviour()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATowerBase_TowerBehaviour_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATowerBase_UpgradeTower_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATowerBase_UpgradeTower_Statics::Function_MetaDataParams[] = {
		{ "Category", "Tower Behaviour" },
		{ "ModuleRelativePath", "TowerBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATowerBase_UpgradeTower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATowerBase, nullptr, "UpgradeTower", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATowerBase_UpgradeTower_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATowerBase_UpgradeTower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATowerBase_UpgradeTower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATowerBase_UpgradeTower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATowerBase);
	UClass* Z_Construct_UClass_ATowerBase_NoRegister()
	{
		return ATowerBase::StaticClass();
	}
	struct Z_Construct_UClass_ATowerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyDetectionRadius_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EnemyDetectionRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TowerMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TowerMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParametersDataTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParametersDataTable;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappingEnemies_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappingEnemies_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OverlappingEnemies;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpgradeCost_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UpgradeCost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TowerHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TowerHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TowerLevel_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TowerLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATowerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TowerDefence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATowerBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATowerBase_GetTowerParams, "GetTowerParams" }, // 3846681385
		{ &Z_Construct_UFunction_ATowerBase_ParseTowerParamsForLevel, "ParseTowerParamsForLevel" }, // 1553525025
		{ &Z_Construct_UFunction_ATowerBase_TowerBehaviour, "TowerBehaviour" }, // 2181677501
		{ &Z_Construct_UFunction_ATowerBase_UpgradeTower, "UpgradeTower" }, // 2243700916
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATowerBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TowerBase.h" },
		{ "ModuleRelativePath", "TowerBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATowerBase_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TowerBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATowerBase_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATowerBase, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATowerBase_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATowerBase_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATowerBase_Statics::NewProp_EnemyDetectionRadius_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TowerBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATowerBase_Statics::NewProp_EnemyDetectionRadius = { "EnemyDetectionRadius", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATowerBase, EnemyDetectionRadius), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATowerBase_Statics::NewProp_EnemyDetectionRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATowerBase_Statics::NewProp_EnemyDetectionRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATowerBase_Statics::NewProp_TowerMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TowerBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATowerBase_Statics::NewProp_TowerMesh = { "TowerMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATowerBase, TowerMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATowerBase_Statics::NewProp_TowerMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATowerBase_Statics::NewProp_TowerMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATowerBase_Statics::NewProp_ParametersDataTable_MetaData[] = {
		{ "Category", "Tower Behaviour" },
		{ "ModuleRelativePath", "TowerBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATowerBase_Statics::NewProp_ParametersDataTable = { "ParametersDataTable", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATowerBase, ParametersDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATowerBase_Statics::NewProp_ParametersDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATowerBase_Statics::NewProp_ParametersDataTable_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATowerBase_Statics::NewProp_OverlappingEnemies_Inner = { "OverlappingEnemies", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AEnemyBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATowerBase_Statics::NewProp_OverlappingEnemies_MetaData[] = {
		{ "Category", "Tower Behaviour" },
		{ "ModuleRelativePath", "TowerBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATowerBase_Statics::NewProp_OverlappingEnemies = { "OverlappingEnemies", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATowerBase, OverlappingEnemies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATowerBase_Statics::NewProp_OverlappingEnemies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATowerBase_Statics::NewProp_OverlappingEnemies_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATowerBase_Statics::NewProp_UpgradeCost_MetaData[] = {
		{ "Category", "TowerBase" },
		{ "ModuleRelativePath", "TowerBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATowerBase_Statics::NewProp_UpgradeCost = { "UpgradeCost", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATowerBase, UpgradeCost), METADATA_PARAMS(Z_Construct_UClass_ATowerBase_Statics::NewProp_UpgradeCost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATowerBase_Statics::NewProp_UpgradeCost_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATowerBase_Statics::NewProp_AttackRange_MetaData[] = {
		{ "Category", "TowerBase" },
		{ "ModuleRelativePath", "TowerBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATowerBase_Statics::NewProp_AttackRange = { "AttackRange", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATowerBase, AttackRange), METADATA_PARAMS(Z_Construct_UClass_ATowerBase_Statics::NewProp_AttackRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATowerBase_Statics::NewProp_AttackRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATowerBase_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "TowerBase" },
		{ "ModuleRelativePath", "TowerBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATowerBase_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATowerBase, Damage), METADATA_PARAMS(Z_Construct_UClass_ATowerBase_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATowerBase_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATowerBase_Statics::NewProp_AttackSpeed_MetaData[] = {
		{ "Category", "TowerBase" },
		{ "ModuleRelativePath", "TowerBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATowerBase_Statics::NewProp_AttackSpeed = { "AttackSpeed", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATowerBase, AttackSpeed), METADATA_PARAMS(Z_Construct_UClass_ATowerBase_Statics::NewProp_AttackSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATowerBase_Statics::NewProp_AttackSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATowerBase_Statics::NewProp_TowerHealth_MetaData[] = {
		{ "Category", "TowerBase" },
		{ "ModuleRelativePath", "TowerBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATowerBase_Statics::NewProp_TowerHealth = { "TowerHealth", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATowerBase, TowerHealth), METADATA_PARAMS(Z_Construct_UClass_ATowerBase_Statics::NewProp_TowerHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATowerBase_Statics::NewProp_TowerHealth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATowerBase_Statics::NewProp_TowerLevel_MetaData[] = {
		{ "Category", "Tower Behaviour" },
		{ "ModuleRelativePath", "TowerBase.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ATowerBase_Statics::NewProp_TowerLevel = { "TowerLevel", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATowerBase, TowerLevel), METADATA_PARAMS(Z_Construct_UClass_ATowerBase_Statics::NewProp_TowerLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATowerBase_Statics::NewProp_TowerLevel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATowerBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATowerBase_Statics::NewProp_Root,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATowerBase_Statics::NewProp_EnemyDetectionRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATowerBase_Statics::NewProp_TowerMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATowerBase_Statics::NewProp_ParametersDataTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATowerBase_Statics::NewProp_OverlappingEnemies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATowerBase_Statics::NewProp_OverlappingEnemies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATowerBase_Statics::NewProp_UpgradeCost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATowerBase_Statics::NewProp_AttackRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATowerBase_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATowerBase_Statics::NewProp_AttackSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATowerBase_Statics::NewProp_TowerHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATowerBase_Statics::NewProp_TowerLevel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATowerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATowerBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATowerBase_Statics::ClassParams = {
		&ATowerBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATowerBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATowerBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATowerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATowerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATowerBase()
	{
		if (!Z_Registration_Info_UClass_ATowerBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATowerBase.OuterSingleton, Z_Construct_UClass_ATowerBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATowerBase.OuterSingleton;
	}
	template<> TOWERDEFENCE_API UClass* StaticClass<ATowerBase>()
	{
		return ATowerBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATowerBase);
	ATowerBase::~ATowerBase() {}
	struct Z_CompiledInDeferFile_FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_TowerBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_TowerBase_h_Statics::ScriptStructInfo[] = {
		{ FTowerParams::StaticStruct, Z_Construct_UScriptStruct_FTowerParams_Statics::NewStructOps, TEXT("TowerParams"), &Z_Registration_Info_UScriptStruct_TowerParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTowerParams), 1490535722U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_TowerBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATowerBase, ATowerBase::StaticClass, TEXT("ATowerBase"), &Z_Registration_Info_UClass_ATowerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATowerBase), 377122394U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_TowerBase_h_712274044(TEXT("/Script/TowerDefence"),
		Z_CompiledInDeferFile_FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_TowerBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_TowerBase_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_TowerBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_TowerBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
