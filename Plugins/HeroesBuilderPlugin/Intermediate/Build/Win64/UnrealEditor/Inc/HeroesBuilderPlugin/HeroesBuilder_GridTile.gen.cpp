// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HeroesBuilderPlugin/Public/HeroesBuilder_GridTile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroesBuilder_GridTile() {}
// Cross Module References
	HEROESBUILDERPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FHeroesBuilder_GridTile();
	UPackage* Z_Construct_UPackage__Script_HeroesBuilderPlugin();
	HEROESBUILDERPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FHeroesBuilder_GridTileInfo();
	HEROESBUILDERPLUGIN_API UClass* Z_Construct_UClass_AHeroesBuilder_BuildingActor_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HeroesBuilder_GridTile;
class UScriptStruct* FHeroesBuilder_GridTile::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HeroesBuilder_GridTile.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HeroesBuilder_GridTile.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHeroesBuilder_GridTile, Z_Construct_UPackage__Script_HeroesBuilderPlugin(), TEXT("HeroesBuilder_GridTile"));
	}
	return Z_Registration_Info_UScriptStruct_HeroesBuilder_GridTile.OuterSingleton;
}
template<> HEROESBUILDERPLUGIN_API UScriptStruct* StaticStruct<FHeroesBuilder_GridTile>()
{
	return FHeroesBuilder_GridTile::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHeroesBuilder_GridTile_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tileX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_tileX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tileY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_tileY;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHeroesBuilder_GridTile_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_GridTile.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHeroesBuilder_GridTile_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHeroesBuilder_GridTile>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHeroesBuilder_GridTile_Statics::NewProp_tileX_MetaData[] = {
		{ "Category", "Heroes|GridTile" },
		{ "Comment", "/**\n\x09 * position X of the tile in its grid\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_GridTile.h" },
		{ "ToolTip", "position X of the tile in its grid" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHeroesBuilder_GridTile_Statics::NewProp_tileX = { "tileX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHeroesBuilder_GridTile, tileX), METADATA_PARAMS(Z_Construct_UScriptStruct_FHeroesBuilder_GridTile_Statics::NewProp_tileX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeroesBuilder_GridTile_Statics::NewProp_tileX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHeroesBuilder_GridTile_Statics::NewProp_tileY_MetaData[] = {
		{ "Category", "Heroes|GridTile" },
		{ "Comment", "/**\n\x09 * position Y of the tile in its grid\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_GridTile.h" },
		{ "ToolTip", "position Y of the tile in its grid" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHeroesBuilder_GridTile_Statics::NewProp_tileY = { "tileY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHeroesBuilder_GridTile, tileY), METADATA_PARAMS(Z_Construct_UScriptStruct_FHeroesBuilder_GridTile_Statics::NewProp_tileY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeroesBuilder_GridTile_Statics::NewProp_tileY_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHeroesBuilder_GridTile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeroesBuilder_GridTile_Statics::NewProp_tileX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeroesBuilder_GridTile_Statics::NewProp_tileY,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHeroesBuilder_GridTile_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HeroesBuilderPlugin,
		nullptr,
		&NewStructOps,
		"HeroesBuilder_GridTile",
		sizeof(FHeroesBuilder_GridTile),
		alignof(FHeroesBuilder_GridTile),
		Z_Construct_UScriptStruct_FHeroesBuilder_GridTile_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeroesBuilder_GridTile_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHeroesBuilder_GridTile_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeroesBuilder_GridTile_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHeroesBuilder_GridTile()
	{
		if (!Z_Registration_Info_UScriptStruct_HeroesBuilder_GridTile.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HeroesBuilder_GridTile.InnerSingleton, Z_Construct_UScriptStruct_FHeroesBuilder_GridTile_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HeroesBuilder_GridTile.InnerSingleton;
	}

static_assert(std::is_polymorphic<FHeroesBuilder_GridTileInfo>() == std::is_polymorphic<FHeroesBuilder_GridTile>(), "USTRUCT FHeroesBuilder_GridTileInfo cannot be polymorphic unless super FHeroesBuilder_GridTile is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HeroesBuilder_GridTileInfo;
class UScriptStruct* FHeroesBuilder_GridTileInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HeroesBuilder_GridTileInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HeroesBuilder_GridTileInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHeroesBuilder_GridTileInfo, Z_Construct_UPackage__Script_HeroesBuilderPlugin(), TEXT("HeroesBuilder_GridTileInfo"));
	}
	return Z_Registration_Info_UScriptStruct_HeroesBuilder_GridTileInfo.OuterSingleton;
}
template<> HEROESBUILDERPLUGIN_API UScriptStruct* StaticStruct<FHeroesBuilder_GridTileInfo>()
{
	return FHeroesBuilder_GridTileInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHeroesBuilder_GridTileInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_building_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_building;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHeroesBuilder_GridTileInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_GridTile.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHeroesBuilder_GridTileInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHeroesBuilder_GridTileInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHeroesBuilder_GridTileInfo_Statics::NewProp_building_MetaData[] = {
		{ "Category", "Heroes|Tile" },
		{ "Comment", "/**\n\x09 * building occupying this tile\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_GridTile.h" },
		{ "ToolTip", "building occupying this tile" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FHeroesBuilder_GridTileInfo_Statics::NewProp_building = { "building", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHeroesBuilder_GridTileInfo, building), Z_Construct_UClass_AHeroesBuilder_BuildingActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHeroesBuilder_GridTileInfo_Statics::NewProp_building_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeroesBuilder_GridTileInfo_Statics::NewProp_building_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHeroesBuilder_GridTileInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeroesBuilder_GridTileInfo_Statics::NewProp_building,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHeroesBuilder_GridTileInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HeroesBuilderPlugin,
		Z_Construct_UScriptStruct_FHeroesBuilder_GridTile,
		&NewStructOps,
		"HeroesBuilder_GridTileInfo",
		sizeof(FHeroesBuilder_GridTileInfo),
		alignof(FHeroesBuilder_GridTileInfo),
		Z_Construct_UScriptStruct_FHeroesBuilder_GridTileInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeroesBuilder_GridTileInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHeroesBuilder_GridTileInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeroesBuilder_GridTileInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHeroesBuilder_GridTileInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_HeroesBuilder_GridTileInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HeroesBuilder_GridTileInfo.InnerSingleton, Z_Construct_UScriptStruct_FHeroesBuilder_GridTileInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HeroesBuilder_GridTileInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_GridTile_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_GridTile_h_Statics::ScriptStructInfo[] = {
		{ FHeroesBuilder_GridTile::StaticStruct, Z_Construct_UScriptStruct_FHeroesBuilder_GridTile_Statics::NewStructOps, TEXT("HeroesBuilder_GridTile"), &Z_Registration_Info_UScriptStruct_HeroesBuilder_GridTile, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHeroesBuilder_GridTile), 4097249302U) },
		{ FHeroesBuilder_GridTileInfo::StaticStruct, Z_Construct_UScriptStruct_FHeroesBuilder_GridTileInfo_Statics::NewStructOps, TEXT("HeroesBuilder_GridTileInfo"), &Z_Registration_Info_UScriptStruct_HeroesBuilder_GridTileInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHeroesBuilder_GridTileInfo), 2035315418U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_GridTile_h_1054105736(TEXT("/Script/HeroesBuilderPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_GridTile_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_GridTile_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
