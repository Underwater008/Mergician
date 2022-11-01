// Copyright 2022 Eneff Nicolas. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProceduralMeshComponent.h"
#include "Components/BoxComponent.h"
#include "HeroesBuilder_IGridDelegate.h"

#if WITH_EDITOR
#include "Editor/UnrealEd/Public/Editor.h"
#include "UObject/ObjectSaveContext.h"
#endif

#include "HeroesBuilder_Grid.generated.h"


class AHeroesBuilder_BuildingActor;


// Events
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FonBuildingAdded, AHeroesBuilder_Grid*, grid, AHeroesBuilder_BuildingActor*, buildingActor);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FonBuildingRemoved, AHeroesBuilder_Grid*, grid, AHeroesBuilder_BuildingActor*, buildingActor);




/**
 * Grid actor to be placed on the world
 * They must have a delegate set to handled direct call on some event (@see IHeroesBuilder_IGridDelegate)
 * Additionally, they dispatch new event (onBuildingAdded, onBuildingRemoved) that can be listen by any object
 */
UCLASS(BlueprintType, Blueprintable)
class HEROESBUILDERPLUGIN_API AHeroesBuilder_Grid : public AActor
{
	GENERATED_BODY()

public:



public: // Events

	/**
	 * Triggered every time a building is added to the grid
	 */
	UPROPERTY(BlueprintCallable, BlueprintAssignable, Category = "Heroes|Grid|Event")
		FonBuildingAdded onBuildingAdded;

	/**
	 * Triggered every time a building is removed from the grid
	 */
	UPROPERTY(BlueprintCallable, BlueprintAssignable, Category = "Heroes|Grid|Event")
		FonBuildingRemoved onBuildingRemoved;


public: // Actor Components

	/**
	 * generate the main grid mesh
	 */
	UPROPERTY(VisibleInstanceOnly, BlueprintReadonly, Category = "Heroes|Actor")
		UProceduralMeshComponent* gridProcedureMesh;

	/**
	 * generate the availability grid mesh
	 */
	UPROPERTY(VisibleInstanceOnly, BlueprintReadonly, Category = "Heroes|Actor")
		UProceduralMeshComponent* tileAvailabilityProcedureMesh;

	/**
	 * Used to handle mouse event on this actor
	 */
	UPROPERTY(VisibleInstanceOnly, BlueprintReadonly, Category = "Heroes|Actor")
		UBoxComponent* clickableBox;


protected: // Grid Setup

	/**
	 * Size of squares
	 */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Heroes|Setup")
		int32 tileSize = 10;

	/**
	 * Number of squares width
	 */
	UPROPERTY(EditAnywhere, Category = "Heroes|Setup")
		int32 width = 10;

	/**
	 * Number of squares height
	 */
	UPROPERTY(EditAnywhere, Category = "Heroes|Setup")
		int32 height = 10;

	/**
	 * Profile defined in the project setting to use
	 */
	UPROPERTY(EditAnywhere, Category = "Heroes|Setup")
		FName gridProfile = "UI";

	/**
	 * Channel defined to trace when needed (eg. onMouseMove)
	 */
	UPROPERTY(EditAnywhere, Category = "Heroes|Setup")
		TEnumAsByte<ECollisionChannel> gridChannel = ECollisionChannel::ECC_Visibility;

	/**
	 * Profile defined in the project setting to use
	 */
	UPROPERTY(EditAnywhere, Category = "Heroes|Setup")
		float gridTimerRate = 0.01f;


protected: // Positionning

	/**
	 * Distance between the "real" floor and the grid floor
	 */
	UPROPERTY(EditAnywhere, Category = "Heroes|Positioning")
		float floorOffsetZ = 0.5f;

	/**
	 * Distance between the grid floor and the grid lines
	 */
	UPROPERTY(EditAnywhere, Category = "Heroes|Positioning")
		float lineOffsetZ = 6;


protected: // Appearance

	/**
	 * Thickness of the grid lines
	 */
	UPROPERTY(EditAnywhere, Category = "Heroes|Appearance")
		float lineThickness = 1.0f;

