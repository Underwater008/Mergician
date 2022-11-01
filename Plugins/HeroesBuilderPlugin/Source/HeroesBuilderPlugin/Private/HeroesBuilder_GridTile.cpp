// Copyright 2022 Eneff Nicolas. All Rights Reserved.


#include "HeroesBuilder_GridTile.h"
#include "HeroesBuilder_Grid.h"
#include "HeroesBuilder_BuildingActor.h"



bool FHeroesBuilder_GridTile::operator==(const FHeroesBuilder_GridTile& other) const
{
	return (this->tileX == other.tileX) && (this->tileY == other.tileY);
}


FString FHeroesBuilder_GridTile::ToString() const
{
	return FString::Format(TEXT("[{0};{1}]"), { this->tileX , this->tileY });
}





void FHeroesBuilder_GridTileInfo::setBuilding(AHeroesBuilder_BuildingActor* withBuilding)
{
	this->building = withBuilding;
}


AHeroesBuilder_BuildingActor* FHeroesBuilder_GridTileInfo::getBuilding() const
{
	return building.Get();
}


FString FHeroesBuilder_GridTileInfo::ToString() const
{
	FString buildingName = this->building.IsValid()
		? this->building->GetName()
		: TEXT(" empty ")
	;

	return FString::Format(TEXT("[{0};{1} \"{2}\"]"), { this->tileX , this->tileY, buildingName });
}

