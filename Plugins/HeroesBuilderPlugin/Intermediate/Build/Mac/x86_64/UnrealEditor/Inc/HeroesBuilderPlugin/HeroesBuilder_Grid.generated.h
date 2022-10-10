// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AHeroesBuilder_Grid;
class AHeroesBuilder_BuildingActor;
struct FHeroesBuilder_GridTile;
struct FHeroesBuilder_GridTileInfo;
enum class EHeroesBuilder_GridError : uint8;
class UPrimitiveComponent;
class IHeroesBuilder_IGridDelegate;
#ifdef HEROESBUILDERPLUGIN_HeroesBuilder_Grid_generated_h
#error "HeroesBuilder_Grid.generated.h already included, missing '#pragma once' in HeroesBuilder_Grid.h"
#endif
#define HEROESBUILDERPLUGIN_HeroesBuilder_Grid_generated_h

#define FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_Grid_h_23_DELEGATE \
struct _Script_HeroesBuilderPlugin_eventonBuildingAdded_Parms \
{ \
	AHeroesBuilder_Grid* grid; \
	AHeroesBuilder_BuildingActor* buildingActor; \
}; \
static inline void FonBuildingAdded_DelegateWrapper(const FMulticastScriptDelegate& onBuildingAdded, AHeroesBuilder_Grid* grid, AHeroesBuilder_BuildingActor* buildingActor) \
{ \
	_Script_HeroesBuilderPlugin_eventonBuildingAdded_Parms Parms; \
	Parms.grid=grid; \
	Parms.buildingActor=buildingActor; \
	onBuildingAdded.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_Grid_h_24_DELEGATE \
struct _Script_HeroesBuilderPlugin_eventonBuildingRemoved_Parms \
{ \
	AHeroesBuilder_Grid* grid; \
	AHeroesBuilder_BuildingActor* buildingActor; \
}; \
static inline void FonBuildingRemoved_DelegateWrapper(const FMulticastScriptDelegate& onBuildingRemoved, AHeroesBuilder_Grid* grid, AHeroesBuilder_BuildingActor* buildingActor) \
{ \
	_Script_HeroesBuilderPlugin_eventonBuildingRemoved_Parms Parms; \
	Parms.grid=grid; \
	Parms.buildingActor=buildingActor; \
	onBuildingRemoved.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_Grid_h_37_SPARSE_DATA
#define FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_Grid_h_37_RPC_WRAPPERS \
	virtual bool onActorNeedValidation_Implementation(const AHeroesBuilder_BuildingActor* buildingActor, EHeroesBuilder_GridError& error); \
 \
	DECLARE_FUNCTION(execbuildingIsColliding); \
	DECLARE_FUNCTION(execunregisterBuilding); \
	DECLARE_FUNCTION(execregisterBuilding); \
	DECLARE_FUNCTION(execgetTilesInfoFromTilesList); \
	DECLARE_FUNCTION(execgetTilesInfo); \
	DECLARE_FUNCTION(execgetTileInfo); \
	DECLARE_FUNCTION(execgetGridHeigh); \
	DECLARE_FUNCTION(execgetGridWidth); \
	DECLARE_FUNCTION(exectilesFit); \
	DECLARE_FUNCTION(exectileIsValid); \
	DECLARE_FUNCTION(exectileToRelativeLocation); \
	DECLARE_FUNCTION(exectileToWorldLocation); \
	DECLARE_FUNCTION(execrelativeLocationToTile); \
	DECLARE_FUNCTION(execworldLocationToTile); \
	DECLARE_FUNCTION(execshowUnavailableTiles); \
	DECLARE_FUNCTION(execshowCurrentUnavailableTiles); \
	DECLARE_FUNCTION(execclearUnavailableTiles); \
	DECLARE_FUNCTION(execonActorNeedValidation); \
	DECLARE_FUNCTION(execonMouseMoveListener); \
	DECLARE_FUNCTION(execonBoxMouseOverEnd); \
	DECLARE_FUNCTION(execonBoxMouseOverStart); \
	DECLARE_FUNCTION(execvalidate); \
	DECLARE_FUNCTION(execgetBuildings); \
	DECLARE_FUNCTION(execsetDelegate); \
	DECLARE_FUNCTION(execgetDelegate); \
	DECLARE_FUNCTION(execgetGridProfile);


#define FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_Grid_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbuildingIsColliding); \
	DECLARE_FUNCTION(execunregisterBuilding); \
	DECLARE_FUNCTION(execregisterBuilding); \
	DECLARE_FUNCTION(execgetTilesInfoFromTilesList); \
	DECLARE_FUNCTION(execgetTilesInfo); \
	DECLARE_FUNCTION(execgetTileInfo); \
	DECLARE_FUNCTION(execgetGridHeigh); \
	DECLARE_FUNCTION(execgetGridWidth); \
	DECLARE_FUNCTION(exectilesFit); \
	DECLARE_FUNCTION(exectileIsValid); \
	DECLARE_FUNCTION(exectileToRelativeLocation); \
	DECLARE_FUNCTION(exectileToWorldLocation); \
	DECLARE_FUNCTION(execrelativeLocationToTile); \
	DECLARE_FUNCTION(execworldLocationToTile); \
	DECLARE_FUNCTION(execshowUnavailableTiles); \
	DECLARE_FUNCTION(execshowCurrentUnavailableTiles); \
	DECLARE_FUNCTION(execclearUnavailableTiles); \
	DECLARE_FUNCTION(execonActorNeedValidation); \
	DECLARE_FUNCTION(execonMouseMoveListener); \
	DECLARE_FUNCTION(execonBoxMouseOverEnd); \
	DECLARE_FUNCTION(execonBoxMouseOverStart); \
	DECLARE_FUNCTION(execvalidate); \
	DECLARE_FUNCTION(execgetBuildings); \
	DECLARE_FUNCTION(execsetDelegate); \
	DECLARE_FUNCTION(execgetDelegate); \
	DECLARE_FUNCTION(execgetGridProfile);


#define FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_Grid_h_37_EVENT_PARMS \
	struct HeroesBuilder_Grid_eventonActorNeedValidation_Parms \
	{ \
		const AHeroesBuilder_BuildingActor* buildingActor; \
		EHeroesBuilder_GridError error; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HeroesBuilder_Grid_eventonActorNeedValidation_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_Grid_h_37_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_Grid_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHeroesBuilder_Grid(); \
	friend struct Z_Construct_UClass_AHeroesBuilder_Grid_Statics; \
public: \
	DECLARE_CLASS(AHeroesBuilder_Grid, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HeroesBuilderPlugin"), NO_API) \
	DECLARE_SERIALIZER(AHeroesBuilder_Grid)


#define FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_Grid_h_37_INCLASS \
private: \
	static void StaticRegisterNativesAHeroesBuilder_Grid(); \
	friend struct Z_Construct_UClass_AHeroesBuilder_Grid_Statics; \
public: \
	DECLARE_CLASS(AHeroesBuilder_Grid, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HeroesBuilderPlugin"), NO_API) \
	DECLARE_SERIALIZER(AHeroesBuilder_Grid)


#define FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_Grid_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHeroesBuilder_Grid(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHeroesBuilder_Grid) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHeroesBuilder_Grid); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHeroesBuilder_Grid); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHeroesBuilder_Grid(AHeroesBuilder_Grid&&); \
	NO_API AHeroesBuilder_Grid(const AHeroesBuilder_Grid&); \
public:


#define FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_Grid_h_37_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHeroesBuilder_Grid(AHeroesBuilder_Grid&&); \
	NO_API AHeroesBuilder_Grid(const AHeroesBuilder_Grid&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHeroesBuilder_Grid); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHeroesBuilder_Grid); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHeroesBuilder_Grid)


#define FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_Grid_h_34_PROLOG \
	FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_Grid_h_37_EVENT_PARMS


#define FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_Grid_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_Grid_h_37_SPARSE_DATA \
	FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_Grid_h_37_RPC_WRAPPERS \
	FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_Grid_h_37_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_Grid_h_37_INCLASS \
	FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_Grid_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_Grid_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_Grid_h_37_SPARSE_DATA \
	FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_Grid_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_Grid_h_37_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_Grid_h_37_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_Grid_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HEROESBUILDERPLUGIN_API UClass* StaticClass<class AHeroesBuilder_Grid>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_Grid_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
