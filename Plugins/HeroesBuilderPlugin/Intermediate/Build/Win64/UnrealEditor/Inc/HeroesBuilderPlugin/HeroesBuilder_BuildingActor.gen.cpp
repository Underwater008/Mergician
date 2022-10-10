// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HeroesBuilderPlugin/Public/HeroesBuilder_BuildingActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroesBuilder_BuildingActor() {}
// Cross Module References
	HEROESBUILDERPLUGIN_API UEnum* Z_Construct_UEnum_HeroesBuilderPlugin_EHeroesBuilder_RotationDirection();
	UPackage* Z_Construct_UPackage__Script_HeroesBuilderPlugin();
	HEROESBUILDERPLUGIN_API UClass* Z_Construct_UClass_AHeroesBuilder_BuildingActor_NoRegister();
	HEROESBUILDERPLUGIN_API UClass* Z_Construct_UClass_AHeroesBuilder_BuildingActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	HEROESBUILDERPLUGIN_API UClass* Z_Construct_UClass_AHeroesBuilder_Grid_NoRegister();
	HEROESBUILDERPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FHeroesBuilder_GridTile();
	HEROESBUILDERPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FHeroesBuilder_GridTileInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHeroesBuilder_RotationDirection;
	static UEnum* EHeroesBuilder_RotationDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHeroesBuilder_RotationDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHeroesBuilder_RotationDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HeroesBuilderPlugin_EHeroesBuilder_RotationDirection, Z_Construct_UPackage__Script_HeroesBuilderPlugin(), TEXT("EHeroesBuilder_RotationDirection"));
		}
		return Z_Registration_Info_UEnum_EHeroesBuilder_RotationDirection.OuterSingleton;
	}
	template<> HEROESBUILDERPLUGIN_API UEnum* StaticEnum<EHeroesBuilder_RotationDirection>()
	{
		return EHeroesBuilder_RotationDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_HeroesBuilderPlugin_EHeroesBuilder_RotationDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HeroesBuilderPlugin_EHeroesBuilder_RotationDirection_Statics::Enumerators[] = {
		{ "EHeroesBuilder_RotationDirection::NONE", (int64)EHeroesBuilder_RotationDirection::NONE },
		{ "EHeroesBuilder_RotationDirection::CLOCK", (int64)EHeroesBuilder_RotationDirection::CLOCK },
		{ "EHeroesBuilder_RotationDirection::COUNTER_CLOCK", (int64)EHeroesBuilder_RotationDirection::COUNTER_CLOCK },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HeroesBuilderPlugin_EHeroesBuilder_RotationDirection_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CLOCK.DisplayName", "Clock Direction" },
		{ "CLOCK.Name", "EHeroesBuilder_RotationDirection::CLOCK" },
		{ "COUNTER_CLOCK.DisplayName", "CounterClock Direction" },
		{ "COUNTER_CLOCK.Name", "EHeroesBuilder_RotationDirection::COUNTER_CLOCK" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_BuildingActor.h" },
		{ "NONE.Hidden", "" },
		{ "NONE.Name", "EHeroesBuilder_RotationDirection::NONE" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HeroesBuilderPlugin_EHeroesBuilder_RotationDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HeroesBuilderPlugin,
		nullptr,
		"EHeroesBuilder_RotationDirection",
		"EHeroesBuilder_RotationDirection",
		Z_Construct_UEnum_HeroesBuilderPlugin_EHeroesBuilder_RotationDirection_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HeroesBuilderPlugin_EHeroesBuilder_RotationDirection_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HeroesBuilderPlugin_EHeroesBuilder_RotationDirection_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HeroesBuilderPlugin_EHeroesBuilder_RotationDirection_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HeroesBuilderPlugin_EHeroesBuilder_RotationDirection()
	{
		if (!Z_Registration_Info_UEnum_EHeroesBuilder_RotationDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHeroesBuilder_RotationDirection.InnerSingleton, Z_Construct_UEnum_HeroesBuilderPlugin_EHeroesBuilder_RotationDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHeroesBuilder_RotationDirection.InnerSingleton;
	}
	DEFINE_FUNCTION(AHeroesBuilder_BuildingActor::execisAttachedToGrid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->isAttachedToGrid();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHeroesBuilder_BuildingActor::execgetGridTilesInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FHeroesBuilder_GridTileInfo>*)Z_Param__Result=P_THIS->getGridTilesInfo_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHeroesBuilder_BuildingActor::execgetGridTiles)
	{
		P_GET_OBJECT(AHeroesBuilder_Grid,Z_Param_grid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FHeroesBuilder_GridTile>*)Z_Param__Result=P_THIS->getGridTiles_Implementation(Z_Param_grid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHeroesBuilder_BuildingActor::execgetGrid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AHeroesBuilder_Grid**)Z_Param__Result=P_THIS->getGrid_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHeroesBuilder_BuildingActor::execdetachFromGrid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->detachFromGrid_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHeroesBuilder_BuildingActor::execattachToGrid)
	{
		P_GET_OBJECT(AHeroesBuilder_Grid,Z_Param_grid);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->attachToGrid_Implementation(Z_Param_grid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHeroesBuilder_BuildingActor::execgetRelativeRotation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->getRelativeRotation_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHeroesBuilder_BuildingActor::execsetRelativeRotation)
	{
		P_GET_STRUCT(FRotator,Z_Param_rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->setRelativeRotation_Implementation(Z_Param_rotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHeroesBuilder_BuildingActor::execrotate)
	{
		P_GET_ENUM(EHeroesBuilder_RotationDirection,Z_Param_direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->rotate_Implementation(EHeroesBuilder_RotationDirection(Z_Param_direction));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHeroesBuilder_BuildingActor::execgetSizeY)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->getSizeY_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHeroesBuilder_BuildingActor::execgetSizeX)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->getSizeX_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AHeroesBuilder_BuildingActor_attachToGrid = FName(TEXT("attachToGrid"));
	void AHeroesBuilder_BuildingActor::attachToGrid(AHeroesBuilder_Grid* grid)
	{
		HeroesBuilder_BuildingActor_eventattachToGrid_Parms Parms;
		Parms.grid=grid;
		ProcessEvent(FindFunctionChecked(NAME_AHeroesBuilder_BuildingActor_attachToGrid),&Parms);
	}
	static FName NAME_AHeroesBuilder_BuildingActor_detachFromGrid = FName(TEXT("detachFromGrid"));
	void AHeroesBuilder_BuildingActor::detachFromGrid()
	{
		ProcessEvent(FindFunctionChecked(NAME_AHeroesBuilder_BuildingActor_detachFromGrid),NULL);
	}
	static FName NAME_AHeroesBuilder_BuildingActor_getGrid = FName(TEXT("getGrid"));
	AHeroesBuilder_Grid* AHeroesBuilder_BuildingActor::getGrid() const
	{
		HeroesBuilder_BuildingActor_eventgetGrid_Parms Parms;
		const_cast<AHeroesBuilder_BuildingActor*>(this)->ProcessEvent(FindFunctionChecked(NAME_AHeroesBuilder_BuildingActor_getGrid),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AHeroesBuilder_BuildingActor_getGridTiles = FName(TEXT("getGridTiles"));
	TArray<FHeroesBuilder_GridTile> AHeroesBuilder_BuildingActor::getGridTiles(const AHeroesBuilder_Grid* grid) const
	{
		HeroesBuilder_BuildingActor_eventgetGridTiles_Parms Parms;
		Parms.grid=grid;
		const_cast<AHeroesBuilder_BuildingActor*>(this)->ProcessEvent(FindFunctionChecked(NAME_AHeroesBuilder_BuildingActor_getGridTiles),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AHeroesBuilder_BuildingActor_getGridTilesInfo = FName(TEXT("getGridTilesInfo"));
	TArray<FHeroesBuilder_GridTileInfo> AHeroesBuilder_BuildingActor::getGridTilesInfo() const
	{
		HeroesBuilder_BuildingActor_eventgetGridTilesInfo_Parms Parms;
		const_cast<AHeroesBuilder_BuildingActor*>(this)->ProcessEvent(FindFunctionChecked(NAME_AHeroesBuilder_BuildingActor_getGridTilesInfo),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AHeroesBuilder_BuildingActor_getRelativeRotation = FName(TEXT("getRelativeRotation"));
	FRotator AHeroesBuilder_BuildingActor::getRelativeRotation() const
	{
		HeroesBuilder_BuildingActor_eventgetRelativeRotation_Parms Parms;
		const_cast<AHeroesBuilder_BuildingActor*>(this)->ProcessEvent(FindFunctionChecked(NAME_AHeroesBuilder_BuildingActor_getRelativeRotation),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AHeroesBuilder_BuildingActor_getSizeX = FName(TEXT("getSizeX"));
	int32 AHeroesBuilder_BuildingActor::getSizeX() const
	{
		HeroesBuilder_BuildingActor_eventgetSizeX_Parms Parms;
		const_cast<AHeroesBuilder_BuildingActor*>(this)->ProcessEvent(FindFunctionChecked(NAME_AHeroesBuilder_BuildingActor_getSizeX),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AHeroesBuilder_BuildingActor_getSizeY = FName(TEXT("getSizeY"));
	int32 AHeroesBuilder_BuildingActor::getSizeY() const
	{
		HeroesBuilder_BuildingActor_eventgetSizeY_Parms Parms;
		const_cast<AHeroesBuilder_BuildingActor*>(this)->ProcessEvent(FindFunctionChecked(NAME_AHeroesBuilder_BuildingActor_getSizeY),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AHeroesBuilder_BuildingActor_rotate = FName(TEXT("rotate"));
	void AHeroesBuilder_BuildingActor::rotate(EHeroesBuilder_RotationDirection direction)
	{
		HeroesBuilder_BuildingActor_eventrotate_Parms Parms;
		Parms.direction=direction;
		ProcessEvent(FindFunctionChecked(NAME_AHeroesBuilder_BuildingActor_rotate),&Parms);
	}
	static FName NAME_AHeroesBuilder_BuildingActor_setRelativeRotation = FName(TEXT("setRelativeRotation"));
	void AHeroesBuilder_BuildingActor::setRelativeRotation(FRotator rotation)
	{
		HeroesBuilder_BuildingActor_eventsetRelativeRotation_Parms Parms;
		Parms.rotation=rotation;
		ProcessEvent(FindFunctionChecked(NAME_AHeroesBuilder_BuildingActor_setRelativeRotation),&Parms);
	}
	void AHeroesBuilder_BuildingActor::StaticRegisterNativesAHeroesBuilder_BuildingActor()
	{
		UClass* Class = AHeroesBuilder_BuildingActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "attachToGrid", &AHeroesBuilder_BuildingActor::execattachToGrid },
			{ "detachFromGrid", &AHeroesBuilder_BuildingActor::execdetachFromGrid },
			{ "getGrid", &AHeroesBuilder_BuildingActor::execgetGrid },
			{ "getGridTiles", &AHeroesBuilder_BuildingActor::execgetGridTiles },
			{ "getGridTilesInfo", &AHeroesBuilder_BuildingActor::execgetGridTilesInfo },
			{ "getRelativeRotation", &AHeroesBuilder_BuildingActor::execgetRelativeRotation },
			{ "getSizeX", &AHeroesBuilder_BuildingActor::execgetSizeX },
			{ "getSizeY", &AHeroesBuilder_BuildingActor::execgetSizeY },
			{ "isAttachedToGrid", &AHeroesBuilder_BuildingActor::execisAttachedToGrid },
			{ "rotate", &AHeroesBuilder_BuildingActor::execrotate },
			{ "setRelativeRotation", &AHeroesBuilder_BuildingActor::execsetRelativeRotation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHeroesBuilder_BuildingActor_attachToGrid_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_grid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHeroesBuilder_BuildingActor_attachToGrid_Statics::NewProp_grid = { "grid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_BuildingActor_eventattachToGrid_Parms, grid), Z_Construct_UClass_AHeroesBuilder_Grid_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeroesBuilder_BuildingActor_attachToGrid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_BuildingActor_attachToGrid_Statics::NewProp_grid,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeroesBuilder_BuildingActor_attachToGrid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Heroes|Building|Grid" },
		{ "Comment", "/**\n\x09 * Reference the grid where this actor is\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_BuildingActor.h" },
		{ "ToolTip", "Reference the grid where this actor is" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeroesBuilder_BuildingActor_attachToGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeroesBuilder_BuildingActor, nullptr, "attachToGrid", nullptr, nullptr, sizeof(HeroesBuilder_BuildingActor_eventattachToGrid_Parms), Z_Construct_UFunction_AHeroesBuilder_BuildingActor_attachToGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_BuildingActor_attachToGrid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeroesBuilder_BuildingActor_attachToGrid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_BuildingActor_attachToGrid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeroesBuilder_BuildingActor_attachToGrid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHeroesBuilder_BuildingActor_attachToGrid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHeroesBuilder_BuildingActor_detachFromGrid_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeroesBuilder_BuildingActor_detachFromGrid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Heroes|Building|Grid" },
		{ "Comment", "/**\n\x09 * Dereference the grid where this actor was\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_BuildingActor.h" },
		{ "ToolTip", "Dereference the grid where this actor was" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeroesBuilder_BuildingActor_detachFromGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeroesBuilder_BuildingActor, nullptr, "detachFromGrid", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeroesBuilder_BuildingActor_detachFromGrid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_BuildingActor_detachFromGrid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeroesBuilder_BuildingActor_detachFromGrid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHeroesBuilder_BuildingActor_detachFromGrid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getGrid_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getGrid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_BuildingActor_eventgetGrid_Parms, ReturnValue), Z_Construct_UClass_AHeroesBuilder_Grid_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getGrid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getGrid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getGrid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Heroes|Building|Grid" },
		{ "Comment", "/**\n\x09 * Get the current grid where this actor is\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_BuildingActor.h" },
		{ "ToolTip", "Get the current grid where this actor is" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeroesBuilder_BuildingActor, nullptr, "getGrid", nullptr, nullptr, sizeof(HeroesBuilder_BuildingActor_eventgetGrid_Parms), Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getGrid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getGrid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getGrid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getGrid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getGrid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getGridTiles_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_grid_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_grid;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getGridTiles_Statics::NewProp_grid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getGridTiles_Statics::NewProp_grid = { "grid", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_BuildingActor_eventgetGridTiles_Parms, grid), Z_Construct_UClass_AHeroesBuilder_Grid_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getGridTiles_Statics::NewProp_grid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getGridTiles_Statics::NewProp_grid_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getGridTiles_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHeroesBuilder_GridTile, METADATA_PARAMS(nullptr, 0) }; // 4097249302
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getGridTiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_BuildingActor_eventgetGridTiles_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 4097249302
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getGridTiles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getGridTiles_Statics::NewProp_grid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getGridTiles_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getGridTiles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getGridTiles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Heroes|Building|Tiles" },
		{ "Comment", "/**\n\x09 * Convert this building into a tile array for the grid send\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_BuildingActor.h" },
		{ "ToolTip", "Convert this building into a tile array for the grid send" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getGridTiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeroesBuilder_BuildingActor, nullptr, "getGridTiles", nullptr, nullptr, sizeof(HeroesBuilder_BuildingActor_eventgetGridTiles_Parms), Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getGridTiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getGridTiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getGridTiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getGridTiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getGridTiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getGridTiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getGridTilesInfo_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getGridTilesInfo_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHeroesBuilder_GridTileInfo, METADATA_PARAMS(nullptr, 0) }; // 2035315418
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getGridTilesInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_BuildingActor_eventgetGridTilesInfo_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2035315418
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getGridTilesInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getGridTilesInfo_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getGridTilesInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getGridTilesInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Heroes|Building|Tiles" },
		{ "Comment", "/**\n\x09 * Convert this building into a tile info array for the current it belongs to\n\x09 * ** if the current building is not attached to any grid, it will returns a empty array\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_BuildingActor.h" },
		{ "ToolTip", "Convert this building into a tile info array for the current it belongs to\n** if the current building is not attached to any grid, it will returns a empty array" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getGridTilesInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeroesBuilder_BuildingActor, nullptr, "getGridTilesInfo", nullptr, nullptr, sizeof(HeroesBuilder_BuildingActor_eventgetGridTilesInfo_Parms), Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getGridTilesInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getGridTilesInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getGridTilesInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getGridTilesInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getGridTilesInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getGridTilesInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getRelativeRotation_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getRelativeRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_BuildingActor_eventgetRelativeRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getRelativeRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getRelativeRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getRelativeRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Heroes|Building|Scene" },
		{ "Comment", "/**\n\x09 * Get the current relative rotation. This will be added to the grid rotation to have the final one for this actor\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_BuildingActor.h" },
		{ "ToolTip", "Get the current relative rotation. This will be added to the grid rotation to have the final one for this actor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getRelativeRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeroesBuilder_BuildingActor, nullptr, "getRelativeRotation", nullptr, nullptr, sizeof(HeroesBuilder_BuildingActor_eventgetRelativeRotation_Parms), Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getRelativeRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getRelativeRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getRelativeRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getRelativeRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getRelativeRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getRelativeRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getSizeX_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getSizeX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_BuildingActor_eventgetSizeX_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getSizeX_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getSizeX_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getSizeX_Statics::Function_MetaDataParams[] = {
		{ "Category", "Heroes|Building|Size" },
		{ "Comment", "/**\n\x09 * Get the X size in unit\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_BuildingActor.h" },
		{ "ToolTip", "Get the X size in unit" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getSizeX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeroesBuilder_BuildingActor, nullptr, "getSizeX", nullptr, nullptr, sizeof(HeroesBuilder_BuildingActor_eventgetSizeX_Parms), Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getSizeX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getSizeX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getSizeX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getSizeX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getSizeX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getSizeX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getSizeY_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getSizeY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_BuildingActor_eventgetSizeY_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getSizeY_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getSizeY_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getSizeY_Statics::Function_MetaDataParams[] = {
		{ "Category", "Heroes|Building|Size" },
		{ "Comment", "/**\n\x09 * Get the Y size in unit\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_BuildingActor.h" },
		{ "ToolTip", "Get the Y size in unit" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getSizeY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeroesBuilder_BuildingActor, nullptr, "getSizeY", nullptr, nullptr, sizeof(HeroesBuilder_BuildingActor_eventgetSizeY_Parms), Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getSizeY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getSizeY_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getSizeY_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getSizeY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getSizeY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getSizeY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHeroesBuilder_BuildingActor_isAttachedToGrid_Statics
	{
		struct HeroesBuilder_BuildingActor_eventisAttachedToGrid_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AHeroesBuilder_BuildingActor_isAttachedToGrid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HeroesBuilder_BuildingActor_eventisAttachedToGrid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AHeroesBuilder_BuildingActor_isAttachedToGrid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HeroesBuilder_BuildingActor_eventisAttachedToGrid_Parms), &Z_Construct_UFunction_AHeroesBuilder_BuildingActor_isAttachedToGrid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeroesBuilder_BuildingActor_isAttachedToGrid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_BuildingActor_isAttachedToGrid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeroesBuilder_BuildingActor_isAttachedToGrid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Heroes|Building|Grid" },
		{ "Comment", "/**\n\x09 * Is this actor is currently registered to a grid ?\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_BuildingActor.h" },
		{ "ToolTip", "Is this actor is currently registered to a grid ?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeroesBuilder_BuildingActor_isAttachedToGrid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeroesBuilder_BuildingActor, nullptr, "isAttachedToGrid", nullptr, nullptr, sizeof(Z_Construct_UFunction_AHeroesBuilder_BuildingActor_isAttachedToGrid_Statics::HeroesBuilder_BuildingActor_eventisAttachedToGrid_Parms), Z_Construct_UFunction_AHeroesBuilder_BuildingActor_isAttachedToGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_BuildingActor_isAttachedToGrid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeroesBuilder_BuildingActor_isAttachedToGrid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_BuildingActor_isAttachedToGrid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeroesBuilder_BuildingActor_isAttachedToGrid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHeroesBuilder_BuildingActor_isAttachedToGrid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHeroesBuilder_BuildingActor_rotate_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_direction_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_direction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AHeroesBuilder_BuildingActor_rotate_Statics::NewProp_direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AHeroesBuilder_BuildingActor_rotate_Statics::NewProp_direction = { "direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_BuildingActor_eventrotate_Parms, direction), Z_Construct_UEnum_HeroesBuilderPlugin_EHeroesBuilder_RotationDirection, METADATA_PARAMS(nullptr, 0) }; // 3941794525
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeroesBuilder_BuildingActor_rotate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_BuildingActor_rotate_Statics::NewProp_direction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_BuildingActor_rotate_Statics::NewProp_direction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeroesBuilder_BuildingActor_rotate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Heroes|Building|Scene" },
		{ "Comment", "/**\n\x09 * Add rotation to the Actor, should step by 90\xc2\xb0 in the direction received\n\x09 */" },
		{ "CPP_Default_direction", "CLOCK" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_BuildingActor.h" },
		{ "ToolTip", "Add rotation to the Actor, should step by 90\xc2\xb0 in the direction received" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeroesBuilder_BuildingActor_rotate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeroesBuilder_BuildingActor, nullptr, "rotate", nullptr, nullptr, sizeof(HeroesBuilder_BuildingActor_eventrotate_Parms), Z_Construct_UFunction_AHeroesBuilder_BuildingActor_rotate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_BuildingActor_rotate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeroesBuilder_BuildingActor_rotate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_BuildingActor_rotate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeroesBuilder_BuildingActor_rotate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHeroesBuilder_BuildingActor_rotate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHeroesBuilder_BuildingActor_setRelativeRotation_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_rotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHeroesBuilder_BuildingActor_setRelativeRotation_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_BuildingActor_eventsetRelativeRotation_Parms, rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHeroesBuilder_BuildingActor_setRelativeRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHeroesBuilder_BuildingActor_setRelativeRotation_Statics::NewProp_rotation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHeroesBuilder_BuildingActor_setRelativeRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Heroes|Building|Scene" },
		{ "Comment", "/**\n\x09 * convenient to push a brand new rotation\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_BuildingActor.h" },
		{ "ToolTip", "convenient to push a brand new rotation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHeroesBuilder_BuildingActor_setRelativeRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeroesBuilder_BuildingActor, nullptr, "setRelativeRotation", nullptr, nullptr, sizeof(HeroesBuilder_BuildingActor_eventsetRelativeRotation_Parms), Z_Construct_UFunction_AHeroesBuilder_BuildingActor_setRelativeRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_BuildingActor_setRelativeRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHeroesBuilder_BuildingActor_setRelativeRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHeroesBuilder_BuildingActor_setRelativeRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHeroesBuilder_BuildingActor_setRelativeRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHeroesBuilder_BuildingActor_setRelativeRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHeroesBuilder_BuildingActor);
	UClass* Z_Construct_UClass_AHeroesBuilder_BuildingActor_NoRegister()
	{
		return AHeroesBuilder_BuildingActor::StaticClass();
	}
	struct Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_root_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_root;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshes_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sizeBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_sizeBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_directionY_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_directionY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_directionZ_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_directionZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_snapGuide_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_snapGuide;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sizeX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_sizeX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sizeY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_sizeY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sizeZ_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_sizeZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_relativeRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_relativeRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_attachedGrid_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_attachedGrid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_snapToClosestGrid_MetaData[];
#endif
		static void NewProp_snapToClosestGrid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_snapToClosestGrid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_snapDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_snapDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HeroesBuilderPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHeroesBuilder_BuildingActor_attachToGrid, "attachToGrid" }, // 449201076
		{ &Z_Construct_UFunction_AHeroesBuilder_BuildingActor_detachFromGrid, "detachFromGrid" }, // 385564006
		{ &Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getGrid, "getGrid" }, // 3536803069
		{ &Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getGridTiles, "getGridTiles" }, // 2108458655
		{ &Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getGridTilesInfo, "getGridTilesInfo" }, // 872029296
		{ &Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getRelativeRotation, "getRelativeRotation" }, // 2147524257
		{ &Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getSizeX, "getSizeX" }, // 205559044
		{ &Z_Construct_UFunction_AHeroesBuilder_BuildingActor_getSizeY, "getSizeY" }, // 1012951275
		{ &Z_Construct_UFunction_AHeroesBuilder_BuildingActor_isAttachedToGrid, "isAttachedToGrid" }, // 1108454270
		{ &Z_Construct_UFunction_AHeroesBuilder_BuildingActor_rotate, "rotate" }, // 3608472313
		{ &Z_Construct_UFunction_AHeroesBuilder_BuildingActor_setRelativeRotation, "setRelativeRotation" }, // 2911781353
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * BuildingActor are the actor who will be place in the grid \n * Also integrate an additional snapping function for the Editor\n */" },
		{ "IncludePath", "HeroesBuilder_BuildingActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_BuildingActor.h" },
		{ "ToolTip", "BuildingActor are the actor who will be place in the grid\nAlso integrate an additional snapping function for the Editor" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_root_MetaData[] = {
		{ "Category", "Heroes|Actor" },
		{ "Comment", "/**\n\x09 * Base scene component\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_BuildingActor.h" },
		{ "ToolTip", "Base scene component" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_root = { "root", nullptr, (EPropertyFlags)0x00200800000a081d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHeroesBuilder_BuildingActor, root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_root_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_meshes_MetaData[] = {
		{ "Category", "Heroes|Actor" },
		{ "Comment", "/**\n\x09 * Meshes Container\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_BuildingActor.h" },
		{ "ToolTip", "Meshes Container" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_meshes = { "meshes", nullptr, (EPropertyFlags)0x00200800000a081d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHeroesBuilder_BuildingActor, meshes), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_meshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_meshes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_sizeBox_MetaData[] = {
		{ "Category", "Heroes|Actor" },
		{ "Comment", "/**\n\x09 * Used to modify the navigation of character\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_BuildingActor.h" },
		{ "ToolTip", "Used to modify the navigation of character" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_sizeBox = { "sizeBox", nullptr, (EPropertyFlags)0x00200800000a081d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHeroesBuilder_BuildingActor, sizeBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_sizeBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_sizeBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_directionY_MetaData[] = {
		{ "Category", "Heroes|Actor" },
		{ "Comment", "/**\n\x09 * Arrow to show the front part of the building\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_BuildingActor.h" },
		{ "ToolTip", "Arrow to show the front part of the building" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_directionY = { "directionY", nullptr, (EPropertyFlags)0x00200800000a081d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHeroesBuilder_BuildingActor, directionY), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_directionY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_directionY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_directionZ_MetaData[] = {
		{ "Category", "Heroes|Actor" },
		{ "Comment", "/**\n\x09 * Arrow to show the top part of the building\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_BuildingActor.h" },
		{ "ToolTip", "Arrow to show the top part of the building" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_directionZ = { "directionZ", nullptr, (EPropertyFlags)0x00200800000a081d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHeroesBuilder_BuildingActor, directionZ), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_directionZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_directionZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_snapGuide_MetaData[] = {
		{ "Category", "Heroes|Actor" },
		{ "Comment", "/**\n\x09 * Arrow to show the top part of the building\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_BuildingActor.h" },
		{ "ToolTip", "Arrow to show the top part of the building" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_snapGuide = { "snapGuide", nullptr, (EPropertyFlags)0x00200800000a081d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHeroesBuilder_BuildingActor, snapGuide), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_snapGuide_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_snapGuide_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_sizeX_MetaData[] = {
		{ "Category", "Heroes|TileSize" },
		{ "Comment", "/**\n\x09 * Size in tile\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_BuildingActor.h" },
		{ "ToolTip", "Size in tile" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_sizeX = { "sizeX", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHeroesBuilder_BuildingActor, sizeX), METADATA_PARAMS(Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_sizeX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_sizeX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_sizeY_MetaData[] = {
		{ "Category", "Heroes|TileSize" },
		{ "Comment", "/**\n\x09 * Size in tile\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_BuildingActor.h" },
		{ "ToolTip", "Size in tile" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_sizeY = { "sizeY", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHeroesBuilder_BuildingActor, sizeY), METADATA_PARAMS(Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_sizeY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_sizeY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_sizeZ_MetaData[] = {
		{ "Category", "Heroes|TileSize" },
		{ "Comment", "/**\n\x09 * Size in tile\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_BuildingActor.h" },
		{ "ToolTip", "Size in tile" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_sizeZ = { "sizeZ", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHeroesBuilder_BuildingActor, sizeZ), METADATA_PARAMS(Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_sizeZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_sizeZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_relativeRotation_MetaData[] = {
		{ "Category", "Heroes|Position" },
		{ "Comment", "/**\n\x09 * Size in tile\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_BuildingActor.h" },
		{ "ToolTip", "Size in tile" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_relativeRotation = { "relativeRotation", nullptr, (EPropertyFlags)0x0020080000020801, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHeroesBuilder_BuildingActor, relativeRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_relativeRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_relativeRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_attachedGrid_MetaData[] = {
		{ "Category", "Heroes|Grid" },
		{ "Comment", "/**\n\x09 * Current Grid where the actor is attached\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_BuildingActor.h" },
		{ "ToolTip", "Current Grid where the actor is attached" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_attachedGrid = { "attachedGrid", nullptr, (EPropertyFlags)0x0020080000020801, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHeroesBuilder_BuildingActor, attachedGrid), Z_Construct_UClass_AHeroesBuilder_Grid_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_attachedGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_attachedGrid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_snapToClosestGrid_MetaData[] = {
		{ "Category", "Heroes|Grid" },
		{ "Comment", "/**\n\x09 * ** Editor functionality\n\x09 * Turn on to make the Building Actor snap to the closest grid after it has been moved in the world\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_BuildingActor.h" },
		{ "ToolTip", "** Editor functionality\nTurn on to make the Building Actor snap to the closest grid after it has been moved in the world" },
	};
#endif
	void Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_snapToClosestGrid_SetBit(void* Obj)
	{
		((AHeroesBuilder_BuildingActor*)Obj)->snapToClosestGrid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_snapToClosestGrid = { "snapToClosestGrid", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AHeroesBuilder_BuildingActor), &Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_snapToClosestGrid_SetBit, METADATA_PARAMS(Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_snapToClosestGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_snapToClosestGrid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_snapDistance_MetaData[] = {
		{ "Category", "Heroes|Grid" },
		{ "Comment", "/**\n\x09 * ** Editor functionality\n\x09 * Distance max to check for grid to snap\n\x09 * if a no grid is within, nothing will happen\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_BuildingActor.h" },
		{ "ToolTip", "** Editor functionality\nDistance max to check for grid to snap\nif a no grid is within, nothing will happen" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_snapDistance = { "snapDistance", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHeroesBuilder_BuildingActor, snapDistance), METADATA_PARAMS(Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_snapDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_snapDistance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_root,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_meshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_sizeBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_directionY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_directionZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_snapGuide,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_sizeX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_sizeY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_sizeZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_relativeRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_attachedGrid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_snapToClosestGrid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::NewProp_snapDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHeroesBuilder_BuildingActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::ClassParams = {
		&AHeroesBuilder_BuildingActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHeroesBuilder_BuildingActor()
	{
		if (!Z_Registration_Info_UClass_AHeroesBuilder_BuildingActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHeroesBuilder_BuildingActor.OuterSingleton, Z_Construct_UClass_AHeroesBuilder_BuildingActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHeroesBuilder_BuildingActor.OuterSingleton;
	}
	template<> HEROESBUILDERPLUGIN_API UClass* StaticClass<AHeroesBuilder_BuildingActor>()
	{
		return AHeroesBuilder_BuildingActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHeroesBuilder_BuildingActor);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_BuildingActor_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_BuildingActor_h_Statics::EnumInfo[] = {
		{ EHeroesBuilder_RotationDirection_StaticEnum, TEXT("EHeroesBuilder_RotationDirection"), &Z_Registration_Info_UEnum_EHeroesBuilder_RotationDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3941794525U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_BuildingActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHeroesBuilder_BuildingActor, AHeroesBuilder_BuildingActor::StaticClass, TEXT("AHeroesBuilder_BuildingActor"), &Z_Registration_Info_UClass_AHeroesBuilder_BuildingActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHeroesBuilder_BuildingActor), 2583386424U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_BuildingActor_h_400995792(TEXT("/Script/HeroesBuilderPlugin"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_BuildingActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_BuildingActor_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_BuildingActor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_BuildingActor_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
