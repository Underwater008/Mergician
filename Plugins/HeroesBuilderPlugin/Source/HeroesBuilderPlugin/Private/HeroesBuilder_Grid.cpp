// Copyright 2022 Eneff Nicolas. All Rights Reserved.


#include "HeroesBuilder_Grid.h"
#include "TimerManager.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "HeroesBuilder_FunctionLibrary.h"
#include "HeroesBuilder_BuildingActor.h"



AHeroesBuilder_Grid::AHeroesBuilder_Grid()
{
	// Base scene
	USceneComponent* scene = CreateDefaultSubobject<USceneComponent>("Scene");
	this->SetRootComponent(scene);

	this->gridProcedureMesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("grid"));
	this->gridProcedureMesh->AttachToComponent(scene, FAttachmentTransformRules::KeepRelativeTransform);
	this->gridProcedureMesh->SetCollisionProfileName("NoCollision");

	this->tileAvailabilityProcedureMesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("tileAvailability"));
	this->tileAvailabilityProcedureMesh->AttachToComponent(scene, FAttachmentTransformRules::KeepRelativeTransform);
	this->tileAvailabilityProcedureMesh->SetCollisionProfileName("NoCollision");

	this->clickableBox = CreateDefaultSubobject<UBoxComponent>("Clickable Box");
	this->clickableBox->AttachToComponent(scene, FAttachmentTransformRules::KeepRelativeTransform);
	this->clickableBox->AreaClass = nullptr;
	this->clickableBox->CanCharacterStepUpOn = ECB_No;
	this->clickableBox->SetGenerateOverlapEvents(false);
}


void AHeroesBuilder_Grid::OnConstruction(const FTransform& Transform)
{
	// Prevent scale
	this->SetActorScale3D(FVector(1, 1, 1));

	// -- clickable box - Shape
	float halfSize = this->tileSize / 2.0f;
	FVector center = FVector(
		this->width * halfSize,
		this->height * halfSize,
		(this->floorOffsetZ +this->lineOffsetZ) /2.0f +0.1f // +0.1f to avoid the blinking in editor
	);

	this->clickableBox->SetBoxExtent(center);
	this->clickableBox->SetRelativeLocation(center);
	this->clickableBox->OnBeginCursorOver.AddUniqueDynamic(this, &AHeroesBuilder_Grid::onBoxMouseOverStart);
	this->clickableBox->OnEndCursorOver.AddUniqueDynamic(this, &AHeroesBuilder_Grid::onBoxMouseOverEnd);

	// -- clickable box - Profile
	this->clickableBox->SetCollisionProfileName(this->gridProfile);

	// -- MOCK -- 
	TArray<FVector> normals;
	TArray<FVector2D> uv;
	TArray<FColor> vertexColor;
	TArray<FProcMeshTangent> tangent;
	// -- MOCK -- 

	subdivision = 2;
	subdivisionRatio = pow(2, subdivision) / 2;

	this->gridProcedureMesh->ClearAllMeshSections();
	this->gridProcedureMesh->SetMaterial(0, nullptr);
	this->gridProcedureMesh->SetMaterial(1, nullptr);
	this->gridProcedureMesh->SetMaterial(2, nullptr);

	// -- Global square
	{
		TArray<FVector> vertices;
		TArray<int32> triangles;

		this->generateSquare(0, 0, tileSize * this->width, this->tileSize * this->height, this->floorOffsetZ, vertices, triangles);
		this->gridProcedureMesh->CreateMeshSection(0, vertices, triangles, normals, uv, vertexColor, tangent, false);
		this->gridProcedureMesh->SetMaterial(0, this->floorMaterial);
	}

	// -- Main Lines
	{
		int32 offset = 0;
		TArray<FVector> vertices;
		TArray<int32> triangles;

		this->generateWitdhSquareLines(0, this->width + 1, 1, this->tileSize, this->lineThickness / 2.0f, offset, vertices, triangles);
		this->generateHeightSquareLines(0, this->height + 1, 1, this->tileSize, this->lineThickness / 2.0f, offset, vertices, triangles);
		this->gridProcedureMesh->CreateMeshSection(1, vertices, triangles, normals, uv, vertexColor, tangent, false);
		this->gridProcedureMesh->SetMaterial(1, this->lineMaterial);
	}

	// Sub Lines
	if (this->showSubdivision)
	{
		float tileSubdividedSize = this->tileSize / (float)subdivisionRatio;
		int32 offset = 0;
		TArray<FVector> vertices;
		TArray<int32> triangles;

		this->generateWitdhSquareLines(1, this->width * this->subdivisionRatio, 2, tileSubdividedSize, this->subDivisionLineThickness / 2.0f, offset, vertices, triangles);
		this->generateHeightSquareLines(1, this->height * this->subdivisionRatio, 2, tileSubdividedSize, this->subDivisionLineThickness / 2.0f, offset, vertices, triangles);
		this->gridProcedureMesh->CreateMeshSection(2, vertices, triangles, normals, uv, vertexColor, tangent, false);
		this->gridProcedureMesh->SetMaterial(2, this->lineSubdivitionMaterial);
	}

	this->clearUnavailableTiles();
	if (unavailableTest)
	{
		this->showUnavailableTiles({
			{0,0},
			{1,0},
			{0,1},
			{1,1},
			{0,2},
			{0,4}
			});
	}

#if WITH_EDITORONLY_DATA

	FEditorDelegates::OnDeleteActorsEnd.AddUObject(this, &AHeroesBuilder_Grid::onLevelActorDeleted);
	FEditorDelegates::PreSaveWorldWithContext.AddUObject(this, &AHeroesBuilder_Grid::onLevelSaved);

#endif
}


