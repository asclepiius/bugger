// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTowerDefence_init() {}
	TOWERDEFENCE_API UFunction* Z_Construct_UDelegateFunction_TowerDefence_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TowerDefence;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TowerDefence()
	{
		if (!Z_Registration_Info_UPackage__Script_TowerDefence.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_TowerDefence_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/TowerDefence",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xCF264CD8,
				0x1BA49205,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TowerDefence.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_TowerDefence.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TowerDefence(Z_Construct_UPackage__Script_TowerDefence, TEXT("/Script/TowerDefence"), Z_Registration_Info_UPackage__Script_TowerDefence, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xCF264CD8, 0x1BA49205));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
