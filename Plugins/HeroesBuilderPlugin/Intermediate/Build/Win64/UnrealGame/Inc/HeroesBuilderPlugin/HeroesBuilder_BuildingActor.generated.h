// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHeroesBuilder_GridTileInfo;
struct FHeroesBuilder_GridTile;
class AHeroesBuilder_Grid;
enum class EHeroesBuilder_RotationDirection : uint8;
#ifdef HEROESBUILDERPLUGIN_HeroesBuilder_BuildingActor_generated_h
#error "HeroesBuilder_BuildingActor.generated.h already included, missing '#pragma once' in HeroesBuilder_BuildingActor.h"
#endif
#define HEROESBUILDERPLUGIN_HeroesBuilder_BuildingActor_generated_h

#define FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_BuildingActor_h_37_SPARSE_DATA
#define FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_BuildingActor_h_37_RPC_WRAPPERS \
	virtual TArray<FHeroesBuilder_GridTileInfo> getGridTilesInfo_Implementation() const; \
	virtual TArray<FHeroesBuilder_GridTile> getGridTiles_Implementation(const AHeroesBuilder_Grid* grid) const; \
	virtual AHeroesBuilder_Grid* getGrid_Implementation() const; \
	virtual void detachFromGrid_Implementation(); \
	virtual void attachToGrid_Implementation(AHeroesBuilder_Grid* grid); \
	virtual FRotator getRelativeRotation_Implementation() const; \
	virtual void setRelativeRotation_Implementation(FRotator rotation); \
	virtual void rotate_Implementation(EHeroesBuilder_RotationDirection direction); \
	virtual int32 getSizeY_Implementation() const; \
	virtual int32 getSizeX_Implementation() const; \
 \
	DECLARE_FUNCTION(execisAttachedToGrid); \
	DECLARE_FUNCTION(execgetGridTilesInfo); \
	DECLARE_FUNCTION(execgetGridTiles); \
	DECLARE_FUNCTION(execgetGrid); \
	DECLARE_FUNCTION(execdetachFromGrid); \
	DECLARE_FUNCTION(execattachToGrid); \
	DECLARE_FUNCTION(execgetRelativeRotation); \
	DECLARE_FUNCTION(execsetRelativeRotation); \
	DECLARE_FUNCTION(execrotate); \
	DECLARE_FUNCTION(execgetSizeY); \
	DECLARE_FUNCTION(execgetSizeX);


#define FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_BuildingActor_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execisAttachedToGrid); \
	DECLARE_FUNCTION(execgetGridTilesInfo); \
	DECLARE_FUNCTION(execgetGridTiles); \
	DECLARE_FUNCTION(execgetGrid); \
	DECLARE_FUNCTION(execdetachFromGrid); \
	DECLARE_FUNCTION(execattachToGrid); \
	DECLARE_FUNCTION(execgetRelativeRotation); \
	DECLARE_FUNCTION(execsetRelativeRotation); \
	DECLARE_FUNCTION(execrotate); \
	DECLARE_FUNCTION(execgetSizeY); \
	DECLARE_FUNCTION(execgetSizeX);


#define FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_BuildingActor_h_37_EVENT_PARMS \
	struct HeroesBuilder_BuildingActor_eventattachToGrid_Parms \
	{ \
		AHeroesBuilder_Grid* grid; \
	}; \
	struct HeroesBuilder_BuildingActor_eventgetGrid_Parms \
	{ \
		AHeroesBuilder_Grid* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HeroesBuilder_BuildingActor_eventgetGrid_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct HeroesBuilder_BuildingActor_eventgetGridTiles_Parms \
	{ \
		const AHeroesBuilder_Grid* grid; \
		TArray<FHeroesBuilder_GridTile> ReturnValue; \
	}; \
	struct HeroesBuilder_BuildingActor_eventgetGridTilesInfo_Parms \
	{ \
		TArray<FHeroesBuilder_GridTileInfo> ReturnValue; \
	}; \
	struct HeroesBuilder_BuildingActor_eventgetRelativeRotation_Parms \
	{ \
		FRotator ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HeroesBuilder_BuildingActor_eventgetRelativeRotation_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct HeroesBuilder_BuildingActor_eventgetSizeX_Parms \
	{ \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HeroesBuilder_BuildingActor_eventgetSizeX_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct HeroesBuilder_BuildingActor_eventgetSizeY_Parms \
	{ \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HeroesBuilder_BuildingActor_eventgetSizeY_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct HeroesBuilder_BuildingActor_eventrotate_Parms \
	{ \
		EHeroesBuilder_RotationDirection direction; \
	}; \
	struct HeroesBuilder_BuildingActor_eventsetRelativeRotation_Parms \
	{ \
		FRotator rotation; \
	};


#define FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_BuildingActor_h_37_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_BuildingActor_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHeroesBuilder_BuildingActor(); \
	friend struct Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics; \
public: \
	DECLARE_CLASS(AHeroesBuilder_BuildingActor, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/HeroesBuilderPlugin"), NO_API) \
	DECLARE_SERIALIZER(AHeroesBuilder_BuildingActor)


#define FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_BuildingActor_h_37_INCLASS \
private: \
	static void StaticRegisterNativesAHeroesBuilder_BuildingActor(); \
	friend struct Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics; \
public: \
	DECLARE_CLASS(AHeroesBuilder_BuildingActor, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/HeroesBuilderPlugin"), NO_API) \
	DECLARE_SERIALIZER(AHeroesBuilder_BuildingActor)


#define FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_BuildingActor_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHeroesBuilder_BuildingActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHeroesBuilder_BuildingActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHeroesBuilder_BuildingActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHeroesBuilder_BuildingActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHeroesBuilder_BuildingActor(AHeroesBuilder_BuildingActor&&); \
	NO_API AHeroesBuilder_BuildingActor(const AHeroesBuilder_BuildingActor&); \
public:


#define FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_BuildingActor_h_37_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHeroesBuilder_BuildingActor(AHeroesBuilder_BuildingActor&&); \
	NO_API AHeroesBuilder_BuildingActor(const AHeroesBuilder_BuildingActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHeroesBuilder_BuildingActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHeroesBuilder_BuildingActor); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AHeroesBuilder_BuildingActor)


#define FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_BuildingActor_h_34_PROLOG \
	FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_BuildingActor_h_37_EVENT_PARMS


#define FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_BuildingActor_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_BuildingActor_h_37_SPARSE_DATA \
	FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_BuildingActor_h_37_RPC_WRAPPERS \
	FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_BuildingActor_h_37_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_BuildingActor_h_37_INCLASS \
	FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_BuildingActor_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_BuildingActor_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_BuildingActor_h_37_SPARSE_DATA \
	FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_BuildingActor_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_BuildingActor_h_37_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_BuildingActor_h_37_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_BuildingActor_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HEROESBUILDERPLUGIN_API UClass* StaticClass<class AHeroesBuilder_BuildingActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_BuildingActor_h


#define FOREACH_ENUM_EHEROESBUILDER_ROTATIONDIRECTION(op) \
	op(EHeroesBuilder_RotationDirection::NONE) \
	op(EHeroesBuilder_RotationDirection::CLOCK) \
	op(EHeroesBuilder_RotationDirection::COUNTER_CLOCK) 

enum class EHeroesBuilder_RotationDirection : uint8;
template<> HEROESBUILDERPLUGIN_API UEnum* StaticEnum<EHeroesBuilder_RotationDirection>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
