// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroesBuilderPlugin_init() {}
	HEROESBUILDERPLUGIN_API UFunction* Z_Construct_UDelegateFunction_HeroesBuilderPlugin_onBuildingAdded__DelegateSignature();
	HEROESBUILDERPLUGIN_API UFunction* Z_Construct_UDelegateFunction_HeroesBuilderPlugin_onBuildingRemoved__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_HeroesBuilderPlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_HeroesBuilderPlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_HeroesBuilderPlugin.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_HeroesBuilderPlugin_onBuildingAdded__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_HeroesBuilderPlugin_onBuildingRemoved__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/HeroesBuilderPlugin",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xFD5ABD25,
				0xF911362D,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_HeroesBuilderPlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_HeroesBuilderPlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_HeroesBuilderPlugin(Z_Construct_UPackage__Script_HeroesBuilderPlugin, TEXT("/Script/HeroesBuilderPlugin"), Z_Registration_Info_UPackage__Script_HeroesBuilderPlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xFD5ABD25, 0xF911362D));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