FName AHeroesBuilder_Grid::getGridProfile() const
{
	return this->gridProfile;
}

TScriptInterface<IHeroesBuilder_IGridDelegate> AHeroesBuilder_Grid::getDelegate() const
{
	return this->delegate;
}

void AHeroesBuilder_Grid::setDelegate(TScriptInterface<IHeroesBuilder_IGridDelegate> newDelegate)
{
	this->delegate = newDelegate;
}

TArray<AHeroesBuilder_BuildingActor*> AHeroesBuilder_Grid::getBuildings() const
{
	return this->buildingsActors;
}


int32 AHeroesBuilder_Grid::getTileSize() const
{
	return this->tileSize;
}

bool AHeroesBuilder_Grid::onActorNeedValidation_Implementation(const AHeroesBuilder_BuildingActor* buildingActor, EHeroesBuilder_GridError& error)
{
	error = EHeroesBuilder_GridError::NONE;

	TArray<FHeroesBuilder_GridTile> tiles = buildingActor->getGridTiles(this);

	if (!this->tilesFit(tiles))
	{
		error = EHeroesBuilder_GridError::OUTSIDE;
		return false;
	}

	TArray<FHeroesBuilder_GridTile> intersection;
	TArray<AHeroesBuilder_BuildingActor*> buildingActors;

	if (this->buildingIsColliding(buildingActor, buildingActors, intersection))
	{
		error = EHeroesBuilder_GridError::COLLISION;
		return false;
	}

	return true;
}

