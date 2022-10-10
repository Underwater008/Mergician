// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HeroesBuilderPlugin/Public/HeroesBuilder_IGridDelegate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeroesBuilder_IGridDelegate() {}
// Cross Module References
	HEROESBUILDERPLUGIN_API UEnum* Z_Construct_UEnum_HeroesBuilderPlugin_EHeroesBuilder_GridError();
	UPackage* Z_Construct_UPackage__Script_HeroesBuilderPlugin();
	HEROESBUILDERPLUGIN_API UClass* Z_Construct_UClass_UHeroesBuilder_IGridDelegate_NoRegister();
	HEROESBUILDERPLUGIN_API UClass* Z_Construct_UClass_UHeroesBuilder_IGridDelegate();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	HEROESBUILDERPLUGIN_API UClass* Z_Construct_UClass_AHeroesBuilder_Grid_NoRegister();
	HEROESBUILDERPLUGIN_API UClass* Z_Construct_UClass_AHeroesBuilder_BuildingActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHeroesBuilder_GridError;
	static UEnum* EHeroesBuilder_GridError_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHeroesBuilder_GridError.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHeroesBuilder_GridError.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HeroesBuilderPlugin_EHeroesBuilder_GridError, Z_Construct_UPackage__Script_HeroesBuilderPlugin(), TEXT("EHeroesBuilder_GridError"));
		}
		return Z_Registration_Info_UEnum_EHeroesBuilder_GridError.OuterSingleton;
	}
	template<> HEROESBUILDERPLUGIN_API UEnum* StaticEnum<EHeroesBuilder_GridError>()
	{
		return EHeroesBuilder_GridError_StaticEnum();
	}
	struct Z_Construct_UEnum_HeroesBuilderPlugin_EHeroesBuilder_GridError_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HeroesBuilderPlugin_EHeroesBuilder_GridError_Statics::Enumerators[] = {
		{ "EHeroesBuilder_GridError::NONE", (int64)EHeroesBuilder_GridError::NONE },
		{ "EHeroesBuilder_GridError::UNKNOW", (int64)EHeroesBuilder_GridError::UNKNOW },
		{ "EHeroesBuilder_GridError::ACTOR", (int64)EHeroesBuilder_GridError::ACTOR },
		{ "EHeroesBuilder_GridError::COLLISION", (int64)EHeroesBuilder_GridError::COLLISION },
		{ "EHeroesBuilder_GridError::OUTSIDE", (int64)EHeroesBuilder_GridError::OUTSIDE },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HeroesBuilderPlugin_EHeroesBuilder_GridError_Statics::Enum_MetaDataParams[] = {
		{ "ACTOR.Comment", "/**\n * \n */" },
		{ "ACTOR.DisplayName", "Incorrect Actor" },
		{ "ACTOR.Name", "EHeroesBuilder_GridError::ACTOR" },
		{ "BlueprintType", "true" },
		{ "COLLISION.Comment", "/**\n * \n */" },
		{ "COLLISION.DisplayName", "Collision Detected" },
		{ "COLLISION.Name", "EHeroesBuilder_GridError::COLLISION" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_IGridDelegate.h" },
		{ "NONE.Comment", "/**\n * \n */" },
		{ "NONE.Hidden", "" },
		{ "NONE.Name", "EHeroesBuilder_GridError::NONE" },
		{ "OUTSIDE.Comment", "/**\n * \n */" },
		{ "OUTSIDE.DisplayName", "Outside of the grid" },
		{ "OUTSIDE.Name", "EHeroesBuilder_GridError::OUTSIDE" },
		{ "UNKNOW.Comment", "/**\n * \n */" },
		{ "UNKNOW.DisplayName", "Unknow Reason" },
		{ "UNKNOW.Name", "EHeroesBuilder_GridError::UNKNOW" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HeroesBuilderPlugin_EHeroesBuilder_GridError_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HeroesBuilderPlugin,
		nullptr,
		"EHeroesBuilder_GridError",
		"EHeroesBuilder_GridError",
		Z_Construct_UEnum_HeroesBuilderPlugin_EHeroesBuilder_GridError_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HeroesBuilderPlugin_EHeroesBuilder_GridError_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HeroesBuilderPlugin_EHeroesBuilder_GridError_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HeroesBuilderPlugin_EHeroesBuilder_GridError_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HeroesBuilderPlugin_EHeroesBuilder_GridError()
	{
		if (!Z_Registration_Info_UEnum_EHeroesBuilder_GridError.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHeroesBuilder_GridError.InnerSingleton, Z_Construct_UEnum_HeroesBuilderPlugin_EHeroesBuilder_GridError_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHeroesBuilder_GridError.InnerSingleton;
	}
	bool IHeroesBuilder_IGridDelegate::onActorError(AHeroesBuilder_Grid* grid, const AHeroesBuilder_BuildingActor* buildingActor, EHeroesBuilder_GridError error)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_onActorError instead.");
		HeroesBuilder_IGridDelegate_eventonActorError_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IHeroesBuilder_IGridDelegate::onActorValidated(AHeroesBuilder_Grid* grid, const AHeroesBuilder_BuildingActor* buildingActor, bool duplicate)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_onActorValidated instead.");
		HeroesBuilder_IGridDelegate_eventonActorValidated_Parms Parms;
		return Parms.ReturnValue;
	}
	bool IHeroesBuilder_IGridDelegate::onGridMouseOver(AHeroesBuilder_Grid* grid, FVector const& gridLocation, FRotator const& gridRotation)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_onGridMouseOver instead.");
		HeroesBuilder_IGridDelegate_eventonGridMouseOver_Parms Parms;
		return Parms.ReturnValue;
	}
	void UHeroesBuilder_IGridDelegate::StaticRegisterNativesUHeroesBuilder_IGridDelegate()
	{
	}
	struct Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onActorError_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_grid;
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onActorError_Statics::NewProp_grid = { "grid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_IGridDelegate_eventonActorError_Parms, grid), Z_Construct_UClass_AHeroesBuilder_Grid_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onActorError_Statics::NewProp_buildingActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onActorError_Statics::NewProp_buildingActor = { "buildingActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_IGridDelegate_eventonActorError_Parms, buildingActor), Z_Construct_UClass_AHeroesBuilder_BuildingActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onActorError_Statics::NewProp_buildingActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onActorError_Statics::NewProp_buildingActor_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onActorError_Statics::NewProp_error_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onActorError_Statics::NewProp_error = { "error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_IGridDelegate_eventonActorError_Parms, error), Z_Construct_UEnum_HeroesBuilderPlugin_EHeroesBuilder_GridError, METADATA_PARAMS(nullptr, 0) }; // 1006375020
	void Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onActorError_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HeroesBuilder_IGridDelegate_eventonActorError_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onActorError_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HeroesBuilder_IGridDelegate_eventonActorError_Parms), &Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onActorError_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onActorError_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onActorError_Statics::NewProp_grid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onActorError_Statics::NewProp_buildingActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onActorError_Statics::NewProp_error_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onActorError_Statics::NewProp_error,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onActorError_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onActorError_Statics::Function_MetaDataParams[] = {
		{ "Category", "Heroes|Grid|Delegate" },
		{ "Comment", "/**\n\x09 * Called is any error happens during Actor validation\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_IGridDelegate.h" },
		{ "ToolTip", "Called is any error happens during Actor validation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onActorError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeroesBuilder_IGridDelegate, nullptr, "onActorError", nullptr, nullptr, sizeof(HeroesBuilder_IGridDelegate_eventonActorError_Parms), Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onActorError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onActorError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onActorError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onActorError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onActorError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onActorError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onActorValidated_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_grid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_buildingActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_buildingActor;
		static void NewProp_duplicate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_duplicate;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onActorValidated_Statics::NewProp_grid = { "grid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_IGridDelegate_eventonActorValidated_Parms, grid), Z_Construct_UClass_AHeroesBuilder_Grid_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onActorValidated_Statics::NewProp_buildingActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onActorValidated_Statics::NewProp_buildingActor = { "buildingActor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_IGridDelegate_eventonActorValidated_Parms, buildingActor), Z_Construct_UClass_AHeroesBuilder_BuildingActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onActorValidated_Statics::NewProp_buildingActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onActorValidated_Statics::NewProp_buildingActor_MetaData)) };
	void Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onActorValidated_Statics::NewProp_duplicate_SetBit(void* Obj)
	{
		((HeroesBuilder_IGridDelegate_eventonActorValidated_Parms*)Obj)->duplicate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onActorValidated_Statics::NewProp_duplicate = { "duplicate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HeroesBuilder_IGridDelegate_eventonActorValidated_Parms), &Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onActorValidated_Statics::NewProp_duplicate_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onActorValidated_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HeroesBuilder_IGridDelegate_eventonActorValidated_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onActorValidated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HeroesBuilder_IGridDelegate_eventonActorValidated_Parms), &Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onActorValidated_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onActorValidated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onActorValidated_Statics::NewProp_grid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onActorValidated_Statics::NewProp_buildingActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onActorValidated_Statics::NewProp_duplicate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onActorValidated_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onActorValidated_Statics::Function_MetaDataParams[] = {
		{ "Category", "Heroes|Grid|Delegate" },
		{ "Comment", "/**\n\x09 * Called once the building has been validated\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_IGridDelegate.h" },
		{ "ToolTip", "Called once the building has been validated" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onActorValidated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeroesBuilder_IGridDelegate, nullptr, "onActorValidated", nullptr, nullptr, sizeof(HeroesBuilder_IGridDelegate_eventonActorValidated_Parms), Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onActorValidated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onActorValidated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onActorValidated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onActorValidated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onActorValidated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onActorValidated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onGridMouseOver_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_grid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gridLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_gridLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gridRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_gridRotation;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onGridMouseOver_Statics::NewProp_grid = { "grid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_IGridDelegate_eventonGridMouseOver_Parms, grid), Z_Construct_UClass_AHeroesBuilder_Grid_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onGridMouseOver_Statics::NewProp_gridLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onGridMouseOver_Statics::NewProp_gridLocation = { "gridLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_IGridDelegate_eventonGridMouseOver_Parms, gridLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onGridMouseOver_Statics::NewProp_gridLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onGridMouseOver_Statics::NewProp_gridLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onGridMouseOver_Statics::NewProp_gridRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onGridMouseOver_Statics::NewProp_gridRotation = { "gridRotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HeroesBuilder_IGridDelegate_eventonGridMouseOver_Parms, gridRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onGridMouseOver_Statics::NewProp_gridRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onGridMouseOver_Statics::NewProp_gridRotation_MetaData)) };
	void Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onGridMouseOver_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((HeroesBuilder_IGridDelegate_eventonGridMouseOver_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onGridMouseOver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(HeroesBuilder_IGridDelegate_eventonGridMouseOver_Parms), &Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onGridMouseOver_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onGridMouseOver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onGridMouseOver_Statics::NewProp_grid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onGridMouseOver_Statics::NewProp_gridLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onGridMouseOver_Statics::NewProp_gridRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onGridMouseOver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onGridMouseOver_Statics::Function_MetaDataParams[] = {
		{ "Category", "Heroes|Grid|Delegate" },
		{ "Comment", "/**\n\x09 * Called when the mouse move over the grid\n\x09 * Provides the closest snapping point of the grid and the current grid rotation\n\x09 */" },
		{ "ModuleRelativePath", "Public/HeroesBuilder_IGridDelegate.h" },
		{ "ToolTip", "Called when the mouse move over the grid\nProvides the closest snapping point of the grid and the current grid rotation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onGridMouseOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHeroesBuilder_IGridDelegate, nullptr, "onGridMouseOver", nullptr, nullptr, sizeof(HeroesBuilder_IGridDelegate_eventonGridMouseOver_Parms), Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onGridMouseOver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onGridMouseOver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onGridMouseOver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onGridMouseOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onGridMouseOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onGridMouseOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHeroesBuilder_IGridDelegate);
	UClass* Z_Construct_UClass_UHeroesBuilder_IGridDelegate_NoRegister()
	{
		return UHeroesBuilder_IGridDelegate::StaticClass();
	}
	struct Z_Construct_UClass_UHeroesBuilder_IGridDelegate_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHeroesBuilder_IGridDelegate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_HeroesBuilderPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHeroesBuilder_IGridDelegate_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onActorError, "onActorError" }, // 1977262424
		{ &Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onActorValidated, "onActorValidated" }, // 4027120706
		{ &Z_Construct_UFunction_UHeroesBuilder_IGridDelegate_onGridMouseOver, "onGridMouseOver" }, // 1911179321
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHeroesBuilder_IGridDelegate_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HeroesBuilder_IGridDelegate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHeroesBuilder_IGridDelegate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IHeroesBuilder_IGridDelegate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHeroesBuilder_IGridDelegate_Statics::ClassParams = {
		&UHeroesBuilder_IGridDelegate::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UHeroesBuilder_IGridDelegate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHeroesBuilder_IGridDelegate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHeroesBuilder_IGridDelegate()
	{
		if (!Z_Registration_Info_UClass_UHeroesBuilder_IGridDelegate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHeroesBuilder_IGridDelegate.OuterSingleton, Z_Construct_UClass_UHeroesBuilder_IGridDelegate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHeroesBuilder_IGridDelegate.OuterSingleton;
	}
	template<> HEROESBUILDERPLUGIN_API UClass* StaticClass<UHeroesBuilder_IGridDelegate>()
	{
		return UHeroesBuilder_IGridDelegate::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHeroesBuilder_IGridDelegate);
	static FName NAME_UHeroesBuilder_IGridDelegate_onActorError = FName(TEXT("onActorError"));
	bool IHeroesBuilder_IGridDelegate::Execute_onActorError(UObject* O, AHeroesBuilder_Grid* grid, const AHeroesBuilder_BuildingActor* buildingActor, EHeroesBuilder_GridError error)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UHeroesBuilder_IGridDelegate::StaticClass()));
		HeroesBuilder_IGridDelegate_eventonActorError_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UHeroesBuilder_IGridDelegate_onActorError);
		if (Func)
		{
			Parms.grid=grid;
			Parms.buildingActor=buildingActor;
			Parms.error=error;
			O->ProcessEvent(Func, &Parms);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UHeroesBuilder_IGridDelegate_onActorValidated = FName(TEXT("onActorValidated"));
	bool IHeroesBuilder_IGridDelegate::Execute_onActorValidated(UObject* O, AHeroesBuilder_Grid* grid, const AHeroesBuilder_BuildingActor* buildingActor, bool duplicate)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UHeroesBuilder_IGridDelegate::StaticClass()));
		HeroesBuilder_IGridDelegate_eventonActorValidated_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UHeroesBuilder_IGridDelegate_onActorValidated);
		if (Func)
		{
			Parms.grid=grid;
			Parms.buildingActor=buildingActor;
			Parms.duplicate=duplicate;
			O->ProcessEvent(Func, &Parms);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UHeroesBuilder_IGridDelegate_onGridMouseOver = FName(TEXT("onGridMouseOver"));
	bool IHeroesBuilder_IGridDelegate::Execute_onGridMouseOver(UObject* O, AHeroesBuilder_Grid* grid, FVector const& gridLocation, FRotator const& gridRotation)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UHeroesBuilder_IGridDelegate::StaticClass()));
		HeroesBuilder_IGridDelegate_eventonGridMouseOver_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UHeroesBuilder_IGridDelegate_onGridMouseOver);
		if (Func)
		{
			Parms.grid=grid;
			Parms.gridLocation=gridLocation;
			Parms.gridRotation=gridRotation;
			O->ProcessEvent(Func, &Parms);
		}
		return Parms.ReturnValue;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_IGridDelegate_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_IGridDelegate_h_Statics::EnumInfo[] = {
		{ EHeroesBuilder_GridError_StaticEnum, TEXT("EHeroesBuilder_GridError"), &Z_Registration_Info_UEnum_EHeroesBuilder_GridError, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1006375020U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_IGridDelegate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHeroesBuilder_IGridDelegate, UHeroesBuilder_IGridDelegate::StaticClass, TEXT("UHeroesBuilder_IGridDelegate"), &Z_Registration_Info_UClass_UHeroesBuilder_IGridDelegate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHeroesBuilder_IGridDelegate), 4288033264U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_IGridDelegate_h_3260439974(TEXT("/Script/HeroesBuilderPlugin"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_IGridDelegate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_IGridDelegate_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_IGridDelegate_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_HeroesBuilderPlugin_Source_HeroesBuilderPlugin_Public_HeroesBuilder_IGridDelegate_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
