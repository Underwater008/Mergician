// Copyright 2022 Eneff Nicolas. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "HeroesBuilder_GridTile.generated.h"


class AHeroesBuilder_Grid;


/**
 * 
 */
USTRUCT(BlueprintType)
struct HEROESBUILDERPLUGIN_API FHeroesBuilder_GridTile
{
	GENERATED_BODY()


public:

	/**
	 * position X of the tile in its grid
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heroes|GridTile")
		int32 tileX;

	/**
	 * position Y of the tile in its grid
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Heroes|GridTile")
		int32 tileY;


public:

	FHeroesBuilder_GridTile()
	{
		this->tileX = this->tileY = 0;
	}

	FHeroesBuilder_GridTile(const FHeroesBuilder_GridTile& copy)
	{
		this->tileX = copy.tileX;
		this->tileY = copy.tileY;
	}

	FHeroesBuilder_GridTile(int32 positionX, int32 positionY)
	{
		this->tileX = positionX;
		this->tileY = positionY;
	}

	virtual ~FHeroesBuilder_GridTile()
	{

	}

public:

	/**
	 * check position X & Y of both tiles
	 */
	bool operator==(const FHeroesBuilder_GridTile& other) const;

	/**
	 * Get a text version for this grid, for debug purpose mainly
	 */
	virtual FString ToString() const;

};



/**
 *
 */
USTRUCT(BlueprintType)
struct HEROESBUILDERPLUGIN_API FHeroesBuilder_GridTileInfo : public FHeroesBuilder_GridTile
{
	GENERATED_BODY()

protected:

	/**
	 * building occupying this tile
	 */
	UPROPERTY(BlueprintReadOnly, Category = "Heroes|Tile")
		TWeakObjectPtr<class AHeroesBuilder_BuildingActor> building;


public:

	FHeroesBuilder_GridTileInfo() :FHeroesBuilder_GridTile(0, 0) 
	{

	}

	FHeroesBuilder_GridTileInfo(int32 withTileX, int32 withTileY) :FHeroesBuilder_GridTile(withTileX, withTileY)
	{

	}

	FHeroesBuilder_GridTileInfo(int32 withTileX, int32 withTileY, AHeroesBuilder_BuildingActor* withBuilding) :FHeroesBuilder_GridTile(withTileX, withTileY)
	{
		this->setBuilding(withBuilding);
	}

	FHeroesBuilder_GridTileInfo(const FHeroesBuilder_GridTileInfo& copy): FHeroesBuilder_GridTile(copy)
	{
		this->setBuilding(copy.building.Get());
	}

	virtual ~FHeroesBuilder_GridTileInfo()
	{

	}

public:

	FString ToString() const override;


public:

	void setBuilding(AHeroesBuilder_BuildingActor* withBuilding);

	AHeroesBuilder_BuildingActor* getBuilding() const;


};