	/**
	 * Thickness of the grid lines
	 */
	UPROPERTY(EditAnywhere, Category = "Heroes|Appearance")
		float subDivisionLineThickness = 0.5f;

	/**
	 * Show / hide subdivision lines
	 */
	UPROPERTY(EditAnywhere, Category = "Heroes|Appearance")
		bool showSubdivision = true;

	/**
	 * Number of visual subdivision (half tiles)
	 */
	int32 subdivision = 2;

	/**
	 * Current subdivistion ratio of the grid
	 */
	int32 subdivisionRatio = 2;


protected: // Materials

	/**
	 * Material Instance to apply to the base of the grid
	 */
	UPROPERTY(EditAnywhere, Category = "Heroes|Materials")
		UMaterialInterface* floorMaterial;

	/**
	 * Material Instance to apply to the lines of the grid
	 */
	UPROPERTY(EditAnywhere, Category = "Heroes|Materials")
		UMaterialInterface* lineMaterial;

	/**
	 * Material Instance to apply to the subdivision lines of the grid
	 */
	UPROPERTY(EditAnywhere, Category = "Heroes|Materials")
		UMaterialInterface* lineSubdivitionMaterial;

	/**
	 * Material Instance to for unavailable tiles
	 */
	UPROPERTY(EditAnywhere, Category = "Heroes|Materials")
		UMaterialInterface* unavailableMaterial;


protected: // Delegate

	/**
	 * Object registered as delegate for this grid
	 */
	UPROPERTY(VisibleInstanceOnly, Category = "Heroes|Delegate")
		TScriptInterface<IHeroesBuilder_IGridDelegate> delegate;


protected: // Helper

	/**
	 * Turn true to generate few test tiles (helper to test unavailable tiles)
	 */
	UPROPERTY(EditInstanceOnly, Category = "Heroes|Test")
		bool unavailableTest = false;


protected: // Data

	/**
	 * List of building infos currently tracked by the grid
	 */
	UPROPERTY(VisibleInstanceOnly, Category = "Heroes|Buildings")
		TArray<AHeroesBuilder_BuildingActor*> buildingsActors;


protected: // Timer

	FTimerHandle updateLocationWithMouse;



protected: // Optimization

	bool optimizedTilesPrepared = false;

	TArray<TArray<TWeakObjectPtr<AHeroesBuilder_BuildingActor>>> optimizedTiles;



public: // Constructors

	// Sets default values for this actor's properties
	AHeroesBuilder_Grid();

	// Equivalent of construction script
	void OnConstruction(const FTransform& Transform) override;


public: // Accessors

	/**
	 * Return the profile this grid is using, eg for traces
	 */
	UFUNCTION(BlueprintPure, Category = "Heroes|Grid|Setup")
		FName getGridProfile() const;

	/**
	 * Return this current Delegate this grid is using
	 */
	UFUNCTION(BlueprintPure, Category = "Heroes|Grid|Delegate")
		TScriptInterface<IHeroesBuilder_IGridDelegate> getDelegate() const;

	/**
	 * Change the delegare this grid use
	 */
	UFUNCTION(BlueprintCallable, Category = "Heroes|Grid|Delegate")
		void setDelegate(TScriptInterface<IHeroesBuilder_IGridDelegate> newDelegate);

	/**
	 * get a list of the Building actors that are referenced by this grid
	 */
	UFUNCTION(BlueprintPure, Category = "Heroes|Grid|Buildings")
		TArray<AHeroesBuilder_BuildingActor*> getBuildings() const;

	/**
	 * Get the current Size of the squares of this grid
	 */
	int32 getTileSize() const;


public: //trigger

	/**
	 * Called when start the validation of a building for this grid,
	 * @see AHeroesBuilder_Grid::onActorNeedValidation
	 * @see IHeroesBuilder_IGridDelegate::Execute_onActorValidated
	 * @see IHeroesBuilder_IGridDelegate::Execute_onActorError
	 */
	UFUNCTION(BlueprintCallable, Category = "Heroes|Grid|Actions")
		void validate(const AHeroesBuilder_BuildingActor* buildingActor, bool duplicate = false);


protected: // Event (not exposed to BP)