void AHeroesBuilder_Grid::validate(const AHeroesBuilder_BuildingActor* buildingActor, bool duplicate)
{
	TRACE_CPUPROFILER_EVENT_SCOPE(AHeroesBuilder_Grid::validate)
	{
		if (IsValid(buildingActor))
		{
			EHeroesBuilder_GridError error;

			bool validationResult = false;
			TRACE_CPUPROFILER_EVENT_SCOPE(AHeroesBuilder_Grid::onActorNeedValidation)
			{
				validationResult = this->onActorNeedValidation(buildingActor, error);
			}

			if (validationResult)
			{
				if (ensureAlwaysMsgf(IsValid(this->delegate.GetObject()), TEXT("No Delegate provided for Grid %s"), *this->GetName()))
				{
					TRACE_CPUPROFILER_EVENT_SCOPE(IHeroesBuilder_IGridDelegate::onActorValidated)
					{
						IHeroesBuilder_IGridDelegate::Execute_onActorValidated(this->delegate.GetObject(), this, buildingActor, duplicate);
					}
					this->registerBuilding(const_cast<AHeroesBuilder_BuildingActor*>(buildingActor));
				}
			}
			else
			{
				if (ensureAlwaysMsgf(IsValid(this->delegate.GetObject()), TEXT("No Delegate provided for Grid %s"), *this->GetName()))
				{
					TRACE_CPUPROFILER_EVENT_SCOPE(IHeroesBuilder_IGridDelegate::onActorError)
					{
						IHeroesBuilder_IGridDelegate::Execute_onActorError(this->delegate.GetObject(), this, buildingActor, error);
					}
				}
			}
		}
		else
		{
			if (ensureAlwaysMsgf(IsValid(this->delegate.GetObject()), TEXT("No Delegate provided for Grid %s"), *this->GetName()))
			{
				TRACE_CPUPROFILER_EVENT_SCOPE(IHeroesBuilder_IGridDelegate::onActorError)
				{
					IHeroesBuilder_IGridDelegate::Execute_onActorError(this->delegate.GetObject(), this, buildingActor, EHeroesBuilder_GridError::ACTOR);
				}
			}
		}
	}
}


void AHeroesBuilder_Grid::onBoxMouseOverStart(UPrimitiveComponent* component)
{
	// Start Listening for mouvement
	GetWorld()->GetTimerManager().SetTimer(this->updateLocationWithMouse, this, &AHeroesBuilder_Grid::onMouseMoveListener, this->gridTimerRate, true);
}


void AHeroesBuilder_Grid::onBoxMouseOverEnd(UPrimitiveComponent* component)
{
	// Stop Listening for mouvement
	GetWorld()->GetTimerManager().ClearTimer(this->updateLocationWithMouse);
}


void AHeroesBuilder_Grid::onMouseMoveListener()
{
	TRACE_CPUPROFILER_EVENT_SCOPE(AHeroesBuilder_Grid::onMouseMoveListener)
	{
		APlayerController* playerController = UGameplayStatics::GetPlayerController(GetWorld(), 0);
		FVector worldLocation, worldDirection;

		if (playerController->DeprojectMousePositionToWorld(worldLocation, worldDirection))
		{
			FHitResult outHit;
			FVector start = worldLocation;
			FVector end = worldLocation + worldDirection * 1000000;

			if (GetWorld()->LineTraceSingleByChannel(outHit, start, end, this->gridChannel))
			{
				FVector hitLocation = outHit.Location;
				TWeakObjectPtr<class AActor> actor = outHit.GetActor();
				int32 tileX, tileY;

				if (this->worldLocationToTile(hitLocation, tileX, tileY))
				{
					FVector location;
					if (this->tileToWorldLocation(tileX, tileY, location))
					{
						if (ensureAlwaysMsgf(IsValid(this->delegate.GetObject()), TEXT("No Delegate provided for Grid %s"), *this->GetName()))
						{
							TRACE_CPUPROFILER_EVENT_SCOPE(IHeroesBuilder_IGridDelegate::onGridMouseOver)
							{
								IHeroesBuilder_IGridDelegate::Execute_onGridMouseOver(this->delegate.GetObject(), this, location, this->GetActorRotation());
							}
						}
					}
				}
			}
		}
	}
}


void AHeroesBuilder_Grid::clearUnavailableTiles()
{
	this->tileAvailabilityProcedureMesh->ClearAllMeshSections();
}


void AHeroesBuilder_Grid::showCurrentUnavailableTiles()
{
	this->clearUnavailableTiles();

	TArray<FHeroesBuilder_GridTile> tiles;

	for (int32 i = 0; i < this->buildingsActors.Num(); i++)
	{
		TArray<FHeroesBuilder_GridTile> actorTiles = this->buildingsActors[i]->getGridTiles(this);

		tiles.Append(actorTiles);
	}

	this->showUnavailableTiles(tiles);
}


