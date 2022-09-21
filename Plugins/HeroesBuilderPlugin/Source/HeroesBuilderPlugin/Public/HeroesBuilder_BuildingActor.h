// Copyright 2022 Eneff Nicolas. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "HeroesBuilder_GridTile.h"
#include "HeroesBuilder_BuildingActor.generated.h"




UENUM(BlueprintType)
enum class EHeroesBuilder_RotationDirection : uint8
{
	NONE = 0 UMETA(Hidden),
	CLOCK = 1 UMETA(DisplayName = "Clock Direction"),
	COUNTER_CLOCK = 2 UMETA(DisplayName = "CounterClock Direction")
};




class UBoxComponent;
class USphereComponent;
class UArrowComponent;
class AHeroesBuilder_Grid;


/**
 * BuildingActor are the actor who will be place in the grid 
 * Also integrate an additional snapping function for the Editor
 */
UCLASS(Abstract, BlueprintType, Blueprintable)
class HEROESBUILDERPLUGIN_API AHeroesBuilder_BuildingActor : public AActor
{
	GENERATED_BODY()


protected: // Actor Hierarchy

	/**
	 * Base scene component
	 */
	UPROPERTY(VisibleInstanceOnly, BlueprintReadonly, Category = "Heroes|Actor")
		USceneComponent* root;

	/**
	 * Meshes Container
	 */
	UPROPERTY(VisibleInstanceOnly, BlueprintReadonly, Category = "Heroes|Actor")
		USceneComponent* meshes;

	/**
	 * Used to modify the navigation of character
	 */
	UPROPERTY(VisibleInstanceOnly, BlueprintReadonly, Category = "Heroes|Actor")
		UBoxComponent* sizeBox;

	/**
	 * Arrow to show the front part of the building
	 */
	UPROPERTY(VisibleInstanceOnly, BlueprintReadonly, Category = "Heroes|Actor")
		UArrowComponent* directionY;

	/**
	 * Arrow to show the top part of the building
	 */
	UPROPERTY(VisibleInstanceOnly, BlueprintReadonly, Category = "Heroes|Actor")
		UArrowComponent* directionZ;

	/**
	 * Arrow to show the top part of the building
	 */
	UPROPERTY(VisibleInstanceOnly, BlueprintReadonly, Category = "Heroes|Actor")
		USphereComponent* snapGuide;

protected:

	/**
	 * Size in tile
	 */
	UPROPERTY(EditDefaultsOnly, Category = "Heroes|TileSize")
		int32 sizeX = 10;

	/**
	 * Size in tile
	 */
	UPROPERTY(EditDefaultsOnly, Category = "Heroes|TileSize")
		int32 sizeY = 10;

	/**
	 * Size in tile
	 */
	UPROPERTY(EditDefaultsOnly, Category = "Heroes|TileSize")
		int32 sizeZ = 10;

	/**
	 * Size in tile
	 */
	UPROPERTY(VisibleInstanceOnly, Category = "Heroes|Position")
		FRotator relativeRotation;

	/**
	 * Current Grid where the actor is attached
	 */
	UPROPERTY(VisibleInstanceOnly, Category = "Heroes|Grid")
		AHeroesBuilder_Grid* attachedGrid;


public: // Init

	AHeroesBuilder_BuildingActor();
	void OnConstruction(const FTransform& Transform) override;


public: // 

	/**
	 * Get the X size in unit
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Heroes|Building|Size")
		int32 getSizeX() const;
		int32 getSizeX_Implementation() const;

	/**
	 * Get the Y size in unit
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Heroes|Building|Size")
		int32 getSizeY() const;
		int32 getSizeY_Implementation() const;

	/**
	 * Add rotation to the Actor, should step by 90° in the direction received
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Heroes|Building|Scene")
		void rotate(EHeroesBuilder_RotationDirection direction = EHeroesBuilder_RotationDirection::CLOCK);
		void rotate_Implementation(EHeroesBuilder_RotationDirection direction = EHeroesBuilder_RotationDirection::CLOCK);

	/**
	 * convenient to push a brand new rotation
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Heroes|Building|Scene")
		void setRelativeRotation(FRotator rotation);
		void setRelativeRotation_Implementation(FRotator rotation);

	/**
	 * Get the current relative rotation. This will be added to the grid rotation to have the final one for this actor
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Heroes|Building|Scene")
		FRotator getRelativeRotation() const;
		FRotator getRelativeRotation_Implementation() const;

	/**
	 * Reference the grid where this actor is
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Heroes|Building|Grid")
		void attachToGrid(AHeroesBuilder_Grid* grid);
		void attachToGrid_Implementation(AHeroesBuilder_Grid* grid);

	/**
	 * Dereference the grid where this actor was
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Heroes|Building|Grid")
		void detachFromGrid();
		void detachFromGrid_Implementation();

	/**
	 * Get the current grid where this actor is
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Heroes|Building|Grid")
		AHeroesBuilder_Grid* getGrid() const;
		AHeroesBuilder_Grid* getGrid_Implementation() const;

	/**
	 * Convert this building into a tile array for the grid send
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Heroes|Building|Tiles")
		TArray<FHeroesBuilder_GridTile> getGridTiles(const AHeroesBuilder_Grid* grid) const;
		TArray<FHeroesBuilder_GridTile> getGridTiles_Implementation(const AHeroesBuilder_Grid* grid) const;

	/**
	 * Convert this building into a tile info array for the current it belongs to
	 * ** if the current building is not attached to any grid, it will returns a empty array
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Heroes|Building|Tiles")
		TArray<FHeroesBuilder_GridTileInfo> getGridTilesInfo() const;
		TArray<FHeroesBuilder_GridTileInfo> getGridTilesInfo_Implementation() const;



public: // Helper

	/**
	 * Is this actor is currently registered to a grid ?
	 */
	UFUNCTION(BlueprintPure, Category = "Heroes|Building|Grid")
		bool isAttachedToGrid() const;



protected: // Editor usage

	/**
	 * ** Editor functionality
	 * Turn on to make the Building Actor snap to the closest grid after it has been moved in the world
	 */
	UPROPERTY(EditAnywhere, Category = "Heroes|Grid")
		bool snapToClosestGrid = true;

	/**
	 * ** Editor functionality
	 * Distance max to check for grid to snap
	 * if a no grid is within, nothing will happen
	 */
	UPROPERTY(EditAnywhere, Category = "Heroes|Grid")
		float snapDistance = 100.0f;



public: // Editor usage

#if WITH_EDITOR

	/**
	 * when the actor is moved in the editor
	 * Manage the snapping if enabled
	 */
	void PostEditMove(bool bFinished) override;

	/**
	 * when the actor have one of its property changed in the editor
	 * Manage the snapping if enabled
	 */
	void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;

	/**
	 * Cancel any scale from editor
	 */
	void EditorApplyScale(const FVector& DeltaScale, const FVector* PivotLocation, bool bAltDown, bool bShiftDown, bool bCtrlDown) override;

	/**
	 * Cancel any scale from editor
	 */
	void ShowSnapGuideIfSelected_Editor();

#endif // WITH_EDITOR



public:

	/**
	 * Debug Helper
	 */
	FString getLogName() const;

};