	UFUNCTION()
		void onBoxMouseOverStart(UPrimitiveComponent* component);

	UFUNCTION()
		void onBoxMouseOverEnd(UPrimitiveComponent* component);

	UFUNCTION()
		void onMouseMoveListener();


protected: // Event (exposed to BP)

	/**
	 * Procedure to check the validity of the Building regarding this grid,
	 * Default implmentation check the building is within the grid and do not collide with others registered buildings
	 * - If returns true, no issue detected
	 * - If returns false, error output will contain the first encoutered error
	 */
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Heroes|Grid|Actions")
			bool onActorNeedValidation(const AHeroesBuilder_BuildingActor* buildingActor, EHeroesBuilder_GridError& error);
	virtual bool onActorNeedValidation_Implementation(const AHeroesBuilder_BuildingActor* buildingActor, EHeroesBuilder_GridError& error);


public:

	/**
	 * Remove tiles display from unavailable layers
	 */
	UFUNCTION(BlueprintCallable, Category = "Heroes|Grid|Tile")
		void clearUnavailableTiles();

	/**
	 * Pass thru the list of current building and show all unavailable tiles
	 */
	UFUNCTION(BlueprintCallable, Category = "Heroes|Grid|Tile")
		void showCurrentUnavailableTiles();

	/**
	 * Draw list of tiles as unavailable
	 */
	UFUNCTION(BlueprintCallable, Category = "Heroes|Grid|Tile")
		void showUnavailableTiles(const TArray<FHeroesBuilder_GridTile>& tiles);


public: // Tile Manipulation

	/**
	 * Translate a world location to a grid tile, if possible
	 */
	UFUNCTION(BlueprintCallable, Category = "Heroes|Grid|Tile")
		bool worldLocationToTile(FVector location, int32& tileX, int32& tileY) const;

	/**
	 * Translate a relative location (this grid as reference) to a grid tile, if possible
	 */
	UFUNCTION(BlueprintCallable, Category = "Heroes|Grid|Tile")
		bool relativeLocationToTile(FVector location, int32& tileX, int32& tileY) const;

	/**
	 * Translate a tile to its world location
	 */
	UFUNCTION(BlueprintCallable, Category = "Heroes|Grid|Tile")
		bool tileToWorldLocation(int32 tileX, int32 tileY, FVector& location) const;

	/**
	 * Translate a tile to its relative location (this grid as reference)
	 */
	UFUNCTION(BlueprintCallable, Category = "Heroes|Grid|Tile")
		bool tileToRelativeLocation(int32 tileX, int32 tileY, FVector& location) const;

	/**
	 * Check if the tile is within the grid
	 */
	UFUNCTION(BlueprintCallable, Category = "Heroes|Grid|Tile")
		bool tileIsValid(int32 tileX, int32 tileY) const;

	/**
	 * Check if all the tiles are within the grid
	 * @see tileIsValid
	 */
	UFUNCTION(BlueprintCallable, Category = "Heroes|Grid|Tile")
		bool tilesFit(const TArray<FHeroesBuilder_GridTile>& tiles) const;


public: // Tile Read

	/**
	 * Number of tiles in width direction
	 * ** Tiles will be referenced from 0 to getGridWidth()-1
	 */
	UFUNCTION(BlueprintPure, Category = "Heroes|Grid|Setup")
		int32 getGridWidth() const;

	/**
	 * Number of tiles in heigh direction
	 * ** Tiles will be referenced from 0 to getGridHeigh()-1
	 */
	UFUNCTION(BlueprintPure, Category = "Heroes|Grid|Setup")
		int32 getGridHeigh() const;

	/**
	 * return info for a specific tile
	 * @see FHeroesBuilder_GridTileInfo structure
	 */
	UFUNCTION(BlueprintCallable, Category = "Heroes|Grid|Tile")
		FHeroesBuilder_GridTileInfo getTileInfo(int32 tileX, int32 tileY);