void AHeroesBuilder_Grid::showUnavailableTiles(const TArray<FHeroesBuilder_GridTile>& tiles)
{
	this->tileAvailabilityProcedureMesh->ClearAllMeshSections();

	// -- MOCK -- 
	TArray<FVector> normals;
	TArray<FVector2D> uv;
	TArray<FColor> vertexColor;
	TArray<FProcMeshTangent> tangent;
	// -- MOCK -- 

	TArray<FVector> vertices;
	TArray<int32> triangles;

	float halfTileSize = this->tileSize / 2.0f;

	for (int32 i = 0; i < tiles.Num(); i++)
	{
		FVector center;
		if (tileToRelativeLocation(tiles[i].tileX, tiles[i].tileY, center))
		{
			vertices += {
				FVector(center.X - halfTileSize, center.Y - halfTileSize, this->floorOffsetZ + this->lineOffsetZ),
					FVector(center.X + halfTileSize, center.Y - halfTileSize, this->floorOffsetZ + this->lineOffsetZ),
					FVector(center.X - halfTileSize, center.Y + halfTileSize, this->floorOffsetZ + this->lineOffsetZ),
					FVector(center.X + halfTileSize, center.Y + halfTileSize, this->floorOffsetZ + this->lineOffsetZ)
			};

			triangles += {
				i * 4 + 2,  // x0;y1
					i * 4 + 1,  // x1;y0 
					i * 4 + 0,  // x0;y0
					i * 4 + 2,  // x0;y1
					i * 4 + 3,  // x1;y1
					i * 4 + 1   // x1;y0  
			};
		}
	}

	this->tileAvailabilityProcedureMesh->CreateMeshSection(0, vertices, triangles, normals, uv, vertexColor, tangent, false);
	this->tileAvailabilityProcedureMesh->SetMaterial(0, this->unavailableMaterial);
}


bool AHeroesBuilder_Grid::worldLocationToTile(FVector location, int32& tileX, int32& tileY) const
{
	FVector localeLocation = UKismetMathLibrary::InverseTransformLocation(this->GetTransform(), location);

	return this->relativeLocationToTile(localeLocation, tileX, tileY);
}


bool AHeroesBuilder_Grid::relativeLocationToTile(FVector location, int32& tileX, int32& tileY) const
{
	tileX = floor(location.X / this->tileSize);
	tileY = floor(location.Y / this->tileSize);

	//ex:
	//   0 / (128 / 2) -> 0
	//  63 / (128 / 2) -> 0
	//  64 / (128 / 2) -> 1
	// 100 / (128 / 2) -> 1
	// 127 / (128 / 2) -> 1
	// 128 / (128 / 2) -> 2

	return this->tileIsValid(tileX, tileY);
}


bool AHeroesBuilder_Grid::tileToWorldLocation(int32 tileX, int32 tileY, FVector& location) const
{
	if (this->tileIsValid(tileX, tileY))
	{
		FVector localeLocation = {
			(tileX + 0.5f) * ((float)this->tileSize),
			(tileY + 0.5f) * ((float)this->tileSize),
			0
		};

		location = UKismetMathLibrary::TransformLocation(this->GetTransform(), localeLocation);

		return true;
	}
	else
	{
		return false;
	}
}


bool AHeroesBuilder_Grid::tileToRelativeLocation(int32 tileX, int32 tileY, FVector& location) const
{
	if (this->tileIsValid(tileX, tileY))
	{
		location = {
			(tileX + 0.5f) * ((float)this->tileSize),
			(tileY + 0.5f) * ((float)this->tileSize),
			this->floorOffsetZ
		};
		return true;
	}
	else
	{
		return false;
	}
}


bool AHeroesBuilder_Grid::tileIsValid(int32 tileX, int32 tileY) const
{
	return ((tileX >= 0) && (tileY >= 0) && (tileX < this->width) && (tileY < this->height));
}


