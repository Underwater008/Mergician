// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HeroesBuilderPlugin/Public/HeroesBuilder_FunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroesBuilder_FunctionLibrary() {}
// Cross Module References
	HEROESBUILDERPLUGIN_API UClass* Z_Construct_UClass_UHeroesBuilder_FunctionLibrary_NoRegister();
	HEROESBUILDERPLUGIN_API UClass* Z_Construct_UClass_UHeroesBuilder_FunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_HeroesBuilderPlugin();
	HEROESBUILDERPLUGIN_API UClass* Z_Construct_UClass_AHeroesBuilder_Grid_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	HEROESBUILDERPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FHeroesBuilder_GridTile();
	HEROESBUILDERPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FHeroesBuilder_GridTileInfo();
// End Cross Module References
	DEFINE_FUNCTION(UHeroesBuilder_FunctionLibrary::exectileInfoToString)
	{
		P_GET_STRUCT_REF(FHeroesBuilder_GridTileInfo,Z_Param_Out_tile);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UHeroesBuilder_FunctionLibrary::tileInfoToString(Z_Param_Out_tile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeroesBuilder_FunctionLibrary::exectilesInfoUnion)
	{
		P_GET_TARRAY_REF(FHeroesBuilder_GridTileInfo,Z_Param_Out_first);
		P_GET_TARRAY_REF(FHeroesBuilder_GridTileInfo,Z_Param_Out_second);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FHeroesBuilder_GridTileInfo>*)Z_Param__Result=UHeroesBuilder_FunctionLibrary::tilesInfoUnion(Z_Param_Out_first,Z_Param_Out_second);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeroesBuilder_FunctionLibrary::exectilesInfoIntersect)
	{
		P_GET_TARRAY_REF(FHeroesBuilder_GridTileInfo,Z_Param_Out_first);
		P_GET_TARRAY_REF(FHeroesBuilder_GridTileInfo,Z_Param_Out_second);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FHeroesBuilder_GridTileInfo>*)Z_Param__Result=UHeroesBuilder_FunctionLibrary::tilesInfoIntersect(Z_Param_Out_first,Z_Param_Out_second);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeroesBuilder_FunctionLibrary::exectileToString)
	{
		P_GET_STRUCT_REF(FHeroesBuilder_GridTile,Z_Param_Out_tile);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UHeroesBuilder_FunctionLibrary::tileToString(Z_Param_Out_tile);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeroesBuilder_FunctionLibrary::exectileIn)
	{
		P_GET_STRUCT_REF(FHeroesBuilder_GridTile,Z_Param_Out_tile);
		P_GET_PROPERTY(FIntProperty,Z_Param_fromTileX);
		P_GET_PROPERTY(FIntProperty,Z_Param_fromTileY);
		P_GET_PROPERTY(FIntProperty,Z_Param_toTileX);
		P_GET_PROPERTY(FIntProperty,Z_Param_toTileY);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UHeroesBuilder_FunctionLibrary::tileIn(Z_Param_Out_tile,Z_Param_fromTileX,Z_Param_fromTileY,Z_Param_toTileX,Z_Param_toTileY);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeroesBuilder_FunctionLibrary::exectilesUnion)
	{
		P_GET_TARRAY_REF(FHeroesBuilder_GridTile,Z_Param_Out_first);
		P_GET_TARRAY_REF(FHeroesBuilder_GridTile,Z_Param_Out_second);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FHeroesBuilder_GridTile>*)Z_Param__Result=UHeroesBuilder_FunctionLibrary::tilesUnion(Z_Param_Out_first,Z_Param_Out_second);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeroesBuilder_FunctionLibrary::exectilesIntersect)
	{
		P_GET_TARRAY_REF(FHeroesBuilder_GridTile,Z_Param_Out_first);
		P_GET_TARRAY_REF(FHeroesBuilder_GridTile,Z_Param_Out_second);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FHeroesBuilder_GridTile>*)Z_Param__Result=UHeroesBuilder_FunctionLibrary::tilesIntersect(Z_Param_Out_first,Z_Param_Out_second);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHeroesBuilder_FunctionLibrary::execmakeTiles)
	{
		P_GET_OBJECT(AHeroesBuilder_Grid,Z_Param_grid);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_location);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_rotation);
		P_GET_PROPERTY(FIntProperty,Z_Param_sizeX);
		P_GET_PROPERTY(FIntProperty,Z_Param_sizeY);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FHeroesBuilder_GridTile>*)Z_Param__Result=UHeroesBuilder_FunctionLibrary::makeTiles(Z_Param_grid,Z_Param_Out_location,Z_Param_Out_rotation,Z_Param_sizeX,Z_Param_sizeY);
		P_NATIVE_END;
	}
	void UHeroesBuilder_FunctionLibrary::StaticRegisterNativesUHeroesBuilder_FunctionLibrary()
	{
		UClass* Class = UHeroesBuilder_FunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "makeTiles", &UHeroesBuilder_FunctionLibrary::execmakeTiles },
			{ "tileIn", &UHeroesBuilder_FunctionLibrary::exectileIn },
			{ "tileInfoToString", &UHeroesBuilder_FunctionLibrary::exectileInfoToString },
			{ "tilesInfoIntersect", &UHeroesBuilder_FunctionLibrary::exectilesInfoIntersect },
			{ "tilesInfoUnion", &UHeroesBuilder_FunctionLibrary::exectilesInfoUnion },
			{ "tilesIntersect", &UHeroesBuilder_FunctionLibrary::exectilesIntersect },
			{ "tilesUnion", &UHeroesBuilder_FunctionLibrary::exectilesUnion },
			{ "tileToString", &UHeroesBuilder_FunctionLibrary::exectileToString },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_makeTiles_Statics
	{
		struct HeroesBuilder_FunctionLibrary_eventmakeTiles_Parms
		{
			const AHeroesBuilder_Grid* grid;
			FVector location;
			FRotator rotation;
			int32 sizeX;
			int32 sizeY;
			TArray<FHeroesBuilder_GridTile> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_grid_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_grid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rotation;
		static const UECodeGen_Private::FIntPropertyParams NewProp_sizeX;
		static const UECodeGen_Private::FIntPropertyParams NewProp_sizeY;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_makeTiles_Statics::NewProp_grid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_makeTiles_Statics::NewProp_grid = { "grid", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_FunctionLibrary_eventmakeTiles_Parms, grid), Z_Construct_UClass_AHeroesBuilder_Grid_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_makeTiles_Statics::NewProp_grid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_makeTiles_Statics::NewProp_grid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_makeTiles_Statics::NewProp_location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_makeTiles_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_FunctionLibrary_eventmakeTiles_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_makeTiles_Statics::NewProp_location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_makeTiles_Statics::NewProp_location_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_makeTiles_Statics::NewProp_rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_makeTiles_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_FunctionLibrary_eventmakeTiles_Parms, rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_makeTiles_Statics::NewProp_rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_makeTiles_Statics::NewProp_rotation_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_makeTiles_Statics::NewProp_sizeX = { "sizeX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_FunctionLibrary_eventmakeTiles_Parms, sizeX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_makeTiles_Statics::NewProp_sizeY = { "sizeY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_FunctionLibrary_eventmakeTiles_Parms, sizeY), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_makeTiles_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHeroesBuilder_GridTile, METADATA_PARAMS(nullptr, 0) }; // 4097249302
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_makeTiles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_FunctionLibrary_eventmakeTiles_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 4097249302
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_makeTiles_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_makeTiles_Statics::NewProp_grid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_makeTiles_Statics::NewProp_location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_makeTiles_Statics::NewProp_rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_makeTiles_Statics::NewProp_sizeX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_makeTiles_Statics::NewProp_sizeY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_makeTiles_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_makeTiles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_makeTiles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Heroes|Library|Tile" },
		{ "Comment", "/**\n\x09 * Generate a list of tiles for this grid\n\x09 * location and rotation from the center point\n\x09 * SizeX & SizeY to represent the square that will be translated in equivalent tiles\n\x09 * ** Note that tiles generated can be virtually \"outside of the grid\" ig, negative value or above the size of the grid\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_FunctionLibrary.h" },
		{ "ToolTip", "Generate a list of tiles for this grid\nlocation and rotation from the center point\nSizeX & SizeY to represent the square that will be translated in equivalent tiles\n** Note that tiles generated can be virtually \"outside of the grid\" ig, negative value or above the size of the grid" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_makeTiles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeroesBuilder_FunctionLibrary, nullptr, "makeTiles", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_makeTiles_Statics::HeroesBuilder_FunctionLibrary_eventmakeTiles_Parms), Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_makeTiles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_makeTiles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_makeTiles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_makeTiles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_makeTiles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_makeTiles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileIn_Statics
	{
		struct HeroesBuilder_FunctionLibrary_eventtileIn_Parms
		{
			FHeroesBuilder_GridTile tile;
			int32 fromTileX;
			int32 fromTileY;
			int32 toTileX;
			int32 toTileY;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tile_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_tile;
		static const UECodeGen_Private::FIntPropertyParams NewProp_fromTileX;
		static const UECodeGen_Private::FIntPropertyParams NewProp_fromTileY;
		static const UECodeGen_Private::FIntPropertyParams NewProp_toTileX;
		static const UECodeGen_Private::FIntPropertyParams NewProp_toTileY;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileIn_Statics::NewProp_tile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileIn_Statics::NewProp_tile = { "tile", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_FunctionLibrary_eventtileIn_Parms, tile), Z_Construct_UScriptStruct_FHeroesBuilder_GridTile, METADATA_PARAMS(Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileIn_Statics::NewProp_tile_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileIn_Statics::NewProp_tile_MetaData)) }; // 4097249302
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileIn_Statics::NewProp_fromTileX = { "fromTileX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_FunctionLibrary_eventtileIn_Parms, fromTileX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileIn_Statics::NewProp_fromTileY = { "fromTileY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_FunctionLibrary_eventtileIn_Parms, fromTileY), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileIn_Statics::NewProp_toTileX = { "toTileX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_FunctionLibrary_eventtileIn_Parms, toTileX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileIn_Statics::NewProp_toTileY = { "toTileY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_FunctionLibrary_eventtileIn_Parms, toTileY), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileIn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HeroesBuilder_FunctionLibrary_eventtileIn_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileIn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HeroesBuilder_FunctionLibrary_eventtileIn_Parms), &Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileIn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileIn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileIn_Statics::NewProp_tile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileIn_Statics::NewProp_fromTileX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileIn_Statics::NewProp_fromTileY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileIn_Statics::NewProp_toTileX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileIn_Statics::NewProp_toTileY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileIn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileIn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Heroes|Grid|Tile" },
		{ "Comment", "/**\n\x09 * check if tiles are contained into the squared [fromTileX;fromTileY][toTileX;toTileY]\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_FunctionLibrary.h" },
		{ "ToolTip", "check if tiles are contained into the squared [fromTileX;fromTileY][toTileX;toTileY]" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeroesBuilder_FunctionLibrary, nullptr, "tileIn", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileIn_Statics::HeroesBuilder_FunctionLibrary_eventtileIn_Parms), Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileIn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileIn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileInfoToString_Statics
	{
		struct HeroesBuilder_FunctionLibrary_eventtileInfoToString_Parms
		{
			FHeroesBuilder_GridTileInfo tile;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tile_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_tile;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileInfoToString_Statics::NewProp_tile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileInfoToString_Statics::NewProp_tile = { "tile", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_FunctionLibrary_eventtileInfoToString_Parms, tile), Z_Construct_UScriptStruct_FHeroesBuilder_GridTileInfo, METADATA_PARAMS(Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileInfoToString_Statics::NewProp_tile_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileInfoToString_Statics::NewProp_tile_MetaData)) }; // 2035315418
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileInfoToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_FunctionLibrary_eventtileInfoToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileInfoToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileInfoToString_Statics::NewProp_tile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileInfoToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileInfoToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Heroes|Library|TileInfo" },
		{ "Comment", "/**\n\x09 * Returns the tile info as string, for debug purpose mainly\n\x09 * specifically for tileInfo\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_FunctionLibrary.h" },
		{ "ToolTip", "Returns the tile info as string, for debug purpose mainly\nspecifically for tileInfo" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileInfoToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeroesBuilder_FunctionLibrary, nullptr, "tileInfoToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileInfoToString_Statics::HeroesBuilder_FunctionLibrary_eventtileInfoToString_Parms), Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileInfoToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileInfoToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileInfoToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileInfoToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileInfoToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileInfoToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesInfoIntersect_Statics
	{
		struct HeroesBuilder_FunctionLibrary_eventtilesInfoIntersect_Parms
		{
			TArray<FHeroesBuilder_GridTileInfo> first;
			TArray<FHeroesBuilder_GridTileInfo> second;
			TArray<FHeroesBuilder_GridTileInfo> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_first_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_first_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_first;
		static const UECodeGen_Private::FStructPropertyParams NewProp_second_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_second_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_second;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesInfoIntersect_Statics::NewProp_first_Inner = { "first", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHeroesBuilder_GridTileInfo, METADATA_PARAMS(nullptr, 0) }; // 2035315418
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesInfoIntersect_Statics::NewProp_first_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesInfoIntersect_Statics::NewProp_first = { "first", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_FunctionLibrary_eventtilesInfoIntersect_Parms, first), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesInfoIntersect_Statics::NewProp_first_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesInfoIntersect_Statics::NewProp_first_MetaData)) }; // 2035315418
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesInfoIntersect_Statics::NewProp_second_Inner = { "second", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHeroesBuilder_GridTileInfo, METADATA_PARAMS(nullptr, 0) }; // 2035315418
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesInfoIntersect_Statics::NewProp_second_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesInfoIntersect_Statics::NewProp_second = { "second", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_FunctionLibrary_eventtilesInfoIntersect_Parms, second), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesInfoIntersect_Statics::NewProp_second_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesInfoIntersect_Statics::NewProp_second_MetaData)) }; // 2035315418
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesInfoIntersect_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHeroesBuilder_GridTileInfo, METADATA_PARAMS(nullptr, 0) }; // 2035315418
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesInfoIntersect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_FunctionLibrary_eventtilesInfoIntersect_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2035315418
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesInfoIntersect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesInfoIntersect_Statics::NewProp_first_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesInfoIntersect_Statics::NewProp_first,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesInfoIntersect_Statics::NewProp_second_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesInfoIntersect_Statics::NewProp_second,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesInfoIntersect_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesInfoIntersect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesInfoIntersect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Heroes|Library|TileInfo" },
		{ "Comment", "/**\n\x09 * Returns the intersection for the tiles send, ie exists in both arrays\n\x09 * specifically for tileInfo\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_FunctionLibrary.h" },
		{ "ToolTip", "Returns the intersection for the tiles send, ie exists in both arrays\nspecifically for tileInfo" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesInfoIntersect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeroesBuilder_FunctionLibrary, nullptr, "tilesInfoIntersect", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesInfoIntersect_Statics::HeroesBuilder_FunctionLibrary_eventtilesInfoIntersect_Parms), Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesInfoIntersect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesInfoIntersect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesInfoIntersect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesInfoIntersect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesInfoIntersect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesInfoIntersect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesInfoUnion_Statics
	{
		struct HeroesBuilder_FunctionLibrary_eventtilesInfoUnion_Parms
		{
			TArray<FHeroesBuilder_GridTileInfo> first;
			TArray<FHeroesBuilder_GridTileInfo> second;
			TArray<FHeroesBuilder_GridTileInfo> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_first_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_first_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_first;
		static const UECodeGen_Private::FStructPropertyParams NewProp_second_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_second_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_second;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesInfoUnion_Statics::NewProp_first_Inner = { "first", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHeroesBuilder_GridTileInfo, METADATA_PARAMS(nullptr, 0) }; // 2035315418
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesInfoUnion_Statics::NewProp_first_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesInfoUnion_Statics::NewProp_first = { "first", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_FunctionLibrary_eventtilesInfoUnion_Parms, first), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesInfoUnion_Statics::NewProp_first_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesInfoUnion_Statics::NewProp_first_MetaData)) }; // 2035315418
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesInfoUnion_Statics::NewProp_second_Inner = { "second", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHeroesBuilder_GridTileInfo, METADATA_PARAMS(nullptr, 0) }; // 2035315418
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesInfoUnion_Statics::NewProp_second_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesInfoUnion_Statics::NewProp_second = { "second", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_FunctionLibrary_eventtilesInfoUnion_Parms, second), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesInfoUnion_Statics::NewProp_second_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesInfoUnion_Statics::NewProp_second_MetaData)) }; // 2035315418
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesInfoUnion_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHeroesBuilder_GridTileInfo, METADATA_PARAMS(nullptr, 0) }; // 2035315418
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesInfoUnion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_FunctionLibrary_eventtilesInfoUnion_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2035315418
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesInfoUnion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesInfoUnion_Statics::NewProp_first_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesInfoUnion_Statics::NewProp_first,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesInfoUnion_Statics::NewProp_second_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesInfoUnion_Statics::NewProp_second,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesInfoUnion_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesInfoUnion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesInfoUnion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Heroes|Library|TileInfo" },
		{ "Comment", "/**\n\x09 * Returns the intersection for the tiles send, ie exists in both arrays\n\x09 * specifically for tileInfo\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_FunctionLibrary.h" },
		{ "ToolTip", "Returns the intersection for the tiles send, ie exists in both arrays\nspecifically for tileInfo" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesInfoUnion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeroesBuilder_FunctionLibrary, nullptr, "tilesInfoUnion", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesInfoUnion_Statics::HeroesBuilder_FunctionLibrary_eventtilesInfoUnion_Parms), Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesInfoUnion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesInfoUnion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesInfoUnion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesInfoUnion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesInfoUnion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesInfoUnion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesIntersect_Statics
	{
		struct HeroesBuilder_FunctionLibrary_eventtilesIntersect_Parms
		{
			TArray<FHeroesBuilder_GridTile> first;
			TArray<FHeroesBuilder_GridTile> second;
			TArray<FHeroesBuilder_GridTile> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_first_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_first_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_first;
		static const UECodeGen_Private::FStructPropertyParams NewProp_second_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_second_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_second;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesIntersect_Statics::NewProp_first_Inner = { "first", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHeroesBuilder_GridTile, METADATA_PARAMS(nullptr, 0) }; // 4097249302
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesIntersect_Statics::NewProp_first_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesIntersect_Statics::NewProp_first = { "first", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_FunctionLibrary_eventtilesIntersect_Parms, first), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesIntersect_Statics::NewProp_first_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesIntersect_Statics::NewProp_first_MetaData)) }; // 4097249302
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesIntersect_Statics::NewProp_second_Inner = { "second", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHeroesBuilder_GridTile, METADATA_PARAMS(nullptr, 0) }; // 4097249302
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesIntersect_Statics::NewProp_second_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesIntersect_Statics::NewProp_second = { "second", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_FunctionLibrary_eventtilesIntersect_Parms, second), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesIntersect_Statics::NewProp_second_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesIntersect_Statics::NewProp_second_MetaData)) }; // 4097249302
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesIntersect_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHeroesBuilder_GridTile, METADATA_PARAMS(nullptr, 0) }; // 4097249302
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesIntersect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_FunctionLibrary_eventtilesIntersect_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 4097249302
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesIntersect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesIntersect_Statics::NewProp_first_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesIntersect_Statics::NewProp_first,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesIntersect_Statics::NewProp_second_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesIntersect_Statics::NewProp_second,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesIntersect_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesIntersect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesIntersect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Heroes|Library|Tile" },
		{ "Comment", "/**\n\x09 * Returns the intersection for the tiles send, ie exists in both arrays\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_FunctionLibrary.h" },
		{ "ToolTip", "Returns the intersection for the tiles send, ie exists in both arrays" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesIntersect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeroesBuilder_FunctionLibrary, nullptr, "tilesIntersect", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesIntersect_Statics::HeroesBuilder_FunctionLibrary_eventtilesIntersect_Parms), Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesIntersect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesIntersect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesIntersect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesIntersect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesIntersect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesIntersect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesUnion_Statics
	{
		struct HeroesBuilder_FunctionLibrary_eventtilesUnion_Parms
		{
			TArray<FHeroesBuilder_GridTile> first;
			TArray<FHeroesBuilder_GridTile> second;
			TArray<FHeroesBuilder_GridTile> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_first_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_first_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_first;
		static const UECodeGen_Private::FStructPropertyParams NewProp_second_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_second_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_second;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesUnion_Statics::NewProp_first_Inner = { "first", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHeroesBuilder_GridTile, METADATA_PARAMS(nullptr, 0) }; // 4097249302
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesUnion_Statics::NewProp_first_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesUnion_Statics::NewProp_first = { "first", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_FunctionLibrary_eventtilesUnion_Parms, first), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesUnion_Statics::NewProp_first_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesUnion_Statics::NewProp_first_MetaData)) }; // 4097249302
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesUnion_Statics::NewProp_second_Inner = { "second", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHeroesBuilder_GridTile, METADATA_PARAMS(nullptr, 0) }; // 4097249302
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesUnion_Statics::NewProp_second_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesUnion_Statics::NewProp_second = { "second", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_FunctionLibrary_eventtilesUnion_Parms, second), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesUnion_Statics::NewProp_second_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesUnion_Statics::NewProp_second_MetaData)) }; // 4097249302
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesUnion_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FHeroesBuilder_GridTile, METADATA_PARAMS(nullptr, 0) }; // 4097249302
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesUnion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_FunctionLibrary_eventtilesUnion_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 4097249302
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesUnion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesUnion_Statics::NewProp_first_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesUnion_Statics::NewProp_first,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesUnion_Statics::NewProp_second_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesUnion_Statics::NewProp_second,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesUnion_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesUnion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesUnion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Heroes|Library|Tile" },
		{ "Comment", "/**\n\x09 * Returns the intersection for the tiles send, ie exists in both arrays\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_FunctionLibrary.h" },
		{ "ToolTip", "Returns the intersection for the tiles send, ie exists in both arrays" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesUnion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeroesBuilder_FunctionLibrary, nullptr, "tilesUnion", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesUnion_Statics::HeroesBuilder_FunctionLibrary_eventtilesUnion_Parms), Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesUnion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesUnion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesUnion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesUnion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesUnion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesUnion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileToString_Statics
	{
		struct HeroesBuilder_FunctionLibrary_eventtileToString_Parms
		{
			FHeroesBuilder_GridTile tile;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tile_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_tile;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileToString_Statics::NewProp_tile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileToString_Statics::NewProp_tile = { "tile", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_FunctionLibrary_eventtileToString_Parms, tile), Z_Construct_UScriptStruct_FHeroesBuilder_GridTile, METADATA_PARAMS(Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileToString_Statics::NewProp_tile_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileToString_Statics::NewProp_tile_MetaData)) }; // 4097249302
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_FunctionLibrary_eventtileToString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileToString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileToString_Statics::NewProp_tile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileToString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileToString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Heroes|Library|Tile" },
		{ "Comment", "/**\n\x09 * Returns the tile as string, for debug purpose mainly\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_FunctionLibrary.h" },
		{ "ToolTip", "Returns the tile as string, for debug purpose mainly" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeroesBuilder_FunctionLibrary, nullptr, "tileToString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileToString_Statics::HeroesBuilder_FunctionLibrary_eventtileToString_Parms), Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileToString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileToString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileToString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileToString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileToString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHeroesBuilder_FunctionLibrary);
	UClass* Z_Construct_UClass_UHeroesBuilder_FunctionLibrary_NoRegister()
	{
		return UHeroesBuilder_FunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UHeroesBuilder_FunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHeroesBuilder_FunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_HeroesBuilderPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHeroesBuilder_FunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_makeTiles, "makeTiles" }, // 4257842517
		{ &Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileIn, "tileIn" }, // 2698008830
		{ &Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileInfoToString, "tileInfoToString" }, // 2206707371
		{ &Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesInfoIntersect, "tilesInfoIntersect" }, // 2454480441
		{ &Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesInfoUnion, "tilesInfoUnion" }, // 1100762761
		{ &Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesIntersect, "tilesIntersect" }, // 2698652712
		{ &Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tilesUnion, "tilesUnion" }, // 3254729870
		{ &Z_Construct_UFunction_UHeroesBuilder_FunctionLibrary_tileToString, "tileToString" }, // 4195222074
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroesBuilder_FunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Bases functions for faster implementation\n */" },
		{ "IncludePath", "HeroesBuilder_FunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_FunctionLibrary.h" },
		{ "ToolTip", "Bases functions for faster implementation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHeroesBuilder_FunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHeroesBuilder_FunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHeroesBuilder_FunctionLibrary_Statics::ClassParams = {
		&UHeroesBuilder_FunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHeroesBuilder_FunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroesBuilder_FunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHeroesBuilder_FunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UHeroesBuilder_FunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHeroesBuilder_FunctionLibrary.OuterSingleton, Z_Construct_UClass_UHeroesBuilder_FunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHeroesBuilder_FunctionLibrary.OuterSingleton;
	}
	template<> HEROESBUILDERPLUGIN_API UClass* StaticClass<UHeroesBuilder_FunctionLibrary>()
	{
		return UHeroesBuilder_FunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHeroesBuilder_FunctionLibrary);
	struct Z_CompiledInDeferFile_FID_TBD_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_FunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TBD_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_FunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHeroesBuilder_FunctionLibrary, UHeroesBuilder_FunctionLibrary::StaticClass, TEXT("UHeroesBuilder_FunctionLibrary"), &Z_Registration_Info_UClass_UHeroesBuilder_FunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHeroesBuilder_FunctionLibrary), 3531994810U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TBD_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_FunctionLibrary_h_497259901(TEXT("/Script/HeroesBuilderPlugin"),
		Z_CompiledInDeferFile_FID_TBD_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_FunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TBD_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_FunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