	/**
	 * return tiles info from [fromTileWidthPosition;fromTileHeighPosition] to [toTileWidthPosition;toTileHeighPosition]
	 * @see FHeroesBuilder_GridTileInfo structure
	 */
	UFUNCTION(BlueprintCallable, Category = "Heroes|Grid|Tile")
		TArray<FHeroesBuilder_GridTileInfo> getTilesInfo(
			int32 fromTileWidthPosition, int32 fromTileHeighPosition,
			int32 toTileWidthPosition, int32 toTileHeighPosition
		);

	/**
	 * return tiles info from a list of tiles
	 * @see FHeroesBuilder_GridTileInfo structure
	 * @uses AHeroesBuilder_Grid::getTileInfo internally
	 */
	UFUNCTION(BlueprintCallable, Category = "Heroes|Grid|Tile")
		TArray<FHeroesBuilder_GridTileInfo> getTilesInfoFromTilesList(const TArray<FHeroesBuilder_GridTile>& forTiles);


protected:

	void unvalidOptimizedTiles();

	void prepareOptimizedTiles();



public: // Exposed to BP

	/**
	 * Register a building to the grid
	 * If quietly, the addition won't throw an onBuildingAdded event
	 */
	UFUNCTION(BlueprintCallable, Category = "Heroes|Grid|Building")
		void registerBuilding(AHeroesBuilder_BuildingActor* building, bool quietly = false);

	/**
	 * Unregister a building from the grid
	 * If quietly, the addition won't throw an onBuildingRemoved event
	 */
	UFUNCTION(BlueprintCallable, Category = "Heroes|Grid|Building")
		void unregisterBuilding(AHeroesBuilder_BuildingActor* building, bool quietly = false);

	/**
	 * Check if building is collinding with any registered building of this grid
	 * if true, collision is detected collidingBuildings will contains the list of 
	 *          building in collision and intersections the list of all tiles actually collidings (tiles can come from different building)
	 * if false, no collision detected
	 */
	UFUNCTION(BlueprintCallable, Category = "Heroes|Grid|Building")
		bool buildingIsColliding(const AHeroesBuilder_BuildingActor* building, TArray<AHeroesBuilder_BuildingActor*>& collidingBuildings, TArray<FHeroesBuilder_GridTile>& intersections) const;



public: // Editor Only

#if WITH_EDITOR
	/**
	 * when the actor is moved in the editor
	 */
	void PostEditMove(bool bFinished) override;

	/**
	 * when the actor have one of its property changed in the editor
	 * Manage the snapping of registering if enable
	 */
	void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;

	/**
	 * Cancel any scale from editor
	 */
	void EditorApplyScale(const FVector& DeltaScale, const FVector* PivotLocation, bool bAltDown, bool bShiftDown, bool bCtrlDown) override;

	/**
	 * triggered once an actor as been removed from the level (any actor will trigger for all in palce)
	 */
	void onLevelActorDeleted();

	/**
	 * When editor is saved
	 */
	void onLevelSaved(class UWorld* world, FObjectPreSaveContext ObjectSaveContext);

	/**
	 * Register a building to the grid
	 * will not throw events
	 * Manage the snapping of registering if enable
	 */
	void registerBuilding_Editor(AHeroesBuilder_BuildingActor* building);

	/**
	 * Unregister a building from the grid
	 * will not throw events
	 */
	void unregisterBuilding_Editor(AHeroesBuilder_BuildingActor* building);

	/**
	 * clean all unvalidated entry in buildingActors
	 */
	void cleanBuildings_Editor();

#endif // WITH_EDITOR


protected: // Drawing

	/**
	 * convenient fonction generate the vertices and triangles to draw a square
	 */
	void generateSquare(float startX, float startY, float endX, float endY, float z, TArray<FVector>& vertices, TArray<int32>& triangles);

	/**
	 * convenient fonction generate the vertices and triangles to draw a list of lines
	 */
	void generateWitdhSquareLines(int32 first, int32 last, int32 step, float squareSize, float squareLineThickness, int32& offset, TArray<FVector>& vertices, TArray<int32>& triangles);

	/**
	 * convenient fonction generate the vertices and triangles to draw a list of lines
	 */
	void generateHeightSquareLines(int32 first, int32 last, int32 step, float squareSize, float squareLineThickness, int32& offset, TArray<FVector>& vertices, TArray<int32>& triangles);


};