bool AHeroesBuilder_Grid::tilesFit(const TArray<FHeroesBuilder_GridTile>& tiles) const
{
	if (tiles.Num() == 0) {
		return false;
	}

	for (int32 i = 0; i < tiles.Num(); i++)
	{
		if (!this->tileIsValid(tiles[i].tileX, tiles[i].tileY))
		{
			return false;
		}
	}

	return true;
}



int32 AHeroesBuilder_Grid::getGridWidth() const
{ 
	return this->width; 
}

int32 AHeroesBuilder_Grid::getGridHeigh() const
{ 
	return this->height; 
}



FHeroesBuilder_GridTileInfo AHeroesBuilder_Grid::getTileInfo(int32 tileX, int32 tileY)
{
	TRACE_CPUPROFILER_EVENT_SCOPE(AHeroesBuilder_Grid::getTileInfo)
	{
		FHeroesBuilder_GridTileInfo tileInfo = FHeroesBuilder_GridTileInfo(tileX, tileY);

		if (UHeroesBuilder_FunctionLibrary::tileIn({ tileX, tileY }, 0, 0, this->getGridWidth() - 1, this->getGridHeigh() - 1))
		{
			this->prepareOptimizedTiles();
			tileInfo.setBuilding(this->optimizedTiles[tileX][tileY].Get());
		}
		return tileInfo;
	}
}


TArray<FHeroesBuilder_GridTileInfo> AHeroesBuilder_Grid::getTilesInfo(int32 fromTileWidthPosition, int32 fromTileHeighPosition, int32 toTileWidthPosition, int32 toTileHeighPosition)
{
	TRACE_CPUPROFILER_EVENT_SCOPE(AHeroesBuilder_Grid::getTilesInfo)
	{
		TArray<FHeroesBuilder_GridTileInfo> infos;

		for (int32 i = fromTileWidthPosition; i <= toTileWidthPosition; i++)
		{
			for (int32 o = fromTileHeighPosition; o <= toTileHeighPosition; o++)
			{
				infos.Add(this->getTileInfo(i, o));
			}
		}

		return infos;
	}
}


TArray<FHeroesBuilder_GridTileInfo> AHeroesBuilder_Grid::getTilesInfoFromTilesList(const TArray<FHeroesBuilder_GridTile>& forTiles)
{
	TRACE_CPUPROFILER_EVENT_SCOPE(AHeroesBuilder_Grid::getTilesInfoFromTilesList)
	{
		TArray<FHeroesBuilder_GridTileInfo> tilesInfo;

		for (int32 i = 0; i < forTiles.Num(); i++)
		{
			tilesInfo.Add(this->getTileInfo(forTiles[i].tileX, forTiles[i].tileY));
		}
		return tilesInfo;
	}
}



void AHeroesBuilder_Grid::unvalidOptimizedTiles()
{
	this->optimizedTilesPrepared = false;
}

void AHeroesBuilder_Grid::prepareOptimizedTiles()
{
	TRACE_CPUPROFILER_EVENT_SCOPE(AHeroesBuilder_Grid::prepareOptimizedTiles)
	{
		if (!this->optimizedTilesPrepared)
		{
			// Rebuid array
			this->optimizedTiles.Reset(this->getGridWidth());
			for (int32 i = 0; i < this->getGridWidth(); i++)
			{
				TArray<TWeakObjectPtr<AHeroesBuilder_BuildingActor>> heighArray;
				heighArray.Reserve(this->getGridHeigh());

				for (int32 o = 0; o <= this->getGridHeigh(); o++)
				{
					heighArray.Add(nullptr);
				}
				this->optimizedTiles.Add(heighArray);
			}

			// Register
			for (int32 i = 0; i < this->buildingsActors.Num(); i++)
			{
				TArray<FHeroesBuilder_GridTile> buildingTiles = this->buildingsActors[i]->getGridTiles(this);

				for (int32 o = 0; o < buildingTiles.Num(); o++)
				{
					if (UHeroesBuilder_FunctionLibrary::tileIn(buildingTiles[o], 0, 0, this->getGridWidth() - 1, this->getGridHeigh() - 1))
					{
						this->optimizedTiles[buildingTiles[o].tileX][buildingTiles[o].tileY] = this->buildingsActors[i];
					}
				}
			}

			this->optimizedTilesPrepared = true;
		}
	}
}




