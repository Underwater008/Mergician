// Copyright 2022 Eneff Nicolas. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "HeroesBuilder_Grid.h"
#include "HeroesBuilder_GridTile.h"
#include "HeroesBuilder_FunctionLibrary.generated.h"



/**
 * Bases functions for faster implementation
 */
UCLASS()
class HEROESBUILDERPLUGIN_API UHeroesBuilder_FunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	


public:

	/**
	 * Generate a square corresponding to a buiding regarding a grid
	 * location and rotation from the center point
	 * SizeX & SizeY to represent the square that will be translated in equivalent tiles
	 * ** Note that tiles generated can be virtually "outside of the grid" ig, negative value or above the size of the grid
	 */
	static void makeSquareFromBuilding(
		const AHeroesBuilder_Grid* grid, const FVector& location, const FRotator& rotation, int32 sizeX, int32 sizeY,
		int32& firstX, int32& lastX, int32& firstY, int32& lastY
	);

public: // Tile

	/**
	 * Generate a list of tiles for this grid
	 * location and rotation from the center point
	 * SizeX & SizeY to represent the square that will be translated in equivalent tiles
	 * ** Note that tiles generated can be virtually "outside of the grid" ig, negative value or above the size of the grid
	 */
	UFUNCTION(BlueprintCallable, Category = "Heroes|Library|Tile")
		static TArray<FHeroesBuilder_GridTile> makeTiles(const AHeroesBuilder_Grid* grid, const FVector& location, const FRotator& rotation, int32 sizeX, int32 sizeY);

	/**
	 * Returns the intersection for the tiles send, ie exists in both arrays
	 */
	UFUNCTION(BlueprintCallable, Category = "Heroes|Library|Tile")
		static TArray<FHeroesBuilder_GridTile> tilesIntersect(const TArray<FHeroesBuilder_GridTile>& first, const TArray<FHeroesBuilder_GridTile>& second);

	/**
	 * Returns the intersection for the tiles send, ie exists in both arrays
	 */
	UFUNCTION(BlueprintCallable, Category = "Heroes|Library|Tile")
		static TArray<FHeroesBuilder_GridTile> tilesUnion(const TArray<FHeroesBuilder_GridTile>& first, const TArray<FHeroesBuilder_GridTile>& second);

	/**
	 * check if tiles are contained into the squared [fromTileX;fromTileY][toTileX;toTileY]
	 */
	UFUNCTION(BlueprintCallable, Category = "Heroes|Grid|Tile")
		static bool tileIn(const FHeroesBuilder_GridTile& tile, int32 fromTileX, int32 fromTileY, int32 toTileX, int32 toTileY);

	/**
	 * Returns the tile as string, for debug purpose mainly
	 */
	UFUNCTION(BlueprintPure, Category = "Heroes|Library|Tile")
		static FString tileToString(const FHeroesBuilder_GridTile& tile);



public: // Tile Info

	/**
	 * Returns the intersection for the tiles send, ie exists in both arrays
	 * specifically for tileInfo
	 */
	UFUNCTION(BlueprintCallable, Category = "Heroes|Library|TileInfo")
		static TArray<FHeroesBuilder_GridTileInfo> tilesInfoIntersect(const TArray<FHeroesBuilder_GridTileInfo>& first, const TArray<FHeroesBuilder_GridTileInfo>& second);

	/**
	 * Returns the intersection for the tiles send, ie exists in both arrays
	 * specifically for tileInfo
	 */
	UFUNCTION(BlueprintCallable, Category = "Heroes|Library|TileInfo")
		static TArray<FHeroesBuilder_GridTileInfo> tilesInfoUnion(const TArray<FHeroesBuilder_GridTileInfo>& first, const TArray<FHeroesBuilder_GridTileInfo>& second);

	/**
	 * Returns the tile info as string, for debug purpose mainly
	 * specifically for tileInfo
	 */
	UFUNCTION(BlueprintPure, Category = "Heroes|Library|TileInfo")
		static FString tileInfoToString(const FHeroesBuilder_GridTileInfo& tile);

};
