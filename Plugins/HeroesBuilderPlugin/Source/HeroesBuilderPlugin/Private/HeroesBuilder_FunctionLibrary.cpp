// Copyright 2022 Eneff Nicolas. All Rights Reserved.


#include "HeroesBuilder_FunctionLibrary.h"
#include "HeroesBuilder_BuildingActor.h"



void UHeroesBuilder_FunctionLibrary::makeSquareFromBuilding(
	const AHeroesBuilder_Grid* grid, const FVector& location, const FRotator& rotation, int32 sizeX, int32 sizeY,
	int32& firstX, int32& lastX, int32& firstY, int32& lastY
)
{
	FVector gridLocation = grid->GetActorLocation();
	int32 direction = round(abs(rotation.Yaw) / 90.f);

	// Center tile
	int32 tileX, tileY;
	bool isValid = grid->worldLocationToTile(location, tileX, tileY);

	// Apply current rotation modifier
	int32 buildingTileX = sizeX;
	int32 buildingTileY = sizeY;

	if (direction % 2 == 1)
	{
		buildingTileX = sizeY;
		buildingTileY = sizeX;
	}

	// Number of "complete" tiles when matching the tileSize of the grid
	buildingTileX = ceil(buildingTileX / (float)grid->getTileSize());
	buildingTileY = ceil(buildingTileY / (float)grid->getTileSize());

	// First and last
	firstX = tileX - floor(buildingTileX / 2);
	lastX = tileX + floor(buildingTileX / 2);
	firstY = tileY - floor(buildingTileY / 2);
	lastY = tileY + floor(buildingTileY / 2);
}

TArray<FHeroesBuilder_GridTile> UHeroesBuilder_FunctionLibrary::makeTiles(const AHeroesBuilder_Grid* grid, const FVector& location, const FRotator& rotation, int32 sizeX, int32 sizeY)
{
	TRACE_CPUPROFILER_EVENT_SCOPE(HB_FunctionLibrary::makeTiles)
	{
		int32 firstX, lastX, firstY, lastY;
		TArray<FHeroesBuilder_GridTile> tiles;

		UHeroesBuilder_FunctionLibrary::makeSquareFromBuilding(grid, location, rotation, sizeX, sizeY, firstX, lastX, firstY, lastY);

		// Generate tiles list
		for (int32 i = firstX; i <= lastX; i++)
		{
			for (int32 o = firstY; o <= lastY; o++)
			{
				tiles.Add(FHeroesBuilder_GridTile(i, o));
			}
		}
		return tiles;
	}
}


TArray<FHeroesBuilder_GridTile> UHeroesBuilder_FunctionLibrary::tilesIntersect(const TArray<FHeroesBuilder_GridTile>& first, const TArray<FHeroesBuilder_GridTile>& second)
{
	TArray<FHeroesBuilder_GridTile> intersection;

	for (int i = 0; i < first.Num(); i++)
	{
		for (int32 o = 0; o < second.Num(); o++)
		{
			if (first[i] == second[o])
			{
				intersection.Add(FHeroesBuilder_GridTile(first[i]));
			}
		}
	}
	return intersection;
}


TArray<FHeroesBuilder_GridTile> UHeroesBuilder_FunctionLibrary::tilesUnion(const TArray<FHeroesBuilder_GridTile>& first, const TArray<FHeroesBuilder_GridTile>& second)
{
	TArray<FHeroesBuilder_GridTile> tilesUnion = first;

	for (int32 i = 0; i < second.Num(); i++)
	{
		tilesUnion.AddUnique(FHeroesBuilder_GridTile(second[i]));
	}
	return tilesUnion;
}

bool UHeroesBuilder_FunctionLibrary::tileIn(const FHeroesBuilder_GridTile& tile, int32 fromTileX, int32 fromTileY, int32 toTileX, int32 toTileY)
{
	return tile.tileX >= fromTileX && tile.tileX <= toTileX && tile.tileY >= fromTileY && tile.tileY <= toTileY;
}


FString UHeroesBuilder_FunctionLibrary::tileToString(const FHeroesBuilder_GridTile& tile)
{
	return tile.ToString();
}





TArray<FHeroesBuilder_GridTileInfo> UHeroesBuilder_FunctionLibrary::tilesInfoIntersect(const TArray<FHeroesBuilder_GridTileInfo>& first, const TArray<FHeroesBuilder_GridTileInfo>& second)
{
	TArray<FHeroesBuilder_GridTileInfo> intersection;

	for (int i = 0; i < first.Num(); i++)
	{
		for (int32 o = 0; o < second.Num(); o++)
		{
			if (first[i] == second[o])
			{
				intersection.AddUnique(FHeroesBuilder_GridTileInfo(first[i]));
			}
		}
	}
	return intersection;
}


TArray<FHeroesBuilder_GridTileInfo> UHeroesBuilder_FunctionLibrary::tilesInfoUnion(const TArray<FHeroesBuilder_GridTileInfo>& first, const TArray<FHeroesBuilder_GridTileInfo>& second)
{
	TArray<FHeroesBuilder_GridTileInfo> tilesInfoUnion = first;

	for (int32 i = 0; i < second.Num(); i++)
	{
		tilesInfoUnion.AddUnique(FHeroesBuilder_GridTileInfo(second[i]));
	}
	return tilesInfoUnion;
}


FString UHeroesBuilder_FunctionLibrary::tileInfoToString(const FHeroesBuilder_GridTileInfo& tile)
{
	return tile.ToString();
}