void AHeroesBuilder_Grid::registerBuilding(AHeroesBuilder_BuildingActor* buildingActor, bool quietly)
{
	if (IsValid(buildingActor))
	{
		this->unvalidOptimizedTiles();

		buildingActor->attachToGrid(this);
		this->buildingsActors.Add(buildingActor);

		if (!quietly) {
			this->onBuildingAdded.Broadcast(this, buildingActor);
		}

		this->clearUnavailableTiles();
	}
}


void AHeroesBuilder_Grid::unregisterBuilding(AHeroesBuilder_BuildingActor* buildingActor, bool quietly)
{
	if (IsValid(buildingActor))
	{
		this->unvalidOptimizedTiles();

		buildingActor->detachFromGrid();
		this->buildingsActors.Remove(buildingActor);

		if(!quietly) {
			this->onBuildingRemoved.Broadcast(this, buildingActor);
		}

		this->clearUnavailableTiles();
	}
}


bool AHeroesBuilder_Grid::buildingIsColliding(const AHeroesBuilder_BuildingActor* buildingActor, TArray<AHeroesBuilder_BuildingActor*>& collidingBuildings, TArray<FHeroesBuilder_GridTile>& itersections) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(AHeroesBuilder_Grid::buildingIsColliding)
	{
		TArray<FHeroesBuilder_GridTile> buildingTiles = buildingActor->getGridTiles(this);

		AHeroesBuilder_Grid* that = const_cast<AHeroesBuilder_Grid*>(this);
		TArray<FHeroesBuilder_GridTileInfo> tileInfo = that->getTilesInfoFromTilesList(buildingTiles);

		for (int32 i = 0; i < tileInfo.Num(); i++)
		{
			if (IsValid(tileInfo[i].getBuilding()))
			{
				collidingBuildings.AddUnique(tileInfo[i].getBuilding());
				itersections.Append(tileInfo);
			}
		}

		return (itersections.Num() > 0);

		/**
		// test building position&size again all buildings position&size
		for (int32 i = 0; i < this->buildingsActors.Num(); i++)
		{
			TArray<FHeroesBuilder_GridTile> tiles = buildingsActors[i]->getGridTiles(this);
			TArray<FHeroesBuilder_GridTile> intersection = UHeroesBuilder_FunctionLibrary::tilesIntersect(buildingTiles, tiles);

			if (intersection.Num() > 0)
			{
				collidingBuildings.Add(this->buildingsActors[i]);
				itersections.Append(intersection);
			}
		}

		return (itersections.Num() > 0);
		**/
	}
}

#if WITH_EDITOR

void AHeroesBuilder_Grid::PostEditMove(bool bFinished)
{
	Super::PostEditMove(bFinished);

	if (bFinished)
	{
		FTransform modifications = this->GetTransform();

		TArray<AHeroesBuilder_BuildingActor*> buildingsActorsTmp = TArray<AHeroesBuilder_BuildingActor*>(this->buildingsActors);
		this->buildingsActors.Empty();

		for (int32 i = 0; i < buildingsActorsTmp.Num(); i++)
		{
			if (IsValid(buildingsActorsTmp[i]))
			{
				buildingsActorsTmp[i]->PostEditMove(true);
			}
		}
	}
}

void AHeroesBuilder_Grid::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	this->SetActorScale3D(FVector(1, 1, 1));

	Super::PostEditChangeProperty(PropertyChangedEvent);

	if (!this->IsTemplate())
	{
		this->PostEditMove(true);
	}
}


void AHeroesBuilder_Grid::EditorApplyScale(const FVector& DeltaScale, const FVector* PivotLocation, bool bAltDown, bool bShiftDown, bool bCtrlDown)
{
	this->SetActorScale3D(FVector(1, 1, 1));

	// Super::EditorApplyScale(DeltaScale, PivotLocation, bAltDown, bShiftDown, bCtrlDown);
}


