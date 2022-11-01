// Copyright 2022 Eneff Nicolas. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "HeroesBuilder_IGridDelegate.generated.h"



/**
 * 
 */
UENUM(BlueprintType)
enum class EHeroesBuilder_GridError : uint8
{
	NONE = 0 UMETA(Hidden),

	UNKNOW    UMETA(DisplayName = "Unknow Reason"),
	ACTOR     UMETA(DisplayName = "Incorrect Actor"),
	COLLISION UMETA(DisplayName = "Collision Detected"),
	OUTSIDE   UMETA(DisplayName = "Outside of the grid"),
};




class AHeroesBuilder_Grid;
class AHeroesBuilder_BuildingActor;


UINTERFACE(MinimalAPI)
class UHeroesBuilder_IGridDelegate : public UInterface
{
	GENERATED_BODY()
};

/**
 * Delegate will manage direct function call from the grid it is set with.
 * - when the mouse mouse over the grid : onGridMouseOver to handle BuildingActor positioning
 * - when a BuildingActor request validation, onActorValidated or onActorError will be called accordingly to the result
 */
class HEROESBUILDERPLUGIN_API IHeroesBuilder_IGridDelegate
{
	GENERATED_BODY()

public:

	/**
	 * Called when the mouse move over the grid
	 * Provides the closest snapping point of the grid and the current grid rotation
	 */
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Heroes|Grid|Delegate")
		bool onGridMouseOver(AHeroesBuilder_Grid* grid, const FVector& gridLocation, const FRotator& gridRotation);

	/**
	 * Called once the building has been validated
	 */
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Heroes|Grid|Delegate")
		bool onActorValidated(AHeroesBuilder_Grid* grid, const AHeroesBuilder_BuildingActor* buildingActor, bool duplicate);

	/**
	 * Called is any error happens during Actor validation
	 */
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Heroes|Grid|Delegate")
		bool onActorError(AHeroesBuilder_Grid* grid, const AHeroesBuilder_BuildingActor* buildingActor, EHeroesBuilder_GridError error);

};
