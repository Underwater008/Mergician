// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HeroesBuilderPlugin/Public/HeroesBuilder_Grid.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroesBuilder_Grid() {}
// Cross Module References
	HEROESBUILDERPLUGIN_API UFunction* Z_Construct_UDelegateFunction_HeroesBuilderPlugin_onBuildingAdded__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_HeroesBuilderPlugin();
	HEROESBUILDERPLUGIN_API UClass* Z_Construct_UClass_AHeroesBuilder_Grid_NoRegister();
	HEROESBUILDERPLUGIN_API UClass* Z_Construct_UClass_AHeroesBuilder_BuildingActor_NoRegister();
	HEROESBUILDERPLUGIN_API UFunction* Z_Construct_UDelegateFunction_HeroesBuilderPlugin_onBuildingRemoved__DelegateSignature();
	HEROESBUILDERPLUGIN_API UClass* Z_Construct_UClass_AHeroesBuilder_Grid();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	HEROESBUILDERPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FHeroesBuilder_GridTile();
	HEROESBUILDERPLUGIN_API UClass* Z_Construct_UClass_UHeroesBuilder_IGridDelegate_NoRegister();
	HEROESBUILDERPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FHeroesBuilder_GridTileInfo();
	HEROESBUILDERPLUGIN_API UEnum* Z_Construct_UEnum_HeroesBuilderPlugin_EHeroesBuilder_GridError();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_HeroesBuilderPlugin_onBuildingAdded__DelegateSignature_Statics
	{
		struct _Script_HeroesBuilderPlugin_eventonBuildingAdded_Parms
		{
			AHeroesBuilder_Grid* grid;
			AHeroesBuilder_BuildingActor* buildingActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_grid;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_buildingActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_HeroesBuilderPlugin_onBuildingAdded__DelegateSignature_Statics::NewProp_grid = { "grid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_HeroesBuilderPlugin_eventonBuildingAdded_Parms, grid), Z_Construct_UClass_AHeroesBuilder_Grid_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_HeroesBuilderPlugin_onBuildingAdded__DelegateSignature_Statics::NewProp_buildingActor = { "buildingActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_HeroesBuilderPlugin_eventonBuildingAdded_Parms, buildingActor), Z_Construct_UClass_AHeroesBuilder_BuildingActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_HeroesBuilderPlugin_onBuildingAdded__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HeroesBuilderPlugin_onBuildingAdded__DelegateSignature_Statics::NewProp_grid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HeroesBuilderPlugin_onBuildingAdded__DelegateSignature_Statics::NewProp_buildingActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_HeroesBuilderPlugin_onBuildingAdded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Events\n" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_Grid.h" },
		{ "ToolTip", "Events" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_HeroesBuilderPlugin_onBuildingAdded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_HeroesBuilderPlugin, nullptr, "onBuildingAdded__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_HeroesBuilderPlugin_onBuildingAdded__DelegateSignature_Statics::_Script_HeroesBuilderPlugin_eventonBuildingAdded_Parms), Z_Construct_UDelegateFunction_HeroesBuilderPlugin_onBuildingAdded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HeroesBuilderPlugin_onBuildingAdded__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_HeroesBuilderPlugin_onBuildingAdded__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HeroesBuilderPlugin_onBuildingAdded__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_HeroesBuilderPlugin_onBuildingAdded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_HeroesBuilderPlugin_onBuildingAdded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_HeroesBuilderPlugin_onBuildingRemoved__DelegateSignature_Statics
	{
		struct _Script_HeroesBuilderPlugin_eventonBuildingRemoved_Parms
		{
			AHeroesBuilder_Grid* grid;
			AHeroesBuilder_BuildingActor* buildingActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_grid;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_buildingActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_HeroesBuilderPlugin_onBuildingRemoved__DelegateSignature_Statics::NewProp_grid = { "grid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_HeroesBuilderPlugin_eventonBuildingRemoved_Parms, grid), Z_Construct_UClass_AHeroesBuilder_Grid_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_HeroesBuilderPlugin_onBuildingRemoved__DelegateSignature_Statics::NewProp_buildingActor = { "buildingActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_HeroesBuilderPlugin_eventonBuildingRemoved_Parms, buildingActor), Z_Construct_UClass_AHeroesBuilder_BuildingActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_HeroesBuilderPlugin_onBuildingRemoved__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HeroesBuilderPlugin_onBuildingRemoved__DelegateSignature_Statics::NewProp_grid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_HeroesBuilderPlugin_onBuildingRemoved__DelegateSignature_Statics::NewProp_buildingActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_HeroesBuilderPlugin_onBuildingRemoved__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HeroesBuilder_Grid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_HeroesBuilderPlugin_onBuildingRemoved__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_HeroesBuilderPlugin, nullptr, "onBuildingRemoved__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_HeroesBuilderPlugin_onBuildingRemoved__DelegateSignature_Statics::_Script_HeroesBuilderPlugin_eventonBuildingRemoved_Parms), Z_Construct_UDelegateFunction_HeroesBuilderPlugin_onBuildingRemoved__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HeroesBuilderPlugin_onBuildingRemoved__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_HeroesBuilderPlugin_onBuildingRemoved__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HeroesBuilderPlugin_onBuildingRemoved__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_HeroesBuilderPlugin_onBuildingRemoved__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_HeroesBuilderPlugin_onBuildingRemoved__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AHeroesBuilder_Grid::execbuildingIsColliding)
	{
		P_GET_OBJECT(AHeroesBuilder_BuildingActor,Z_Param_building);
		P_GET_TARRAY_REF(AHeroesBuilder_BuildingActor*,Z_Param_Out_collidingBuildings);
		P_GET_TARRAY_REF(FHeroesBuilder_GridTile,Z_Param_Out_intersections);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->buildingIsColliding(Z_Param_building,Z_Param_Out_collidingBuildings,Z_Param_Out_intersections);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHeroesBuilder_Grid::execunregisterBuilding)
	{
		P_GET_OBJECT(AHeroesBuilder_BuildingActor,Z_Param_building);
		P_GET_UBOOL(Z_Param_quietly);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->unregisterBuilding(Z_Param_building,Z_Param_quietly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHeroesBuilder_Grid::execregisterBuilding)
	{
		P_GET_OBJECT(AHeroesBuilder_BuildingActor,Z_Param_building);
		P_GET_UBOOL(Z_Param_quietly);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->registerBuilding(Z_Param_building,Z_Param_quietly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHeroesBuilder_Grid::execgetTilesInfoFromTilesList)
	{
		P_GET_TARRAY_REF(FHeroesBuilder_GridTile,Z_Param_Out_forTiles);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FHeroesBuilder_GridTileInfo>*)Z_Param__Result=P_THIS->getTilesInfoFromTilesList(Z_Param_Out_forTiles);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHeroesBuilder_Grid::execgetTilesInfo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_fromTileWidthPosition);
		P_GET_PROPERTY(FIntProperty,Z_Param_fromTileHeighPosition);
		P_GET_PROPERTY(FIntProperty,Z_Param_toTileWidthPosition);
		P_GET_PROPERTY(FIntProperty,Z_Param_toTileHeighPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FHeroesBuilder_GridTileInfo>*)Z_Param__Result=P_THIS->getTilesInfo(Z_Param_fromTileWidthPosition,Z_Param_fromTileHeighPosition,Z_Param_toTileWidthPosition,Z_Param_toTileHeighPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHeroesBuilder_Grid::execgetTileInfo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_tileX);
		P_GET_PROPERTY(FIntProperty,Z_Param_tileY);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FHeroesBuilder_GridTileInfo*)Z_Param__Result=P_THIS->getTileInfo(Z_Param_tileX,Z_Param_tileY);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHeroesBuilder_Grid::execgetGridHeigh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->getGridHeigh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHeroesBuilder_Grid::execgetGridWidth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->getGridWidth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHeroesBuilder_Grid::exectilesFit)
	{
		P_GET_TARRAY_REF(FHeroesBuilder_GridTile,Z_Param_Out_tiles);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->tilesFit(Z_Param_Out_tiles);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHeroesBuilder_Grid::exectileIsValid)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_tileX);
		P_GET_PROPERTY(FIntProperty,Z_Param_tileY);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->tileIsValid(Z_Param_tileX,Z_Param_tileY);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHeroesBuilder_Grid::exectileToRelativeLocation)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_tileX);
		P_GET_PROPERTY(FIntProperty,Z_Param_tileY);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_location);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->tileToRelativeLocation(Z_Param_tileX,Z_Param_tileY,Z_Param_Out_location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHeroesBuilder_Grid::exectileToWorldLocation)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_tileX);
		P_GET_PROPERTY(FIntProperty,Z_Param_tileY);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_location);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->tileToWorldLocation(Z_Param_tileX,Z_Param_tileY,Z_Param_Out_location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHeroesBuilder_Grid::execrelativeLocationToTile)
	{
		P_GET_STRUCT(FVector,Z_Param_location);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_tileX);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_tileY);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->relativeLocationToTile(Z_Param_location,Z_Param_Out_tileX,Z_Param_Out_tileY);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHeroesBuilder_Grid::execworldLocationToTile)
	{
		P_GET_STRUCT(FVector,Z_Param_location);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_tileX);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_tileY);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->worldLocationToTile(Z_Param_location,Z_Param_Out_tileX,Z_Param_Out_tileY);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHeroesBuilder_Grid::execshowUnavailableTiles)
	{
		P_GET_TARRAY_REF(FHeroesBuilder_GridTile,Z_Param_Out_tiles);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->showUnavailableTiles(Z_Param_Out_tiles);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHeroesBuilder_Grid::execshowCurrentUnavailableTiles)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->showCurrentUnavailableTiles();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHeroesBuilder_Grid::execclearUnavailableTiles)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->clearUnavailableTiles();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHeroesBuilder_Grid::execonActorNeedValidation)
	{
		P_GET_OBJECT(AHeroesBuilder_BuildingActor,Z_Param_buildingActor);
		P_GET_ENUM_REF(EHeroesBuilder_GridError,Z_Param_Out_error);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->onActorNeedValidation_Implementation(Z_Param_buildingActor,(EHeroesBuilder_GridError&)(Z_Param_Out_error));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHeroesBuilder_Grid::execonMouseMoveListener)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->onMouseMoveListener();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHeroesBuilder_Grid::execonBoxMouseOverEnd)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_component);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->onBoxMouseOverEnd(Z_Param_component);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHeroesBuilder_Grid::execonBoxMouseOverStart)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_component);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->onBoxMouseOverStart(Z_Param_component);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHeroesBuilder_Grid::execvalidate)
	{
		P_GET_OBJECT(AHeroesBuilder_BuildingActor,Z_Param_buildingActor);
		P_GET_UBOOL(Z_Param_duplicate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->validate(Z_Param_buildingActor,Z_Param_duplicate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHeroesBuilder_Grid::execgetBuildings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AHeroesBuilder_BuildingActor*>*)Z_Param__Result=P_THIS->getBuildings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHeroesBuilder_Grid::execsetDelegate)
	{
		P_GET_TINTERFACE(IHeroesBuilder_IGridDelegate,Z_Param_newDelegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->setDelegate(Z_Param_newDelegate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHeroesBuilder_Grid::execgetDelegate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TScriptInterface<IHeroesBuilder_IGridDelegate>*)Z_Param__Result=P_THIS->getDelegate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHeroesBuilder_Grid::execgetGridProfile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->getGridProfile();
		P_NATIVE_END;
	}
	static FName NAME_AHeroesBuilder_Grid_onActorNeedValidation = FName(TEXT("onActorNeedValidation"));
	bool AHeroesBuilder_Grid::onActorNeedValidation(const AHeroesBuilder_BuildingActor* buildingActor, EHeroesBuilder_GridError& error)
	{
		HeroesBuilder_Grid_eventonActorNeedValidation_Parms Parms;
		Parms.buildingActor=buildingActor;
		Parms.error=error;
		ProcessEvent(FindFunctionChecked(NAME_AHeroesBuilder_Grid_onActorNeedValidation),&Parms);
		error=Parms.error;
		return !!Parms.ReturnValue;
	}
	void AHeroesBuilder_Grid::StaticRegisterNativesAHeroesBuilder_Grid()
	{
		UClass* Class = AHeroesBuilder_Grid::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "buildingIsColliding", &AHeroesBuilder_Grid::execbuildingIsColliding },
			{ "clearUnavailableTiles", &AHeroesBuilder_Grid::execclearUnavailableTiles },
			{ "getBuildings", &AHeroesBuilder_Grid::execgetBuildings },
			{ "getDelegate", &AHeroesBuilder_Grid::execgetDelegate },
			{ "getGridHeigh", &AHeroesBuilder_Grid::execgetGridHeigh },
			{ "getGridProfile", &AHeroesBuilder_Grid::execgetGridProfile },
			{ "getGridWidth", &AHeroesBuilder_Grid::execgetGridWidth },
			{ "getTileInfo", &AHeroesBuilder_Grid::execgetTileInfo },
			{ "getTilesInfo", &AHeroesBuilder_Grid::execgetTilesInfo },
			{ "getTilesInfoFromTilesList", &AHeroesBuilder_Grid::execgetTilesInfoFromTilesList },
			{ "onActorNeedValidation", &AHeroesBuilder_Grid::execonActorNeedValidation },
			{ "onBoxMouseOverEnd", &AHeroesBuilder_Grid::execonBoxMouseOverEnd },
			{ "onBoxMouseOverStart", &AHeroesBuilder_Grid::execonBoxMouseOverStart },
			{ "onMouseMoveListener", &AHeroesBuilder_Grid::execonMouseMoveListener },
			{ "registerBuilding", &AHeroesBuilder_Grid::execregisterBuilding },
			{ "relativeLocationToTile", &AHeroesBuilder_Grid::execrelativeLocationToTile },
			{ "setDelegate", &AHeroesBuilder_Grid::execsetDelegate },
			{ "showCurrentUnavailableTiles", &AHeroesBuilder_Grid::execshowCurrentUnavailableTiles },
			{ "showUnavailableTiles", &AHeroesBuilder_Grid::execshowUnavailableTiles },
			{ "tileIsValid", &AHeroesBuilder_Grid::exectileIsValid },
			{ "tilesFit", &AHeroesBuilder_Grid::exectilesFit },
			{ "tileToRelativeLocation", &AHeroesBuilder_Grid::exectileToRelativeLocation },
			{ "tileToWorldLocation", &AHeroesBuilder_Grid::exectileToWorldLocation },
			{ "unregisterBuilding", &AHeroesBuilder_Grid::execunregisterBuilding },
			{ "validate", &AHeroesBuilder_Grid::execvalidate },
			{ "worldLocationToTile", &AHeroesBuilder_Grid::execworldLocationToTile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHeroesBuilder_Grid_buildingIsColliding_Statics
	{
		struct HeroesBuilder_Grid_eventbuildingIsColliding_Parms
		{
			const AHeroesBuilder_BuildingActor* building;
			TArray<AHeroesBuilder_BuildingActor*> collidingBuildings;
			TArray<FHeroesBuilder_GridTile> intersections;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_building_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_building;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_collidingBuildings_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_collidingBuildings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_intersections_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_intersections;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeroesBuilder_Grid_buildingIsColliding_Statics::NewProp_building_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHeroesBuilder_Grid_buildingIsColliding_Statics::NewProp_building = { "building", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_Grid_eventbuildingIsColliding_Parms, building), Z_Construct_UClass_AHeroesBuilder_BuildingActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AHeroesBuilder_Grid_buildingIsColliding_Statics::NewProp_building_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_Grid_buildingIsColliding_Statics::NewProp_building_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHeroesBuilder_Grid_buildingIsColliding_Statics::NewProp_collidingBuildings_Inner = { "collidingBuildings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AHeroesBuilder_BuildingActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AHeroesBuilder_Grid_buildingIsColliding_Statics::NewProp_collidingBuildings = { "collidingBuildings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_Grid_eventbuildingIsColliding_Parms, collidingBuildings), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHeroesBuilder_Grid_buildingIsColliding_Statics::NewProp_intersections_Inner = { "intersections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHeroesBuilder_GridTile, METADATA_PARAMS(nullptr, 0) }; // 4097249302
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AHeroesBuilder_Grid_buildingIsColliding_Statics::NewProp_intersections = { "intersections", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_Grid_eventbuildingIsColliding_Parms, intersections), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 4097249302
	void Z_Construct_UFunction_AHeroesBuilder_Grid_buildingIsColliding_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HeroesBuilder_Grid_eventbuildingIsColliding_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHeroesBuilder_Grid_buildingIsColliding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HeroesBuilder_Grid_eventbuildingIsColliding_Parms), &Z_Construct_UFunction_AHeroesBuilder_Grid_buildingIsColliding_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeroesBuilder_Grid_buildingIsColliding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_Grid_buildingIsColliding_Statics::NewProp_building,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_Grid_buildingIsColliding_Statics::NewProp_collidingBuildings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_Grid_buildingIsColliding_Statics::NewProp_collidingBuildings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_Grid_buildingIsColliding_Statics::NewProp_intersections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_Grid_buildingIsColliding_Statics::NewProp_intersections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_Grid_buildingIsColliding_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeroesBuilder_Grid_buildingIsColliding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Heroes|Grid|Building" },
		{ "Comment", "/**\n\x09 * Check if building is collinding with any registered building of this grid\n\x09 * if true, collision is detected collidingBuildings will contains the list of \n\x09 *          building in collision and intersections the list of all tiles actually collidings (tiles can come from different building)\n\x09 * if false, no collision detected\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_Grid.h" },
		{ "ToolTip", "Check if building is collinding with any registered building of this grid\nif true, collision is detected collidingBuildings will contains the list of\n         building in collision and intersections the list of all tiles actually collidings (tiles can come from different building)\nif false, no collision detected" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeroesBuilder_Grid_buildingIsColliding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeroesBuilder_Grid, nullptr, "buildingIsColliding", nullptr, nullptr, sizeof(Z_Construct_UFunction_AHeroesBuilder_Grid_buildingIsColliding_Statics::HeroesBuilder_Grid_eventbuildingIsColliding_Parms), Z_Construct_UFunction_AHeroesBuilder_Grid_buildingIsColliding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_Grid_buildingIsColliding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeroesBuilder_Grid_buildingIsColliding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_Grid_buildingIsColliding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeroesBuilder_Grid_buildingIsColliding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHeroesBuilder_Grid_buildingIsColliding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHeroesBuilder_Grid_clearUnavailableTiles_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeroesBuilder_Grid_clearUnavailableTiles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Heroes|Grid|Tile" },
		{ "Comment", "/**\n\x09 * Remove tiles display from unavailable layers\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_Grid.h" },
		{ "ToolTip", "Remove tiles display from unavailable layers" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeroesBuilder_Grid_clearUnavailableTiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeroesBuilder_Grid, nullptr, "clearUnavailableTiles", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeroesBuilder_Grid_clearUnavailableTiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_Grid_clearUnavailableTiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeroesBuilder_Grid_clearUnavailableTiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHeroesBuilder_Grid_clearUnavailableTiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHeroesBuilder_Grid_getBuildings_Statics
	{
		struct HeroesBuilder_Grid_eventgetBuildings_Parms
		{
			TArray<AHeroesBuilder_BuildingActor*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHeroesBuilder_Grid_getBuildings_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AHeroesBuilder_BuildingActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AHeroesBuilder_Grid_getBuildings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_Grid_eventgetBuildings_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeroesBuilder_Grid_getBuildings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_Grid_getBuildings_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_Grid_getBuildings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeroesBuilder_Grid_getBuildings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Heroes|Grid|Buildings" },
		{ "Comment", "/**\n\x09 * get a list of the Building actors that are referenced by this grid\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_Grid.h" },
		{ "ToolTip", "get a list of the Building actors that are referenced by this grid" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeroesBuilder_Grid_getBuildings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeroesBuilder_Grid, nullptr, "getBuildings", nullptr, nullptr, sizeof(Z_Construct_UFunction_AHeroesBuilder_Grid_getBuildings_Statics::HeroesBuilder_Grid_eventgetBuildings_Parms), Z_Construct_UFunction_AHeroesBuilder_Grid_getBuildings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_Grid_getBuildings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeroesBuilder_Grid_getBuildings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_Grid_getBuildings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeroesBuilder_Grid_getBuildings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHeroesBuilder_Grid_getBuildings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHeroesBuilder_Grid_getDelegate_Statics
	{
		struct HeroesBuilder_Grid_eventgetDelegate_Parms
		{
			TScriptInterface<IHeroesBuilder_IGridDelegate> ReturnValue;
		};
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_AHeroesBuilder_Grid_getDelegate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_Grid_eventgetDelegate_Parms, ReturnValue), Z_Construct_UClass_UHeroesBuilder_IGridDelegate_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeroesBuilder_Grid_getDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_Grid_getDelegate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeroesBuilder_Grid_getDelegate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Heroes|Grid|Delegate" },
		{ "Comment", "/**\n\x09 * Return this current Delegate this grid is using\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_Grid.h" },
		{ "ToolTip", "Return this current Delegate this grid is using" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeroesBuilder_Grid_getDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeroesBuilder_Grid, nullptr, "getDelegate", nullptr, nullptr, sizeof(Z_Construct_UFunction_AHeroesBuilder_Grid_getDelegate_Statics::HeroesBuilder_Grid_eventgetDelegate_Parms), Z_Construct_UFunction_AHeroesBuilder_Grid_getDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_Grid_getDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeroesBuilder_Grid_getDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_Grid_getDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeroesBuilder_Grid_getDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHeroesBuilder_Grid_getDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHeroesBuilder_Grid_getGridHeigh_Statics
	{
		struct HeroesBuilder_Grid_eventgetGridHeigh_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHeroesBuilder_Grid_getGridHeigh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_Grid_eventgetGridHeigh_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeroesBuilder_Grid_getGridHeigh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_Grid_getGridHeigh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeroesBuilder_Grid_getGridHeigh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Heroes|Grid|Setup" },
		{ "Comment", "/**\n\x09 * Number of tiles in heigh direction\n\x09 * ** Tiles will be referenced from 0 to getGridHeigh()-1\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_Grid.h" },
		{ "ToolTip", "Number of tiles in heigh direction\n** Tiles will be referenced from 0 to getGridHeigh()-1" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeroesBuilder_Grid_getGridHeigh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeroesBuilder_Grid, nullptr, "getGridHeigh", nullptr, nullptr, sizeof(Z_Construct_UFunction_AHeroesBuilder_Grid_getGridHeigh_Statics::HeroesBuilder_Grid_eventgetGridHeigh_Parms), Z_Construct_UFunction_AHeroesBuilder_Grid_getGridHeigh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_Grid_getGridHeigh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeroesBuilder_Grid_getGridHeigh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_Grid_getGridHeigh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeroesBuilder_Grid_getGridHeigh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHeroesBuilder_Grid_getGridHeigh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHeroesBuilder_Grid_getGridProfile_Statics
	{
		struct HeroesBuilder_Grid_eventgetGridProfile_Parms
		{
			FName ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AHeroesBuilder_Grid_getGridProfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_Grid_eventgetGridProfile_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeroesBuilder_Grid_getGridProfile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_Grid_getGridProfile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeroesBuilder_Grid_getGridProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Heroes|Grid|Setup" },
		{ "Comment", "/**\n\x09 * Return the profile this grid is using, eg for traces\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_Grid.h" },
		{ "ToolTip", "Return the profile this grid is using, eg for traces" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeroesBuilder_Grid_getGridProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeroesBuilder_Grid, nullptr, "getGridProfile", nullptr, nullptr, sizeof(Z_Construct_UFunction_AHeroesBuilder_Grid_getGridProfile_Statics::HeroesBuilder_Grid_eventgetGridProfile_Parms), Z_Construct_UFunction_AHeroesBuilder_Grid_getGridProfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_Grid_getGridProfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeroesBuilder_Grid_getGridProfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_Grid_getGridProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeroesBuilder_Grid_getGridProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHeroesBuilder_Grid_getGridProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHeroesBuilder_Grid_getGridWidth_Statics
	{
		struct HeroesBuilder_Grid_eventgetGridWidth_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHeroesBuilder_Grid_getGridWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_Grid_eventgetGridWidth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeroesBuilder_Grid_getGridWidth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_Grid_getGridWidth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeroesBuilder_Grid_getGridWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Heroes|Grid|Setup" },
		{ "Comment", "/**\n\x09 * Number of tiles in width direction\n\x09 * ** Tiles will be referenced from 0 to getGridWidth()-1\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_Grid.h" },
		{ "ToolTip", "Number of tiles in width direction\n** Tiles will be referenced from 0 to getGridWidth()-1" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeroesBuilder_Grid_getGridWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeroesBuilder_Grid, nullptr, "getGridWidth", nullptr, nullptr, sizeof(Z_Construct_UFunction_AHeroesBuilder_Grid_getGridWidth_Statics::HeroesBuilder_Grid_eventgetGridWidth_Parms), Z_Construct_UFunction_AHeroesBuilder_Grid_getGridWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_Grid_getGridWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeroesBuilder_Grid_getGridWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_Grid_getGridWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeroesBuilder_Grid_getGridWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHeroesBuilder_Grid_getGridWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHeroesBuilder_Grid_getTileInfo_Statics
	{
		struct HeroesBuilder_Grid_eventgetTileInfo_Parms
		{
			int32 tileX;
			int32 tileY;
			FHeroesBuilder_GridTileInfo ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_tileX;
		static const UECodeGen_Private::FIntPropertyParams NewProp_tileY;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHeroesBuilder_Grid_getTileInfo_Statics::NewProp_tileX = { "tileX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_Grid_eventgetTileInfo_Parms, tileX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHeroesBuilder_Grid_getTileInfo_Statics::NewProp_tileY = { "tileY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_Grid_eventgetTileInfo_Parms, tileY), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHeroesBuilder_Grid_getTileInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_Grid_eventgetTileInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FHeroesBuilder_GridTileInfo, METADATA_PARAMS(nullptr, 0) }; // 2035315418
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeroesBuilder_Grid_getTileInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_Grid_getTileInfo_Statics::NewProp_tileX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_Grid_getTileInfo_Statics::NewProp_tileY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_Grid_getTileInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeroesBuilder_Grid_getTileInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Heroes|Grid|Tile" },
		{ "Comment", "/**\n\x09 * return info for a specific tile\n\x09 * @see FHeroesBuilder_GridTileInfo structure\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_Grid.h" },
		{ "ToolTip", "return info for a specific tile\n@see FHeroesBuilder_GridTileInfo structure" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeroesBuilder_Grid_getTileInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeroesBuilder_Grid, nullptr, "getTileInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_AHeroesBuilder_Grid_getTileInfo_Statics::HeroesBuilder_Grid_eventgetTileInfo_Parms), Z_Construct_UFunction_AHeroesBuilder_Grid_getTileInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_Grid_getTileInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeroesBuilder_Grid_getTileInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_Grid_getTileInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeroesBuilder_Grid_getTileInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHeroesBuilder_Grid_getTileInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHeroesBuilder_Grid_getTilesInfo_Statics
	{
		struct HeroesBuilder_Grid_eventgetTilesInfo_Parms
		{
			int32 fromTileWidthPosition;
			int32 fromTileHeighPosition;
			int32 toTileWidthPosition;
			int32 toTileHeighPosition;
			TArray<FHeroesBuilder_GridTileInfo> ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_fromTileWidthPosition;
		static const UECodeGen_Private::FIntPropertyParams NewProp_fromTileHeighPosition;
		static const UECodeGen_Private::FIntPropertyParams NewProp_toTileWidthPosition;
		static const UECodeGen_Private::FIntPropertyParams NewProp_toTileHeighPosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHeroesBuilder_Grid_getTilesInfo_Statics::NewProp_fromTileWidthPosition = { "fromTileWidthPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_Grid_eventgetTilesInfo_Parms, fromTileWidthPosition), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHeroesBuilder_Grid_getTilesInfo_Statics::NewProp_fromTileHeighPosition = { "fromTileHeighPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_Grid_eventgetTilesInfo_Parms, fromTileHeighPosition), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHeroesBuilder_Grid_getTilesInfo_Statics::NewProp_toTileWidthPosition = { "toTileWidthPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_Grid_eventgetTilesInfo_Parms, toTileWidthPosition), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHeroesBuilder_Grid_getTilesInfo_Statics::NewProp_toTileHeighPosition = { "toTileHeighPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_Grid_eventgetTilesInfo_Parms, toTileHeighPosition), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHeroesBuilder_Grid_getTilesInfo_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHeroesBuilder_GridTileInfo, METADATA_PARAMS(nullptr, 0) }; // 2035315418
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AHeroesBuilder_Grid_getTilesInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_Grid_eventgetTilesInfo_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2035315418
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeroesBuilder_Grid_getTilesInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_Grid_getTilesInfo_Statics::NewProp_fromTileWidthPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_Grid_getTilesInfo_Statics::NewProp_fromTileHeighPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_Grid_getTilesInfo_Statics::NewProp_toTileWidthPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_Grid_getTilesInfo_Statics::NewProp_toTileHeighPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_Grid_getTilesInfo_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_Grid_getTilesInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeroesBuilder_Grid_getTilesInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Heroes|Grid|Tile" },
		{ "Comment", "/**\n\x09 * return tiles info from [fromTileWidthPosition;fromTileHeighPosition] to [toTileWidthPosition;toTileHeighPosition]\n\x09 * @see FHeroesBuilder_GridTileInfo structure\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_Grid.h" },
		{ "ToolTip", "return tiles info from [fromTileWidthPosition;fromTileHeighPosition] to [toTileWidthPosition;toTileHeighPosition]\n@see FHeroesBuilder_GridTileInfo structure" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeroesBuilder_Grid_getTilesInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeroesBuilder_Grid, nullptr, "getTilesInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_AHeroesBuilder_Grid_getTilesInfo_Statics::HeroesBuilder_Grid_eventgetTilesInfo_Parms), Z_Construct_UFunction_AHeroesBuilder_Grid_getTilesInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_Grid_getTilesInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeroesBuilder_Grid_getTilesInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_Grid_getTilesInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeroesBuilder_Grid_getTilesInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHeroesBuilder_Grid_getTilesInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHeroesBuilder_Grid_getTilesInfoFromTilesList_Statics
	{
		struct HeroesBuilder_Grid_eventgetTilesInfoFromTilesList_Parms
		{
			TArray<FHeroesBuilder_GridTile> forTiles;
			TArray<FHeroesBuilder_GridTileInfo> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_forTiles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_forTiles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_forTiles;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHeroesBuilder_Grid_getTilesInfoFromTilesList_Statics::NewProp_forTiles_Inner = { "forTiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHeroesBuilder_GridTile, METADATA_PARAMS(nullptr, 0) }; // 4097249302
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeroesBuilder_Grid_getTilesInfoFromTilesList_Statics::NewProp_forTiles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AHeroesBuilder_Grid_getTilesInfoFromTilesList_Statics::NewProp_forTiles = { "forTiles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_Grid_eventgetTilesInfoFromTilesList_Parms, forTiles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AHeroesBuilder_Grid_getTilesInfoFromTilesList_Statics::NewProp_forTiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_Grid_getTilesInfoFromTilesList_Statics::NewProp_forTiles_MetaData)) }; // 4097249302
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHeroesBuilder_Grid_getTilesInfoFromTilesList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHeroesBuilder_GridTileInfo, METADATA_PARAMS(nullptr, 0) }; // 2035315418
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AHeroesBuilder_Grid_getTilesInfoFromTilesList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_Grid_eventgetTilesInfoFromTilesList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2035315418
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeroesBuilder_Grid_getTilesInfoFromTilesList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_Grid_getTilesInfoFromTilesList_Statics::NewProp_forTiles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_Grid_getTilesInfoFromTilesList_Statics::NewProp_forTiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_Grid_getTilesInfoFromTilesList_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_Grid_getTilesInfoFromTilesList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeroesBuilder_Grid_getTilesInfoFromTilesList_Statics::Function_MetaDataParams[] = {
		{ "Category", "Heroes|Grid|Tile" },
		{ "Comment", "/**\n\x09 * return tiles info from a list of tiles\n\x09 * @see FHeroesBuilder_GridTileInfo structure\n\x09 * @uses AHeroesBuilder_Grid::getTileInfo internally\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_Grid.h" },
		{ "ToolTip", "return tiles info from a list of tiles\n@see FHeroesBuilder_GridTileInfo structure\n@uses AHeroesBuilder_Grid::getTileInfo internally" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeroesBuilder_Grid_getTilesInfoFromTilesList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeroesBuilder_Grid, nullptr, "getTilesInfoFromTilesList", nullptr, nullptr, sizeof(Z_Construct_UFunction_AHeroesBuilder_Grid_getTilesInfoFromTilesList_Statics::HeroesBuilder_Grid_eventgetTilesInfoFromTilesList_Parms), Z_Construct_UFunction_AHeroesBuilder_Grid_getTilesInfoFromTilesList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_Grid_getTilesInfoFromTilesList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeroesBuilder_Grid_getTilesInfoFromTilesList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_Grid_getTilesInfoFromTilesList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeroesBuilder_Grid_getTilesInfoFromTilesList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHeroesBuilder_Grid_getTilesInfoFromTilesList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHeroesBuilder_Grid_onActorNeedValidation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_buildingActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_buildingActor;
		static const UECodeGen_Private::FBytePropertyParams NewProp_error_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_error;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeroesBuilder_Grid_onActorNeedValidation_Statics::NewProp_buildingActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHeroesBuilder_Grid_onActorNeedValidation_Statics::NewProp_buildingActor = { "buildingActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_Grid_eventonActorNeedValidation_Parms, buildingActor), Z_Construct_UClass_AHeroesBuilder_BuildingActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AHeroesBuilder_Grid_onActorNeedValidation_Statics::NewProp_buildingActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_Grid_onActorNeedValidation_Statics::NewProp_buildingActor_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AHeroesBuilder_Grid_onActorNeedValidation_Statics::NewProp_error_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AHeroesBuilder_Grid_onActorNeedValidation_Statics::NewProp_error = { "error", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_Grid_eventonActorNeedValidation_Parms, error), Z_Construct_UEnum_HeroesBuilderPlugin_EHeroesBuilder_GridError, METADATA_PARAMS(nullptr, 0) }; // 1006375020
	void Z_Construct_UFunction_AHeroesBuilder_Grid_onActorNeedValidation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HeroesBuilder_Grid_eventonActorNeedValidation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHeroesBuilder_Grid_onActorNeedValidation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HeroesBuilder_Grid_eventonActorNeedValidation_Parms), &Z_Construct_UFunction_AHeroesBuilder_Grid_onActorNeedValidation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeroesBuilder_Grid_onActorNeedValidation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_Grid_onActorNeedValidation_Statics::NewProp_buildingActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_Grid_onActorNeedValidation_Statics::NewProp_error_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_Grid_onActorNeedValidation_Statics::NewProp_error,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_Grid_onActorNeedValidation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeroesBuilder_Grid_onActorNeedValidation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Heroes|Grid|Actions" },
		{ "Comment", "/**\n\x09 * Procedure to check the validity of the Building regarding this grid,\n\x09 * Default implmentation check the building is within the grid and do not collide with others registered buildings\n\x09 * - If returns true, no issue detected\n\x09 * - If returns false, error output will contain the first encoutered error\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_Grid.h" },
		{ "ToolTip", "Procedure to check the validity of the Building regarding this grid,\nDefault implmentation check the building is within the grid and do not collide with others registered buildings\n- If returns true, no issue detected\n- If returns false, error output will contain the first encoutered error" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeroesBuilder_Grid_onActorNeedValidation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeroesBuilder_Grid, nullptr, "onActorNeedValidation", nullptr, nullptr, sizeof(HeroesBuilder_Grid_eventonActorNeedValidation_Parms), Z_Construct_UFunction_AHeroesBuilder_Grid_onActorNeedValidation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_Grid_onActorNeedValidation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C480C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeroesBuilder_Grid_onActorNeedValidation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_Grid_onActorNeedValidation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeroesBuilder_Grid_onActorNeedValidation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHeroesBuilder_Grid_onActorNeedValidation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHeroesBuilder_Grid_onBoxMouseOverEnd_Statics
	{
		struct HeroesBuilder_Grid_eventonBoxMouseOverEnd_Parms
		{
			UPrimitiveComponent* component;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_component;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeroesBuilder_Grid_onBoxMouseOverEnd_Statics::NewProp_component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHeroesBuilder_Grid_onBoxMouseOverEnd_Statics::NewProp_component = { "component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_Grid_eventonBoxMouseOverEnd_Parms, component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AHeroesBuilder_Grid_onBoxMouseOverEnd_Statics::NewProp_component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_Grid_onBoxMouseOverEnd_Statics::NewProp_component_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeroesBuilder_Grid_onBoxMouseOverEnd_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_Grid_onBoxMouseOverEnd_Statics::NewProp_component,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeroesBuilder_Grid_onBoxMouseOverEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HeroesBuilder_Grid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeroesBuilder_Grid_onBoxMouseOverEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeroesBuilder_Grid, nullptr, "onBoxMouseOverEnd", nullptr, nullptr, sizeof(Z_Construct_UFunction_AHeroesBuilder_Grid_onBoxMouseOverEnd_Statics::HeroesBuilder_Grid_eventonBoxMouseOverEnd_Parms), Z_Construct_UFunction_AHeroesBuilder_Grid_onBoxMouseOverEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_Grid_onBoxMouseOverEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeroesBuilder_Grid_onBoxMouseOverEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_Grid_onBoxMouseOverEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeroesBuilder_Grid_onBoxMouseOverEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHeroesBuilder_Grid_onBoxMouseOverEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHeroesBuilder_Grid_onBoxMouseOverStart_Statics
	{
		struct HeroesBuilder_Grid_eventonBoxMouseOverStart_Parms
		{
			UPrimitiveComponent* component;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_component;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeroesBuilder_Grid_onBoxMouseOverStart_Statics::NewProp_component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHeroesBuilder_Grid_onBoxMouseOverStart_Statics::NewProp_component = { "component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_Grid_eventonBoxMouseOverStart_Parms, component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AHeroesBuilder_Grid_onBoxMouseOverStart_Statics::NewProp_component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_Grid_onBoxMouseOverStart_Statics::NewProp_component_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeroesBuilder_Grid_onBoxMouseOverStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_Grid_onBoxMouseOverStart_Statics::NewProp_component,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeroesBuilder_Grid_onBoxMouseOverStart_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Event (not exposed to BP)\n" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_Grid.h" },
		{ "ToolTip", "Event (not exposed to BP)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeroesBuilder_Grid_onBoxMouseOverStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeroesBuilder_Grid, nullptr, "onBoxMouseOverStart", nullptr, nullptr, sizeof(Z_Construct_UFunction_AHeroesBuilder_Grid_onBoxMouseOverStart_Statics::HeroesBuilder_Grid_eventonBoxMouseOverStart_Parms), Z_Construct_UFunction_AHeroesBuilder_Grid_onBoxMouseOverStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_Grid_onBoxMouseOverStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeroesBuilder_Grid_onBoxMouseOverStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_Grid_onBoxMouseOverStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeroesBuilder_Grid_onBoxMouseOverStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHeroesBuilder_Grid_onBoxMouseOverStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHeroesBuilder_Grid_onMouseMoveListener_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeroesBuilder_Grid_onMouseMoveListener_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HeroesBuilder_Grid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeroesBuilder_Grid_onMouseMoveListener_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeroesBuilder_Grid, nullptr, "onMouseMoveListener", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeroesBuilder_Grid_onMouseMoveListener_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_Grid_onMouseMoveListener_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeroesBuilder_Grid_onMouseMoveListener()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHeroesBuilder_Grid_onMouseMoveListener_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHeroesBuilder_Grid_registerBuilding_Statics
	{
		struct HeroesBuilder_Grid_eventregisterBuilding_Parms
		{
			AHeroesBuilder_BuildingActor* building;
			bool quietly;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_building;
		static void NewProp_quietly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_quietly;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHeroesBuilder_Grid_registerBuilding_Statics::NewProp_building = { "building", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_Grid_eventregisterBuilding_Parms, building), Z_Construct_UClass_AHeroesBuilder_BuildingActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AHeroesBuilder_Grid_registerBuilding_Statics::NewProp_quietly_SetBit(void* Obj)
	{
		((HeroesBuilder_Grid_eventregisterBuilding_Parms*)Obj)->quietly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHeroesBuilder_Grid_registerBuilding_Statics::NewProp_quietly = { "quietly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HeroesBuilder_Grid_eventregisterBuilding_Parms), &Z_Construct_UFunction_AHeroesBuilder_Grid_registerBuilding_Statics::NewProp_quietly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeroesBuilder_Grid_registerBuilding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_Grid_registerBuilding_Statics::NewProp_building,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_Grid_registerBuilding_Statics::NewProp_quietly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeroesBuilder_Grid_registerBuilding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Heroes|Grid|Building" },
		{ "Comment", "/**\n\x09 * Register a building to the grid\n\x09 * If quietly, the addition won't throw an onBuildingAdded event\n\x09 */" },
		{ "CPP_Default_quietly", "false" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_Grid.h" },
		{ "ToolTip", "Register a building to the grid\nIf quietly, the addition won't throw an onBuildingAdded event" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeroesBuilder_Grid_registerBuilding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeroesBuilder_Grid, nullptr, "registerBuilding", nullptr, nullptr, sizeof(Z_Construct_UFunction_AHeroesBuilder_Grid_registerBuilding_Statics::HeroesBuilder_Grid_eventregisterBuilding_Parms), Z_Construct_UFunction_AHeroesBuilder_Grid_registerBuilding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_Grid_registerBuilding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeroesBuilder_Grid_registerBuilding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_Grid_registerBuilding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeroesBuilder_Grid_registerBuilding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHeroesBuilder_Grid_registerBuilding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHeroesBuilder_Grid_relativeLocationToTile_Statics
	{
		struct HeroesBuilder_Grid_eventrelativeLocationToTile_Parms
		{
			FVector location;
			int32 tileX;
			int32 tileY;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_location;
		static const UECodeGen_Private::FIntPropertyParams NewProp_tileX;
		static const UECodeGen_Private::FIntPropertyParams NewProp_tileY;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHeroesBuilder_Grid_relativeLocationToTile_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_Grid_eventrelativeLocationToTile_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHeroesBuilder_Grid_relativeLocationToTile_Statics::NewProp_tileX = { "tileX", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_Grid_eventrelativeLocationToTile_Parms, tileX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHeroesBuilder_Grid_relativeLocationToTile_Statics::NewProp_tileY = { "tileY", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_Grid_eventrelativeLocationToTile_Parms, tileY), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AHeroesBuilder_Grid_relativeLocationToTile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HeroesBuilder_Grid_eventrelativeLocationToTile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHeroesBuilder_Grid_relativeLocationToTile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HeroesBuilder_Grid_eventrelativeLocationToTile_Parms), &Z_Construct_UFunction_AHeroesBuilder_Grid_relativeLocationToTile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeroesBuilder_Grid_relativeLocationToTile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_Grid_relativeLocationToTile_Statics::NewProp_location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_Grid_relativeLocationToTile_Statics::NewProp_tileX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_Grid_relativeLocationToTile_Statics::NewProp_tileY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_Grid_relativeLocationToTile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeroesBuilder_Grid_relativeLocationToTile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Heroes|Grid|Tile" },
		{ "Comment", "/**\n\x09 * Translate a relative location (this grid as reference) to a grid tile, if possible\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_Grid.h" },
		{ "ToolTip", "Translate a relative location (this grid as reference) to a grid tile, if possible" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeroesBuilder_Grid_relativeLocationToTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeroesBuilder_Grid, nullptr, "relativeLocationToTile", nullptr, nullptr, sizeof(Z_Construct_UFunction_AHeroesBuilder_Grid_relativeLocationToTile_Statics::HeroesBuilder_Grid_eventrelativeLocationToTile_Parms), Z_Construct_UFunction_AHeroesBuilder_Grid_relativeLocationToTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_Grid_relativeLocationToTile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeroesBuilder_Grid_relativeLocationToTile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_Grid_relativeLocationToTile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeroesBuilder_Grid_relativeLocationToTile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHeroesBuilder_Grid_relativeLocationToTile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHeroesBuilder_Grid_setDelegate_Statics
	{
		struct HeroesBuilder_Grid_eventsetDelegate_Parms
		{
			TScriptInterface<IHeroesBuilder_IGridDelegate> newDelegate;
		};
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_newDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_AHeroesBuilder_Grid_setDelegate_Statics::NewProp_newDelegate = { "newDelegate", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_Grid_eventsetDelegate_Parms, newDelegate), Z_Construct_UClass_UHeroesBuilder_IGridDelegate_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeroesBuilder_Grid_setDelegate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_Grid_setDelegate_Statics::NewProp_newDelegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeroesBuilder_Grid_setDelegate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Heroes|Grid|Delegate" },
		{ "Comment", "/**\n\x09 * Change the delegare this grid use\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_Grid.h" },
		{ "ToolTip", "Change the delegare this grid use" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeroesBuilder_Grid_setDelegate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeroesBuilder_Grid, nullptr, "setDelegate", nullptr, nullptr, sizeof(Z_Construct_UFunction_AHeroesBuilder_Grid_setDelegate_Statics::HeroesBuilder_Grid_eventsetDelegate_Parms), Z_Construct_UFunction_AHeroesBuilder_Grid_setDelegate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_Grid_setDelegate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeroesBuilder_Grid_setDelegate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_Grid_setDelegate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeroesBuilder_Grid_setDelegate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHeroesBuilder_Grid_setDelegate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHeroesBuilder_Grid_showCurrentUnavailableTiles_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeroesBuilder_Grid_showCurrentUnavailableTiles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Heroes|Grid|Tile" },
		{ "Comment", "/**\n\x09 * Pass thru the list of current building and show all unavailable tiles\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_Grid.h" },
		{ "ToolTip", "Pass thru the list of current building and show all unavailable tiles" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeroesBuilder_Grid_showCurrentUnavailableTiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeroesBuilder_Grid, nullptr, "showCurrentUnavailableTiles", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeroesBuilder_Grid_showCurrentUnavailableTiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_Grid_showCurrentUnavailableTiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeroesBuilder_Grid_showCurrentUnavailableTiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHeroesBuilder_Grid_showCurrentUnavailableTiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHeroesBuilder_Grid_showUnavailableTiles_Statics
	{
		struct HeroesBuilder_Grid_eventshowUnavailableTiles_Parms
		{
			TArray<FHeroesBuilder_GridTile> tiles;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_tiles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tiles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_tiles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHeroesBuilder_Grid_showUnavailableTiles_Statics::NewProp_tiles_Inner = { "tiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHeroesBuilder_GridTile, METADATA_PARAMS(nullptr, 0) }; // 4097249302
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeroesBuilder_Grid_showUnavailableTiles_Statics::NewProp_tiles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AHeroesBuilder_Grid_showUnavailableTiles_Statics::NewProp_tiles = { "tiles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_Grid_eventshowUnavailableTiles_Parms, tiles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AHeroesBuilder_Grid_showUnavailableTiles_Statics::NewProp_tiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_Grid_showUnavailableTiles_Statics::NewProp_tiles_MetaData)) }; // 4097249302
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeroesBuilder_Grid_showUnavailableTiles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_Grid_showUnavailableTiles_Statics::NewProp_tiles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_Grid_showUnavailableTiles_Statics::NewProp_tiles,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeroesBuilder_Grid_showUnavailableTiles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Heroes|Grid|Tile" },
		{ "Comment", "/**\n\x09 * Draw list of tiles as unavailable\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_Grid.h" },
		{ "ToolTip", "Draw list of tiles as unavailable" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeroesBuilder_Grid_showUnavailableTiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeroesBuilder_Grid, nullptr, "showUnavailableTiles", nullptr, nullptr, sizeof(Z_Construct_UFunction_AHeroesBuilder_Grid_showUnavailableTiles_Statics::HeroesBuilder_Grid_eventshowUnavailableTiles_Parms), Z_Construct_UFunction_AHeroesBuilder_Grid_showUnavailableTiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_Grid_showUnavailableTiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeroesBuilder_Grid_showUnavailableTiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_Grid_showUnavailableTiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeroesBuilder_Grid_showUnavailableTiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHeroesBuilder_Grid_showUnavailableTiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHeroesBuilder_Grid_tileIsValid_Statics
	{
		struct HeroesBuilder_Grid_eventtileIsValid_Parms
		{
			int32 tileX;
			int32 tileY;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_tileX;
		static const UECodeGen_Private::FIntPropertyParams NewProp_tileY;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHeroesBuilder_Grid_tileIsValid_Statics::NewProp_tileX = { "tileX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_Grid_eventtileIsValid_Parms, tileX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHeroesBuilder_Grid_tileIsValid_Statics::NewProp_tileY = { "tileY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_Grid_eventtileIsValid_Parms, tileY), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AHeroesBuilder_Grid_tileIsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HeroesBuilder_Grid_eventtileIsValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHeroesBuilder_Grid_tileIsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HeroesBuilder_Grid_eventtileIsValid_Parms), &Z_Construct_UFunction_AHeroesBuilder_Grid_tileIsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeroesBuilder_Grid_tileIsValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_Grid_tileIsValid_Statics::NewProp_tileX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_Grid_tileIsValid_Statics::NewProp_tileY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_Grid_tileIsValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeroesBuilder_Grid_tileIsValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Heroes|Grid|Tile" },
		{ "Comment", "/**\n\x09 * Check if the tile is within the grid\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_Grid.h" },
		{ "ToolTip", "Check if the tile is within the grid" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeroesBuilder_Grid_tileIsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeroesBuilder_Grid, nullptr, "tileIsValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_AHeroesBuilder_Grid_tileIsValid_Statics::HeroesBuilder_Grid_eventtileIsValid_Parms), Z_Construct_UFunction_AHeroesBuilder_Grid_tileIsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_Grid_tileIsValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeroesBuilder_Grid_tileIsValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_Grid_tileIsValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeroesBuilder_Grid_tileIsValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHeroesBuilder_Grid_tileIsValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHeroesBuilder_Grid_tilesFit_Statics
	{
		struct HeroesBuilder_Grid_eventtilesFit_Parms
		{
			TArray<FHeroesBuilder_GridTile> tiles;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_tiles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tiles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_tiles;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHeroesBuilder_Grid_tilesFit_Statics::NewProp_tiles_Inner = { "tiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHeroesBuilder_GridTile, METADATA_PARAMS(nullptr, 0) }; // 4097249302
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeroesBuilder_Grid_tilesFit_Statics::NewProp_tiles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AHeroesBuilder_Grid_tilesFit_Statics::NewProp_tiles = { "tiles", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_Grid_eventtilesFit_Parms, tiles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_AHeroesBuilder_Grid_tilesFit_Statics::NewProp_tiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_Grid_tilesFit_Statics::NewProp_tiles_MetaData)) }; // 4097249302
	void Z_Construct_UFunction_AHeroesBuilder_Grid_tilesFit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HeroesBuilder_Grid_eventtilesFit_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHeroesBuilder_Grid_tilesFit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HeroesBuilder_Grid_eventtilesFit_Parms), &Z_Construct_UFunction_AHeroesBuilder_Grid_tilesFit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeroesBuilder_Grid_tilesFit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_Grid_tilesFit_Statics::NewProp_tiles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_Grid_tilesFit_Statics::NewProp_tiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_Grid_tilesFit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeroesBuilder_Grid_tilesFit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Heroes|Grid|Tile" },
		{ "Comment", "/**\n\x09 * Check if all the tiles are within the grid\n\x09 * @see tileIsValid\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_Grid.h" },
		{ "ToolTip", "Check if all the tiles are within the grid\n@see tileIsValid" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeroesBuilder_Grid_tilesFit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeroesBuilder_Grid, nullptr, "tilesFit", nullptr, nullptr, sizeof(Z_Construct_UFunction_AHeroesBuilder_Grid_tilesFit_Statics::HeroesBuilder_Grid_eventtilesFit_Parms), Z_Construct_UFunction_AHeroesBuilder_Grid_tilesFit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_Grid_tilesFit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeroesBuilder_Grid_tilesFit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_Grid_tilesFit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeroesBuilder_Grid_tilesFit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHeroesBuilder_Grid_tilesFit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHeroesBuilder_Grid_tileToRelativeLocation_Statics
	{
		struct HeroesBuilder_Grid_eventtileToRelativeLocation_Parms
		{
			int32 tileX;
			int32 tileY;
			FVector location;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_tileX;
		static const UECodeGen_Private::FIntPropertyParams NewProp_tileY;
		static const UECodeGen_Private::FStructPropertyParams NewProp_location;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHeroesBuilder_Grid_tileToRelativeLocation_Statics::NewProp_tileX = { "tileX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_Grid_eventtileToRelativeLocation_Parms, tileX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHeroesBuilder_Grid_tileToRelativeLocation_Statics::NewProp_tileY = { "tileY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_Grid_eventtileToRelativeLocation_Parms, tileY), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHeroesBuilder_Grid_tileToRelativeLocation_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_Grid_eventtileToRelativeLocation_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AHeroesBuilder_Grid_tileToRelativeLocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HeroesBuilder_Grid_eventtileToRelativeLocation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHeroesBuilder_Grid_tileToRelativeLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HeroesBuilder_Grid_eventtileToRelativeLocation_Parms), &Z_Construct_UFunction_AHeroesBuilder_Grid_tileToRelativeLocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeroesBuilder_Grid_tileToRelativeLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_Grid_tileToRelativeLocation_Statics::NewProp_tileX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_Grid_tileToRelativeLocation_Statics::NewProp_tileY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_Grid_tileToRelativeLocation_Statics::NewProp_location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_Grid_tileToRelativeLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeroesBuilder_Grid_tileToRelativeLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Heroes|Grid|Tile" },
		{ "Comment", "/**\n\x09 * Translate a tile to its relative location (this grid as reference)\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_Grid.h" },
		{ "ToolTip", "Translate a tile to its relative location (this grid as reference)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeroesBuilder_Grid_tileToRelativeLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeroesBuilder_Grid, nullptr, "tileToRelativeLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_AHeroesBuilder_Grid_tileToRelativeLocation_Statics::HeroesBuilder_Grid_eventtileToRelativeLocation_Parms), Z_Construct_UFunction_AHeroesBuilder_Grid_tileToRelativeLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_Grid_tileToRelativeLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeroesBuilder_Grid_tileToRelativeLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_Grid_tileToRelativeLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeroesBuilder_Grid_tileToRelativeLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHeroesBuilder_Grid_tileToRelativeLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHeroesBuilder_Grid_tileToWorldLocation_Statics
	{
		struct HeroesBuilder_Grid_eventtileToWorldLocation_Parms
		{
			int32 tileX;
			int32 tileY;
			FVector location;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_tileX;
		static const UECodeGen_Private::FIntPropertyParams NewProp_tileY;
		static const UECodeGen_Private::FStructPropertyParams NewProp_location;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHeroesBuilder_Grid_tileToWorldLocation_Statics::NewProp_tileX = { "tileX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_Grid_eventtileToWorldLocation_Parms, tileX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHeroesBuilder_Grid_tileToWorldLocation_Statics::NewProp_tileY = { "tileY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_Grid_eventtileToWorldLocation_Parms, tileY), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHeroesBuilder_Grid_tileToWorldLocation_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_Grid_eventtileToWorldLocation_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AHeroesBuilder_Grid_tileToWorldLocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HeroesBuilder_Grid_eventtileToWorldLocation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHeroesBuilder_Grid_tileToWorldLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HeroesBuilder_Grid_eventtileToWorldLocation_Parms), &Z_Construct_UFunction_AHeroesBuilder_Grid_tileToWorldLocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeroesBuilder_Grid_tileToWorldLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_Grid_tileToWorldLocation_Statics::NewProp_tileX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_Grid_tileToWorldLocation_Statics::NewProp_tileY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_Grid_tileToWorldLocation_Statics::NewProp_location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_Grid_tileToWorldLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeroesBuilder_Grid_tileToWorldLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Heroes|Grid|Tile" },
		{ "Comment", "/**\n\x09 * Translate a tile to its world location\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_Grid.h" },
		{ "ToolTip", "Translate a tile to its world location" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeroesBuilder_Grid_tileToWorldLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeroesBuilder_Grid, nullptr, "tileToWorldLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_AHeroesBuilder_Grid_tileToWorldLocation_Statics::HeroesBuilder_Grid_eventtileToWorldLocation_Parms), Z_Construct_UFunction_AHeroesBuilder_Grid_tileToWorldLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_Grid_tileToWorldLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeroesBuilder_Grid_tileToWorldLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_Grid_tileToWorldLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeroesBuilder_Grid_tileToWorldLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHeroesBuilder_Grid_tileToWorldLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHeroesBuilder_Grid_unregisterBuilding_Statics
	{
		struct HeroesBuilder_Grid_eventunregisterBuilding_Parms
		{
			AHeroesBuilder_BuildingActor* building;
			bool quietly;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_building;
		static void NewProp_quietly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_quietly;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHeroesBuilder_Grid_unregisterBuilding_Statics::NewProp_building = { "building", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_Grid_eventunregisterBuilding_Parms, building), Z_Construct_UClass_AHeroesBuilder_BuildingActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AHeroesBuilder_Grid_unregisterBuilding_Statics::NewProp_quietly_SetBit(void* Obj)
	{
		((HeroesBuilder_Grid_eventunregisterBuilding_Parms*)Obj)->quietly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHeroesBuilder_Grid_unregisterBuilding_Statics::NewProp_quietly = { "quietly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HeroesBuilder_Grid_eventunregisterBuilding_Parms), &Z_Construct_UFunction_AHeroesBuilder_Grid_unregisterBuilding_Statics::NewProp_quietly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeroesBuilder_Grid_unregisterBuilding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_Grid_unregisterBuilding_Statics::NewProp_building,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_Grid_unregisterBuilding_Statics::NewProp_quietly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeroesBuilder_Grid_unregisterBuilding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Heroes|Grid|Building" },
		{ "Comment", "/**\n\x09 * Unregister a building from the grid\n\x09 * If quietly, the addition won't throw an onBuildingRemoved event\n\x09 */" },
		{ "CPP_Default_quietly", "false" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_Grid.h" },
		{ "ToolTip", "Unregister a building from the grid\nIf quietly, the addition won't throw an onBuildingRemoved event" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeroesBuilder_Grid_unregisterBuilding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeroesBuilder_Grid, nullptr, "unregisterBuilding", nullptr, nullptr, sizeof(Z_Construct_UFunction_AHeroesBuilder_Grid_unregisterBuilding_Statics::HeroesBuilder_Grid_eventunregisterBuilding_Parms), Z_Construct_UFunction_AHeroesBuilder_Grid_unregisterBuilding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_Grid_unregisterBuilding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeroesBuilder_Grid_unregisterBuilding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_Grid_unregisterBuilding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeroesBuilder_Grid_unregisterBuilding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHeroesBuilder_Grid_unregisterBuilding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHeroesBuilder_Grid_validate_Statics
	{
		struct HeroesBuilder_Grid_eventvalidate_Parms
		{
			const AHeroesBuilder_BuildingActor* buildingActor;
			bool duplicate;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_buildingActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_buildingActor;
		static void NewProp_duplicate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_duplicate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeroesBuilder_Grid_validate_Statics::NewProp_buildingActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHeroesBuilder_Grid_validate_Statics::NewProp_buildingActor = { "buildingActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_Grid_eventvalidate_Parms, buildingActor), Z_Construct_UClass_AHeroesBuilder_BuildingActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AHeroesBuilder_Grid_validate_Statics::NewProp_buildingActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_Grid_validate_Statics::NewProp_buildingActor_MetaData)) };
	void Z_Construct_UFunction_AHeroesBuilder_Grid_validate_Statics::NewProp_duplicate_SetBit(void* Obj)
	{
		((HeroesBuilder_Grid_eventvalidate_Parms*)Obj)->duplicate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHeroesBuilder_Grid_validate_Statics::NewProp_duplicate = { "duplicate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HeroesBuilder_Grid_eventvalidate_Parms), &Z_Construct_UFunction_AHeroesBuilder_Grid_validate_Statics::NewProp_duplicate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeroesBuilder_Grid_validate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_Grid_validate_Statics::NewProp_buildingActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_Grid_validate_Statics::NewProp_duplicate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeroesBuilder_Grid_validate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Heroes|Grid|Actions" },
		{ "Comment", "/**\n\x09 * Called when start the validation of a building for this grid,\n\x09 * @see AHeroesBuilder_Grid::onActorNeedValidation\n\x09 * @see IHeroesBuilder_IGridDelegate::Execute_onActorValidated\n\x09 * @see IHeroesBuilder_IGridDelegate::Execute_onActorError\n\x09 */" },
		{ "CPP_Default_duplicate", "false" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_Grid.h" },
		{ "ToolTip", "Called when start the validation of a building for this grid,\n@see AHeroesBuilder_Grid::onActorNeedValidation\n@see IHeroesBuilder_IGridDelegate::Execute_onActorValidated\n@see IHeroesBuilder_IGridDelegate::Execute_onActorError" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeroesBuilder_Grid_validate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeroesBuilder_Grid, nullptr, "validate", nullptr, nullptr, sizeof(Z_Construct_UFunction_AHeroesBuilder_Grid_validate_Statics::HeroesBuilder_Grid_eventvalidate_Parms), Z_Construct_UFunction_AHeroesBuilder_Grid_validate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_Grid_validate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeroesBuilder_Grid_validate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_Grid_validate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeroesBuilder_Grid_validate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHeroesBuilder_Grid_validate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHeroesBuilder_Grid_worldLocationToTile_Statics
	{
		struct HeroesBuilder_Grid_eventworldLocationToTile_Parms
		{
			FVector location;
			int32 tileX;
			int32 tileY;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_location;
		static const UECodeGen_Private::FIntPropertyParams NewProp_tileX;
		static const UECodeGen_Private::FIntPropertyParams NewProp_tileY;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHeroesBuilder_Grid_worldLocationToTile_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_Grid_eventworldLocationToTile_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHeroesBuilder_Grid_worldLocationToTile_Statics::NewProp_tileX = { "tileX", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_Grid_eventworldLocationToTile_Parms, tileX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHeroesBuilder_Grid_worldLocationToTile_Statics::NewProp_tileY = { "tileY", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_Grid_eventworldLocationToTile_Parms, tileY), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AHeroesBuilder_Grid_worldLocationToTile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HeroesBuilder_Grid_eventworldLocationToTile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHeroesBuilder_Grid_worldLocationToTile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HeroesBuilder_Grid_eventworldLocationToTile_Parms), &Z_Construct_UFunction_AHeroesBuilder_Grid_worldLocationToTile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeroesBuilder_Grid_worldLocationToTile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_Grid_worldLocationToTile_Statics::NewProp_location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_Grid_worldLocationToTile_Statics::NewProp_tileX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_Grid_worldLocationToTile_Statics::NewProp_tileY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_Grid_worldLocationToTile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeroesBuilder_Grid_worldLocationToTile_Statics::Function_MetaDataParams[] = {
		{ "Category", "Heroes|Grid|Tile" },
		{ "Comment", "/**\n\x09 * Translate a world location to a grid tile, if possible\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_Grid.h" },
		{ "ToolTip", "Translate a world location to a grid tile, if possible" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeroesBuilder_Grid_worldLocationToTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeroesBuilder_Grid, nullptr, "worldLocationToTile", nullptr, nullptr, sizeof(Z_Construct_UFunction_AHeroesBuilder_Grid_worldLocationToTile_Statics::HeroesBuilder_Grid_eventworldLocationToTile_Parms), Z_Construct_UFunction_AHeroesBuilder_Grid_worldLocationToTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_Grid_worldLocationToTile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeroesBuilder_Grid_worldLocationToTile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_Grid_worldLocationToTile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeroesBuilder_Grid_worldLocationToTile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHeroesBuilder_Grid_worldLocationToTile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHeroesBuilder_Grid);
	UClass* Z_Construct_UClass_AHeroesBuilder_Grid_NoRegister()
	{
		return AHeroesBuilder_Grid::StaticClass();
	}
	struct Z_Construct_UClass_AHeroesBuilder_Grid_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onBuildingAdded_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onBuildingAdded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_onBuildingRemoved_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_onBuildingRemoved;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gridProcedureMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_gridProcedureMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tileAvailabilityProcedureMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_tileAvailabilityProcedureMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_clickableBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_clickableBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tileSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_tileSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_width_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_width;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_height_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_height;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gridProfile_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_gridProfile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gridChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_gridChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gridTimerRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_gridTimerRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_floorOffsetZ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_floorOffsetZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lineOffsetZ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_lineOffsetZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lineThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_lineThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_subDivisionLineThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_subDivisionLineThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_showSubdivision_MetaData[];
#endif
		static void NewProp_showSubdivision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_showSubdivision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_floorMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_floorMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lineMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_lineMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lineSubdivitionMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_lineSubdivitionMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_unavailableMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_unavailableMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_delegate_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_delegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_unavailableTest_MetaData[];
#endif
		static void NewProp_unavailableTest_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_unavailableTest;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_buildingsActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_buildingsActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_buildingsActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHeroesBuilder_Grid_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HeroesBuilderPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHeroesBuilder_Grid_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHeroesBuilder_Grid_buildingIsColliding, "buildingIsColliding" }, // 2696840364
		{ &Z_Construct_UFunction_AHeroesBuilder_Grid_clearUnavailableTiles, "clearUnavailableTiles" }, // 1097210532
		{ &Z_Construct_UFunction_AHeroesBuilder_Grid_getBuildings, "getBuildings" }, // 60459980
		{ &Z_Construct_UFunction_AHeroesBuilder_Grid_getDelegate, "getDelegate" }, // 4090332429
		{ &Z_Construct_UFunction_AHeroesBuilder_Grid_getGridHeigh, "getGridHeigh" }, // 3767523772
		{ &Z_Construct_UFunction_AHeroesBuilder_Grid_getGridProfile, "getGridProfile" }, // 1807896775
		{ &Z_Construct_UFunction_AHeroesBuilder_Grid_getGridWidth, "getGridWidth" }, // 3772417520
		{ &Z_Construct_UFunction_AHeroesBuilder_Grid_getTileInfo, "getTileInfo" }, // 207103141
		{ &Z_Construct_UFunction_AHeroesBuilder_Grid_getTilesInfo, "getTilesInfo" }, // 1636788258
		{ &Z_Construct_UFunction_AHeroesBuilder_Grid_getTilesInfoFromTilesList, "getTilesInfoFromTilesList" }, // 3299504285
		{ &Z_Construct_UFunction_AHeroesBuilder_Grid_onActorNeedValidation, "onActorNeedValidation" }, // 791770517
		{ &Z_Construct_UFunction_AHeroesBuilder_Grid_onBoxMouseOverEnd, "onBoxMouseOverEnd" }, // 3359424093
		{ &Z_Construct_UFunction_AHeroesBuilder_Grid_onBoxMouseOverStart, "onBoxMouseOverStart" }, // 26036225
		{ &Z_Construct_UFunction_AHeroesBuilder_Grid_onMouseMoveListener, "onMouseMoveListener" }, // 1139591333
		{ &Z_Construct_UFunction_AHeroesBuilder_Grid_registerBuilding, "registerBuilding" }, // 1822625623
		{ &Z_Construct_UFunction_AHeroesBuilder_Grid_relativeLocationToTile, "relativeLocationToTile" }, // 3623196109
		{ &Z_Construct_UFunction_AHeroesBuilder_Grid_setDelegate, "setDelegate" }, // 3799247921
		{ &Z_Construct_UFunction_AHeroesBuilder_Grid_showCurrentUnavailableTiles, "showCurrentUnavailableTiles" }, // 3801053056
		{ &Z_Construct_UFunction_AHeroesBuilder_Grid_showUnavailableTiles, "showUnavailableTiles" }, // 309095491
		{ &Z_Construct_UFunction_AHeroesBuilder_Grid_tileIsValid, "tileIsValid" }, // 650814609
		{ &Z_Construct_UFunction_AHeroesBuilder_Grid_tilesFit, "tilesFit" }, // 1764240758
		{ &Z_Construct_UFunction_AHeroesBuilder_Grid_tileToRelativeLocation, "tileToRelativeLocation" }, // 3454882148
		{ &Z_Construct_UFunction_AHeroesBuilder_Grid_tileToWorldLocation, "tileToWorldLocation" }, // 459742772
		{ &Z_Construct_UFunction_AHeroesBuilder_Grid_unregisterBuilding, "unregisterBuilding" }, // 1227492586
		{ &Z_Construct_UFunction_AHeroesBuilder_Grid_validate, "validate" }, // 2519349095
		{ &Z_Construct_UFunction_AHeroesBuilder_Grid_worldLocationToTile, "worldLocationToTile" }, // 2536030434
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeroesBuilder_Grid_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Grid actor to be placed on the world\n * They must have a delegate set to handled direct call on some event (@see IHeroesBuilder_IGridDelegate)\n * Additionally, they dispatch new event (onBuildingAdded, onBuildingRemoved) that can be listen by any object\n */" },
		{ "IncludePath", "HeroesBuilder_Grid.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_Grid.h" },
		{ "ToolTip", "Grid actor to be placed on the world\nThey must have a delegate set to handled direct call on some event (@see IHeroesBuilder_IGridDelegate)\nAdditionally, they dispatch new event (onBuildingAdded, onBuildingRemoved) that can be listen by any object" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_onBuildingAdded_MetaData[] = {
		{ "Category", "Heroes|Grid|Event" },
		{ "Comment", "/**\n\x09 * Triggered every time a building is added to the grid\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_Grid.h" },
		{ "ToolTip", "Triggered every time a building is added to the grid" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_onBuildingAdded = { "onBuildingAdded", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHeroesBuilder_Grid, onBuildingAdded), Z_Construct_UDelegateFunction_HeroesBuilderPlugin_onBuildingAdded__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_onBuildingAdded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_onBuildingAdded_MetaData)) }; // 3110835768
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_onBuildingRemoved_MetaData[] = {
		{ "Category", "Heroes|Grid|Event" },
		{ "Comment", "/**\n\x09 * Triggered every time a building is removed from the grid\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_Grid.h" },
		{ "ToolTip", "Triggered every time a building is removed from the grid" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_onBuildingRemoved = { "onBuildingRemoved", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHeroesBuilder_Grid, onBuildingRemoved), Z_Construct_UDelegateFunction_HeroesBuilderPlugin_onBuildingRemoved__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_onBuildingRemoved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_onBuildingRemoved_MetaData)) }; // 1932217430
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_gridProcedureMesh_MetaData[] = {
		{ "Category", "Heroes|Actor" },
		{ "Comment", "/**\n\x09 * generate the main grid mesh\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_Grid.h" },
		{ "ToolTip", "generate the main grid mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_gridProcedureMesh = { "gridProcedureMesh", nullptr, (EPropertyFlags)0x00100000000a081d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHeroesBuilder_Grid, gridProcedureMesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_gridProcedureMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_gridProcedureMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_tileAvailabilityProcedureMesh_MetaData[] = {
		{ "Category", "Heroes|Actor" },
		{ "Comment", "/**\n\x09 * generate the availability grid mesh\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_Grid.h" },
		{ "ToolTip", "generate the availability grid mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_tileAvailabilityProcedureMesh = { "tileAvailabilityProcedureMesh", nullptr, (EPropertyFlags)0x00100000000a081d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHeroesBuilder_Grid, tileAvailabilityProcedureMesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_tileAvailabilityProcedureMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_tileAvailabilityProcedureMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_clickableBox_MetaData[] = {
		{ "Category", "Heroes|Actor" },
		{ "Comment", "/**\n\x09 * Used to handle mouse event on this actor\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_Grid.h" },
		{ "ToolTip", "Used to handle mouse event on this actor" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_clickableBox = { "clickableBox", nullptr, (EPropertyFlags)0x00100000000a081d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHeroesBuilder_Grid, clickableBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_clickableBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_clickableBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_tileSize_MetaData[] = {
		{ "Category", "Heroes|Setup" },
		{ "Comment", "/**\n\x09 * Size of squares\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_Grid.h" },
		{ "ToolTip", "Size of squares" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_tileSize = { "tileSize", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHeroesBuilder_Grid, tileSize), METADATA_PARAMS(Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_tileSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_tileSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_width_MetaData[] = {
		{ "Category", "Heroes|Setup" },
		{ "Comment", "/**\n\x09 * Number of squares width\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_Grid.h" },
		{ "ToolTip", "Number of squares width" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_width = { "width", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHeroesBuilder_Grid, width), METADATA_PARAMS(Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_width_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_width_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_height_MetaData[] = {
		{ "Category", "Heroes|Setup" },
		{ "Comment", "/**\n\x09 * Number of squares height\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_Grid.h" },
		{ "ToolTip", "Number of squares height" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_height = { "height", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHeroesBuilder_Grid, height), METADATA_PARAMS(Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_height_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_height_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_gridProfile_MetaData[] = {
		{ "Category", "Heroes|Setup" },
		{ "Comment", "/**\n\x09 * Profile defined in the project setting to use\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_Grid.h" },
		{ "ToolTip", "Profile defined in the project setting to use" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_gridProfile = { "gridProfile", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHeroesBuilder_Grid, gridProfile), METADATA_PARAMS(Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_gridProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_gridProfile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_gridChannel_MetaData[] = {
		{ "Category", "Heroes|Setup" },
		{ "Comment", "/**\n\x09 * Channel defined to trace when needed (eg. onMouseMove)\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_Grid.h" },
		{ "ToolTip", "Channel defined to trace when needed (eg. onMouseMove)" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_gridChannel = { "gridChannel", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHeroesBuilder_Grid, gridChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_gridChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_gridChannel_MetaData)) }; // 727872708
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_gridTimerRate_MetaData[] = {
		{ "Category", "Heroes|Setup" },
		{ "Comment", "/**\n\x09 * Profile defined in the project setting to use\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_Grid.h" },
		{ "ToolTip", "Profile defined in the project setting to use" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_gridTimerRate = { "gridTimerRate", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHeroesBuilder_Grid, gridTimerRate), METADATA_PARAMS(Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_gridTimerRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_gridTimerRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_floorOffsetZ_MetaData[] = {
		{ "Category", "Heroes|Positioning" },
		{ "Comment", "/**\n\x09 * Distance between the \"real\" floor and the grid floor\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_Grid.h" },
		{ "ToolTip", "Distance between the \"real\" floor and the grid floor" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_floorOffsetZ = { "floorOffsetZ", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHeroesBuilder_Grid, floorOffsetZ), METADATA_PARAMS(Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_floorOffsetZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_floorOffsetZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_lineOffsetZ_MetaData[] = {
		{ "Category", "Heroes|Positioning" },
		{ "Comment", "/**\n\x09 * Distance between the grid floor and the grid lines\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_Grid.h" },
		{ "ToolTip", "Distance between the grid floor and the grid lines" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_lineOffsetZ = { "lineOffsetZ", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHeroesBuilder_Grid, lineOffsetZ), METADATA_PARAMS(Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_lineOffsetZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_lineOffsetZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_lineThickness_MetaData[] = {
		{ "Category", "Heroes|Appearance" },
		{ "Comment", "/**\n\x09 * Thickness of the grid lines\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_Grid.h" },
		{ "ToolTip", "Thickness of the grid lines" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_lineThickness = { "lineThickness", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHeroesBuilder_Grid, lineThickness), METADATA_PARAMS(Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_lineThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_lineThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_subDivisionLineThickness_MetaData[] = {
		{ "Category", "Heroes|Appearance" },
		{ "Comment", "/**\n\x09 * Thickness of the grid lines\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_Grid.h" },
		{ "ToolTip", "Thickness of the grid lines" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_subDivisionLineThickness = { "subDivisionLineThickness", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHeroesBuilder_Grid, subDivisionLineThickness), METADATA_PARAMS(Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_subDivisionLineThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_subDivisionLineThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_showSubdivision_MetaData[] = {
		{ "Category", "Heroes|Appearance" },
		{ "Comment", "/**\n\x09 * Show / hide subdivision lines\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_Grid.h" },
		{ "ToolTip", "Show / hide subdivision lines" },
	};
#endif
	void Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_showSubdivision_SetBit(void* Obj)
	{
		((AHeroesBuilder_Grid*)Obj)->showSubdivision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_showSubdivision = { "showSubdivision", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHeroesBuilder_Grid), &Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_showSubdivision_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_showSubdivision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_showSubdivision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_floorMaterial_MetaData[] = {
		{ "Category", "Heroes|Materials" },
		{ "Comment", "/**\n\x09 * Material Instance to apply to the base of the grid\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_Grid.h" },
		{ "ToolTip", "Material Instance to apply to the base of the grid" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_floorMaterial = { "floorMaterial", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHeroesBuilder_Grid, floorMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_floorMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_floorMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_lineMaterial_MetaData[] = {
		{ "Category", "Heroes|Materials" },
		{ "Comment", "/**\n\x09 * Material Instance to apply to the lines of the grid\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_Grid.h" },
		{ "ToolTip", "Material Instance to apply to the lines of the grid" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_lineMaterial = { "lineMaterial", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHeroesBuilder_Grid, lineMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_lineMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_lineMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_lineSubdivitionMaterial_MetaData[] = {
		{ "Category", "Heroes|Materials" },
		{ "Comment", "/**\n\x09 * Material Instance to apply to the subdivision lines of the grid\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_Grid.h" },
		{ "ToolTip", "Material Instance to apply to the subdivision lines of the grid" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_lineSubdivitionMaterial = { "lineSubdivitionMaterial", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHeroesBuilder_Grid, lineSubdivitionMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_lineSubdivitionMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_lineSubdivitionMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_unavailableMaterial_MetaData[] = {
		{ "Category", "Heroes|Materials" },
		{ "Comment", "/**\n\x09 * Material Instance to for unavailable tiles\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_Grid.h" },
		{ "ToolTip", "Material Instance to for unavailable tiles" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_unavailableMaterial = { "unavailableMaterial", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHeroesBuilder_Grid, unavailableMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_unavailableMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_unavailableMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_delegate_MetaData[] = {
		{ "Category", "Heroes|Delegate" },
		{ "Comment", "/**\n\x09 * Object registered as delegate for this grid\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_Grid.h" },
		{ "ToolTip", "Object registered as delegate for this grid" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_delegate = { "delegate", nullptr, (EPropertyFlags)0x0024080000020801, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHeroesBuilder_Grid, delegate), Z_Construct_UClass_UHeroesBuilder_IGridDelegate_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_delegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_delegate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_unavailableTest_MetaData[] = {
		{ "Category", "Heroes|Test" },
		{ "Comment", "/**\n\x09 * Turn true to generate few test tiles (helper to test unavailable tiles)\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_Grid.h" },
		{ "ToolTip", "Turn true to generate few test tiles (helper to test unavailable tiles)" },
	};
#endif
	void Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_unavailableTest_SetBit(void* Obj)
	{
		((AHeroesBuilder_Grid*)Obj)->unavailableTest = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_unavailableTest = { "unavailableTest", nullptr, (EPropertyFlags)0x0020080000000801, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHeroesBuilder_Grid), &Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_unavailableTest_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_unavailableTest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_unavailableTest_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_buildingsActors_Inner = { "buildingsActors", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AHeroesBuilder_BuildingActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_buildingsActors_MetaData[] = {
		{ "Category", "Heroes|Buildings" },
		{ "Comment", "/**\n\x09 * List of building infos currently tracked by the grid\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_Grid.h" },
		{ "ToolTip", "List of building infos currently tracked by the grid" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_buildingsActors = { "buildingsActors", nullptr, (EPropertyFlags)0x0020080000020801, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHeroesBuilder_Grid, buildingsActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_buildingsActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_buildingsActors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHeroesBuilder_Grid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_onBuildingAdded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_onBuildingRemoved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_gridProcedureMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_tileAvailabilityProcedureMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_clickableBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_tileSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_gridProfile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_gridChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_gridTimerRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_floorOffsetZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_lineOffsetZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_lineThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_subDivisionLineThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_showSubdivision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_floorMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_lineMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_lineSubdivitionMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_unavailableMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_delegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_unavailableTest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_buildingsActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroesBuilder_Grid_Statics::NewProp_buildingsActors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHeroesBuilder_Grid_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHeroesBuilder_Grid>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHeroesBuilder_Grid_Statics::ClassParams = {
		&AHeroesBuilder_Grid::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AHeroesBuilder_Grid_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AHeroesBuilder_Grid_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHeroesBuilder_Grid_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHeroesBuilder_Grid_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHeroesBuilder_Grid()
	{
		if (!Z_Registration_Info_UClass_AHeroesBuilder_Grid.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHeroesBuilder_Grid.OuterSingleton, Z_Construct_UClass_AHeroesBuilder_Grid_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHeroesBuilder_Grid.OuterSingleton;
	}
	template<> HEROESBUILDERPLUGIN_API UClass* StaticClass<AHeroesBuilder_Grid>()
	{
		return AHeroesBuilder_Grid::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHeroesBuilder_Grid);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_Grid_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_Grid_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHeroesBuilder_Grid, AHeroesBuilder_Grid::StaticClass, TEXT("AHeroesBuilder_Grid"), &Z_Registration_Info_UClass_AHeroesBuilder_Grid, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHeroesBuilder_Grid), 3818037289U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_Grid_h_3115240958(TEXT("/Script/HeroesBuilderPlugin"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_Grid_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_Grid_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