void AHeroesBuilder_Grid::onLevelActorDeleted()
{
	if (this->buildingsActors.Num() > 0)
	{
		this->cleanBuildings_Editor();
	}
}

void AHeroesBuilder_Grid::onLevelSaved(class UWorld* world, FObjectPreSaveContext ObjectSaveContext)
{
	if (this->buildingsActors.Num() > 0)
	{
		this->cleanBuildings_Editor();
	}
}

void AHeroesBuilder_Grid::registerBuilding_Editor(AHeroesBuilder_BuildingActor* building)
{
	this->registerBuilding(building, true);
}

void AHeroesBuilder_Grid::unregisterBuilding_Editor(AHeroesBuilder_BuildingActor* building)
{
	this->unregisterBuilding(building, true);
}

void AHeroesBuilder_Grid::cleanBuildings_Editor()
{
	for (int32 i = this->buildingsActors.Num() - 1; i >= 0; i--)
	{
		if (!IsValid(this->buildingsActors[i]))
		{
			this->buildingsActors.RemoveAt(i);
		}
	}
}

#endif // WITH_EDITOR



void AHeroesBuilder_Grid::generateSquare(float startX, float startY, float endX, float endY, float z, TArray<FVector>& vertices, TArray<int32>& triangles)
{
	vertices.Append({
		FVector(startX, startY, z),
		FVector(endX, startY, z),
		FVector(startX, endY, z),
		FVector(endX, endY, z)
		});
	triangles.Append({ 2, 1, 0, 2, 3, 1 });
}

void AHeroesBuilder_Grid::generateWitdhSquareLines(int32 first, int32 last, int32 step, float squareSize, float squareLineThickness, int32& offset, TArray<FVector>& vertices, TArray<int32>& triangles)
{
	float lineStartX;
	float lineEndX;
	float lineStartY;
	float lineEndY;

	// -- width lines
	for (int32 i = first; i < last; i += step)
	{
		lineStartX = (i * squareSize) - squareLineThickness;
		lineStartY = 0 - squareLineThickness;

		lineEndX = (i * squareSize) + squareLineThickness;
		lineEndY = (this->height * this->tileSize) + squareLineThickness;

		vertices += {
			FVector(lineStartX, lineStartY, this->floorOffsetZ + this->lineOffsetZ),
				FVector(lineEndX, lineStartY, this->floorOffsetZ + this->lineOffsetZ),
				FVector(lineStartX, lineEndY, this->floorOffsetZ + this->lineOffsetZ),
				FVector(lineEndX, lineEndY, this->floorOffsetZ + this->lineOffsetZ)
		};
		triangles += { offset + 2, offset + 1, offset + 0, offset + 2, offset + 3, offset + 1 };
		offset += 4;
	}
}

void AHeroesBuilder_Grid::generateHeightSquareLines(int32 first, int32 last, int32 step, float squareSize, float squareLineThickness, int32& offset, TArray<FVector>& vertices, TArray<int32>& triangles)
{
	float lineStartX;
	float lineEndX;
	float lineStartY;
	float lineEndY;

	// -- height lines
	for (int32 i = first; i < last; i += step)
	{
		lineStartX = 0 - squareLineThickness;
		lineStartY = (i * squareSize) - squareLineThickness;

		lineEndX = (this->width * this->tileSize) + squareLineThickness;
		lineEndY = (i * squareSize) + squareLineThickness;

		vertices += {
			FVector(lineStartX, lineStartY, this->floorOffsetZ + this->lineOffsetZ),
				FVector(lineEndX, lineStartY, this->floorOffsetZ + this->lineOffsetZ),
				FVector(lineStartX, lineEndY, this->floorOffsetZ + this->lineOffsetZ),
				FVector(lineEndX, lineEndY, this->floorOffsetZ + this->lineOffsetZ)
		};
		triangles += { offset + 2, offset + 1, offset + 0, offset + 2, offset + 3, offset + 1 };
		offset += 4;
	}
}