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
enum class EHeroesBuilder_GridError : uint8;
#ifdef HEROESBUILDERPLUGIN_HeroesBuilder_IGridDelegate_generated_h
#error "HeroesBuilder_IGridDelegate.generated.h already included, missing '#pragma once' in HeroesBuilder_IGridDelegate.h"
#endif
#define HEROESBUILDERPLUGIN_HeroesBuilder_IGridDelegate_generated_h

#define FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_IGridDelegate_h_35_SPARSE_DATA
#define FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_IGridDelegate_h_35_RPC_WRAPPERS
#define FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_IGridDelegate_h_35_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_IGridDelegate_h_35_EVENT_PARMS \
	struct HeroesBuilder_IGridDelegate_eventonActorError_Parms \
	{ \
		AHeroesBuilder_Grid* grid; \
		const AHeroesBuilder_BuildingActor* buildingActor; \
		EHeroesBuilder_GridError error; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HeroesBuilder_IGridDelegate_eventonActorError_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HeroesBuilder_IGridDelegate_eventonActorValidated_Parms \
	{ \
		AHeroesBuilder_Grid* grid; \
		const AHeroesBuilder_BuildingActor* buildingActor; \
		bool duplicate; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HeroesBuilder_IGridDelegate_eventonActorValidated_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HeroesBuilder_IGridDelegate_eventonGridMouseOver_Parms \
	{ \
		AHeroesBuilder_Grid* grid; \
		FVector gridLocation; \
		FRotator gridRotation; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HeroesBuilder_IGridDelegate_eventonGridMouseOver_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_IGridDelegate_h_35_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_IGridDelegate_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HEROESBUILDERPLUGIN_API UHeroesBuilder_IGridDelegate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHeroesBuilder_IGridDelegate) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HEROESBUILDERPLUGIN_API, UHeroesBuilder_IGridDelegate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHeroesBuilder_IGridDelegate); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	HEROESBUILDERPLUGIN_API UHeroesBuilder_IGridDelegate(UHeroesBuilder_IGridDelegate&&); \
	HEROESBUILDERPLUGIN_API UHeroesBuilder_IGridDelegate(const UHeroesBuilder_IGridDelegate&); \
public:


#define FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_IGridDelegate_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HEROESBUILDERPLUGIN_API UHeroesBuilder_IGridDelegate(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	HEROESBUILDERPLUGIN_API UHeroesBuilder_IGridDelegate(UHeroesBuilder_IGridDelegate&&); \
	HEROESBUILDERPLUGIN_API UHeroesBuilder_IGridDelegate(const UHeroesBuilder_IGridDelegate&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HEROESBUILDERPLUGIN_API, UHeroesBuilder_IGridDelegate); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHeroesBuilder_IGridDelegate); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHeroesBuilder_IGridDelegate)


#define FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_IGridDelegate_h_35_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUHeroesBuilder_IGridDelegate(); \
	friend struct Z_Construct_UClass_UHeroesBuilder_IGridDelegate_Statics; \
public: \
	DECLARE_CLASS(UHeroesBuilder_IGridDelegate, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/HeroesBuilderPlugin"), HEROESBUILDERPLUGIN_API) \
	DECLARE_SERIALIZER(UHeroesBuilder_IGridDelegate)


#define FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_IGridDelegate_h_35_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_IGridDelegate_h_35_GENERATED_UINTERFACE_BODY() \
	FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_IGridDelegate_h_35_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_IGridDelegate_h_35_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_IGridDelegate_h_35_GENERATED_UINTERFACE_BODY() \
	FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_IGridDelegate_h_35_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_IGridDelegate_h_35_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IHeroesBuilder_IGridDelegate() {} \
public: \
	typedef UHeroesBuilder_IGridDelegate UClassType; \
	typedef IHeroesBuilder_IGridDelegate ThisClass; \
	static bool Execute_onActorError(UObject* O, AHeroesBuilder_Grid* grid, const AHeroesBuilder_BuildingActor* buildingActor, EHeroesBuilder_GridError error); \
	static bool Execute_onActorValidated(UObject* O, AHeroesBuilder_Grid* grid, const AHeroesBuilder_BuildingActor* buildingActor, bool duplicate); \
	static bool Execute_onGridMouseOver(UObject* O, AHeroesBuilder_Grid* grid, FVector const& gridLocation, FRotator const& gridRotation); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_IGridDelegate_h_35_INCLASS_IINTERFACE \
protected: \
	virtual ~IHeroesBuilder_IGridDelegate() {} \
public: \
	typedef UHeroesBuilder_IGridDelegate UClassType; \
	typedef IHeroesBuilder_IGridDelegate ThisClass; \
	static bool Execute_onActorError(UObject* O, AHeroesBuilder_Grid* grid, const AHeroesBuilder_BuildingActor* buildingActor, EHeroesBuilder_GridError error); \
	static bool Execute_onActorValidated(UObject* O, AHeroesBuilder_Grid* grid, const AHeroesBuilder_BuildingActor* buildingActor, bool duplicate); \
	static bool Execute_onGridMouseOver(UObject* O, AHeroesBuilder_Grid* grid, FVector const& gridLocation, FRotator const& gridRotation); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_IGridDelegate_h_32_PROLOG \
	FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_IGridDelegate_h_35_EVENT_PARMS


#define FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_IGridDelegate_h_45_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_IGridDelegate_h_35_SPARSE_DATA \
	FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_IGridDelegate_h_35_RPC_WRAPPERS \
	FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_IGridDelegate_h_35_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_IGridDelegate_h_35_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_IGridDelegate_h_45_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_IGridDelegate_h_35_SPARSE_DATA \
	FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_IGridDelegate_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_IGridDelegate_h_35_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_IGridDelegate_h_35_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HEROESBUILDERPLUGIN_API UClass* StaticClass<class UHeroesBuilder_IGridDelegate>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_IGridDelegate_h


#define FOREACH_ENUM_EHEROESBUILDER_GRIDERROR(op) \
	op(EHeroesBuilder_GridError::NONE) \
	op(EHeroesBuilder_GridError::UNKNOW) \
	op(EHeroesBuilder_GridError::ACTOR) \
	op(EHeroesBuilder_GridError::COLLISION) \
	op(EHeroesBuilder_GridError::OUTSIDE) 

enum class EHeroesBuilder_GridError : uint8;
template<> HEROESBUILDERPLUGIN_API UEnum* StaticEnum<EHeroesBuilder_GridError>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
