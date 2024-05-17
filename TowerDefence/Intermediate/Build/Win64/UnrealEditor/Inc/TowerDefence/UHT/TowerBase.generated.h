// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TowerBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTowerParams;
#ifdef TOWERDEFENCE_TowerBase_generated_h
#error "TowerBase.generated.h already included, missing '#pragma once' in TowerBase.h"
#endif
#define TOWERDEFENCE_TowerBase_generated_h

#define FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_TowerBase_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTowerParams_Statics; \
	TOWERDEFENCE_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> TOWERDEFENCE_API UScriptStruct* StaticStruct<struct FTowerParams>();

#define FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_TowerBase_h_35_SPARSE_DATA
#define FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_TowerBase_h_35_RPC_WRAPPERS \
	virtual void TowerBehaviour_Implementation(); \
 \
	DECLARE_FUNCTION(execGetTowerParams); \
	DECLARE_FUNCTION(execParseTowerParamsForLevel); \
	DECLARE_FUNCTION(execTowerBehaviour); \
	DECLARE_FUNCTION(execUpgradeTower);


#define FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_TowerBase_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTowerParams); \
	DECLARE_FUNCTION(execParseTowerParamsForLevel); \
	DECLARE_FUNCTION(execTowerBehaviour); \
	DECLARE_FUNCTION(execUpgradeTower);


#define FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_TowerBase_h_35_ACCESSORS
#define FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_TowerBase_h_35_CALLBACK_WRAPPERS
#define FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_TowerBase_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATowerBase(); \
	friend struct Z_Construct_UClass_ATowerBase_Statics; \
public: \
	DECLARE_CLASS(ATowerBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TowerDefence"), NO_API) \
	DECLARE_SERIALIZER(ATowerBase)


#define FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_TowerBase_h_35_INCLASS \
private: \
	static void StaticRegisterNativesATowerBase(); \
	friend struct Z_Construct_UClass_ATowerBase_Statics; \
public: \
	DECLARE_CLASS(ATowerBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TowerDefence"), NO_API) \
	DECLARE_SERIALIZER(ATowerBase)


#define FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_TowerBase_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATowerBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATowerBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATowerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATowerBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATowerBase(ATowerBase&&); \
	NO_API ATowerBase(const ATowerBase&); \
public: \
	NO_API virtual ~ATowerBase();


#define FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_TowerBase_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATowerBase(ATowerBase&&); \
	NO_API ATowerBase(const ATowerBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATowerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATowerBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATowerBase) \
	NO_API virtual ~ATowerBase();


#define FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_TowerBase_h_32_PROLOG
#define FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_TowerBase_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_TowerBase_h_35_SPARSE_DATA \
	FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_TowerBase_h_35_RPC_WRAPPERS \
	FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_TowerBase_h_35_ACCESSORS \
	FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_TowerBase_h_35_CALLBACK_WRAPPERS \
	FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_TowerBase_h_35_INCLASS \
	FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_TowerBase_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_TowerBase_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_TowerBase_h_35_SPARSE_DATA \
	FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_TowerBase_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_TowerBase_h_35_ACCESSORS \
	FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_TowerBase_h_35_CALLBACK_WRAPPERS \
	FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_TowerBase_h_35_INCLASS_NO_PURE_DECLS \
	FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_TowerBase_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOWERDEFENCE_API UClass* StaticClass<class ATowerBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Liam_Documents_Uni_GameJam2024_JamGroupA_TowerDefence_Source_TowerDefence_TowerBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
