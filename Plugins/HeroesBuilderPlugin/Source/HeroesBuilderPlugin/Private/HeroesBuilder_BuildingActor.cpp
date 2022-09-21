// Copyright 2022 Eneff Nicolas. All Rights Reserved.


#include "HeroesBuilder_BuildingActor.h"
#include "HeroesBuilder_Grid.h"
#include "HeroesBuilder_FunctionLibrary.h"
#include "Components/SphereComponent.h"
#include "Components/BoxComponent.h"
#include "Components/ArrowComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Engine/Selection.h"


AHeroesBuilder_BuildingActor::AHeroesBuilder_BuildingActor()
{
	// Base scene
	USceneComponent* scene = CreateDefaultSubobject<USceneComponent>("Scene");
	this->SetRootComponent(scene);

	// Base scene
	this->root = CreateDefaultSubobject<USceneComponent>("SceneRoot");
	this->root->AttachToComponent(scene, FAttachmentTransformRules::KeepRelativeTransform);

	// Meshes containers
	this->meshes = CreateDefaultSubobject<USceneComponent>("Meshes");
	this->meshes->AttachToComponent(root, FAttachmentTransformRules::KeepRelativeTransform);

	// Visual Helpers
	this->directionY = CreateDefaultSubobject<UArrowComponent>("DY");
	this->directionY->AttachToComponent(root, FAttachmentTransformRules::KeepRelativeTransform);
	this->directionZ = CreateDefaultSubobject<UArrowComponent>("DZ");
	this->directionZ->AttachToComponent(root, FAttachmentTransformRules::KeepRelativeTransform);

	// Snap Guid
	this->snapGuide = CreateDefaultSubobject<USphereComponent>("SnapGuiude");
	this->snapGuide->AttachToComponent(root, FAttachmentTransformRules::KeepRelativeTransform);

	// 
	this->sizeBox = CreateDefaultSubobject<UBoxComponent>("SizeBox");
	this->sizeBox->AttachToComponent(root, FAttachmentTransformRules::KeepRelativeTransform);
	this->sizeBox->SetCollisionProfileName("NoCollision");
	this->sizeBox->CanCharacterStepUpOn = ECB_No;
	this->sizeBox->SetGenerateOverlapEvents(false);
}


void AHeroesBuilder_BuildingActor::OnConstruction(const FTransform& Transform)
{
	// Prevent scale
	this->SetActorScale3D(FVector(1, 1, 1));

	// Center of the actor
	FVector rootPosition = FVector(this->sizeX / 2.0f, this->sizeY / 2.0f, this->sizeZ / 2.0f);

	// Hierarchy placement
	root->SetRelativeLocation(FVector(-rootPosition.X, -rootPosition.Y, 0));
	this->sizeBox->SetRelativeLocation(FVector(rootPosition.X, rootPosition.Y, rootPosition.Z));
	this->meshes->SetRelativeLocation(FVector(rootPosition.X, rootPosition.Y, 0));

	// Arrows Helpers
	this->directionY->SetRelativeLocation(FVector(rootPosition.X, rootPosition.Y * 2, rootPosition.Z));
	this->directionY->SetRelativeRotation(FRotator(0, 90, 0));
	this->directionY->SetArrowColor(FLinearColor::Green);

	this->directionZ->SetRelativeLocation(FVector(rootPosition.X, rootPosition.Y, rootPosition.Z * 2));
	this->directionZ->SetRelativeRotation(FRotator(90, 0, 0));
	this->directionZ->SetArrowColor(FLinearColor::Blue);

	// Snap Guide
	this->snapGuide->SetVisibility(false);
	this->snapGuide->SetSphereRadius(this->snapDistance);

	// BoxSize
	this->sizeBox->SetBoxExtent(FVector(this->sizeX / 2.0f, this->sizeY / 2.0f, this->sizeZ / 2.0f));
}


int32 AHeroesBuilder_BuildingActor::getSizeX_Implementation() const
{
	return this->sizeX;
}

int32 AHeroesBuilder_BuildingActor::getSizeY_Implementation() const
{
	return this->sizeY;
}

void AHeroesBuilder_BuildingActor::rotate_Implementation(EHeroesBuilder_RotationDirection direction)
{
	if (direction == EHeroesBuilder_RotationDirection::CLOCK)
	{
		relativeRotation.Yaw += 90;
	}
	else if (direction == EHeroesBuilder_RotationDirection::COUNTER_CLOCK)
	{
		relativeRotation.Yaw -= 90;
	}
}

void AHeroesBuilder_BuildingActor::setRelativeRotation_Implementation(FRotator rotation)
{
	this->relativeRotation = rotation;
}

FRotator AHeroesBuilder_BuildingActor::getRelativeRotation_Implementation() const
{
	return this->relativeRotation;
}

void AHeroesBuilder_BuildingActor::attachToGrid_Implementation(AHeroesBuilder_Grid* grid)
{
	this->attachedGrid = grid;
}

void AHeroesBuilder_BuildingActor::detachFromGrid_Implementation()
{
	this->attachedGrid = nullptr;
}

AHeroesBuilder_Grid* AHeroesBuilder_BuildingActor::getGrid_Implementation() const
{
	return this->attachedGrid;
}

TArray<FHeroesBuilder_GridTile> AHeroesBuilder_BuildingActor::getGridTiles_Implementation(const AHeroesBuilder_Grid* grid) const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(AHeroesBuilder_BuildingActor::getGridTiles)
	{
		TArray<FHeroesBuilder_GridTile> tiles = UHeroesBuilder_FunctionLibrary::makeTiles(grid, this->GetActorLocation(), this->GetActorRotation(), this->sizeX, this->sizeY);
		return tiles;
	}
}

TArray<FHeroesBuilder_GridTileInfo> AHeroesBuilder_BuildingActor::getGridTilesInfo_Implementation() const
{
	TRACE_CPUPROFILER_EVENT_SCOPE(AHeroesBuilder_BuildingActor::getGridTilesInfo)
	{
		TArray<FHeroesBuilder_GridTileInfo> tiles;

		if (IsValid(this->attachedGrid))
		{
			int32 firstX, lastX, firstY, lastY;

			UHeroesBuilder_FunctionLibrary::makeSquareFromBuilding(
				this->attachedGrid, this->GetActorLocation(), this->GetActorRotation(), this->getSizeX(), this->getSizeY(),
				firstX, lastX, firstY, lastY
			);

			AHeroesBuilder_BuildingActor* self = const_cast<AHeroesBuilder_BuildingActor*>(this);

			// Generate tiles list
			for (int32 i = firstX; i <= lastX; i++)
			{
				for (int32 o = firstY; o <= lastY; o++)
				{
					tiles.Add(FHeroesBuilder_GridTileInfo(i, o, self));
				}
			}
		}

		return tiles;
	}
}

bool AHeroesBuilder_BuildingActor::isAttachedToGrid() const
{
	return IsValid(this->attachedGrid);
}


#if WITH_EDITOR

void AHeroesBuilder_BuildingActor::PostEditMove(bool bFinished)
{
	Super::PostEditMove(bFinished);

	// 
	if (!bFinished) 
	{
		this->ShowSnapGuideIfSelected_Editor();
	}

	// 
	if (bFinished && this->snapToClosestGrid)
	{
		TArray<AActor*> allGrids;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), AHeroesBuilder_Grid::StaticClass(), allGrids);

		// Get scene grids profiles
		TArray<FName> profiles;
		for (int32 i = 0; i < allGrids.Num(); i++)
		{
			AHeroesBuilder_Grid* grid = Cast<AHeroesBuilder_Grid>(allGrids[i]);

			if (IsValid(grid))
			{
				profiles.AddUnique(grid->getGridProfile());
			}
		}

		// Results stored for each grid encountered
		struct FGridResult 
		{
			AHeroesBuilder_Grid* grid;
			FHitResult result;
			float distance;

			FGridResult(AHeroesBuilder_Grid* withGrid, const FHitResult& withResult, float withDistance)
			{
				this->grid = withGrid;
				this->result = withResult;
				this->distance = withDistance;
			}
		};
		TArray<FGridResult> results;

		// Muti trace to gather their hit points
		for (int32 i = 0; i < profiles.Num(); i++)
		{
			TArray<AActor*> actorsToIgnore;
			TArray<FHitResult> outHits;

			UKismetSystemLibrary::SphereTraceMultiByProfile(GetWorld(), this->GetActorLocation(), this->GetActorLocation(), this->snapDistance, profiles[i], false, actorsToIgnore, EDrawDebugTrace::None, outHits, true);

			for (int32 o = 0; o < outHits.Num(); o++)
			{
				AHeroesBuilder_Grid* grid = Cast<AHeroesBuilder_Grid>(outHits[o].GetActor());

				if (IsValid(grid))
				{
					TArray<FHeroesBuilder_GridTile> tiles = UHeroesBuilder_FunctionLibrary::makeTiles(grid, this->GetActorLocation(), this->GetActorRotation(), this->sizeX, this->sizeY);
					if (grid->tilesFit(tiles))
					{
						results.Add(FGridResult(grid, outHits[o], FVector::Distance(this->GetActorLocation(), outHits[o].ImpactPoint)));
					}
				}
			}
		}

		if (results.Num() > 0)
		{
			FGridResult bestResult = results[0];

			// refine to the best one if more than 1 result
			for (int32 i = 1; i < results.Num(); i++)
			{
				if (results[i].distance < bestResult.distance)
				{
					bestResult = results[i];
				}
			}

			int32 tileX, tileY;
			FVector newLocation;
			bestResult.grid->worldLocationToTile(this->GetActorLocation(), tileX, tileY);
			bestResult.grid->tileToWorldLocation(tileX, tileY, newLocation);

			this->SetActorLocation(newLocation);

			FRotator currentBuildingRotation = this->GetActorRotation();
			currentBuildingRotation.Normalize();

			// Convert to Locale grid space and normalize the Yaw to be multiple of 90
			FRotator actorGridRelativeRotation = UKismetMathLibrary::InverseTransformRotation(bestResult.grid->GetTransform(), currentBuildingRotation);
			this->relativeRotation = FRotator(0, round(actorGridRelativeRotation.Yaw / 90.f) * 90, 0);

			// Convert back to grid space
			this->SetActorRotation(UKismetMathLibrary::TransformRotation(bestResult.grid->GetTransform(), this->relativeRotation));

			if (IsValid(this->attachedGrid)) {
				this->attachedGrid->unregisterBuilding_Editor(this);
			}
			this->attachedGrid = nullptr;

			bestResult.grid->registerBuilding_Editor(this);
			this->attachedGrid = bestResult.grid;
		}
		else
		{
			// no result found, we detach if needed
			if (IsValid(this->attachedGrid))
			{
				this->attachedGrid->unregisterBuilding_Editor(this);
				this->attachedGrid = nullptr;
			}

			// In case we undo the value might have been changed before we reached here
			// So we cycle through grids to remove all building instances that might be still here
			else
			{
				for (int32 i = 0; i < allGrids.Num(); i++)
				{
					AHeroesBuilder_Grid* grid = Cast<AHeroesBuilder_Grid>(allGrids[i]);
					if (IsValid(grid))
					{
						grid->unregisterBuilding_Editor(this);
					}
				}
			}
		}
	}
}

void AHeroesBuilder_BuildingActor::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	this->SetActorScale3D(FVector(1, 1, 1));

	Super::PostEditChangeProperty(PropertyChangedEvent);

	if (!this->IsTemplate())
	{
		this->PostEditMove(true);
	}
}

void AHeroesBuilder_BuildingActor::EditorApplyScale(const FVector& DeltaScale, const FVector* PivotLocation, bool bAltDown, bool bShiftDown, bool bCtrlDown)
{
	this->SetActorScale3D(FVector(1, 1, 1));
}

void AHeroesBuilder_BuildingActor::ShowSnapGuideIfSelected_Editor()
{
	if (this->IsSelectedInEditor())
	{
		this->snapGuide->SetVisibility(this->snapToClosestGrid);
	}
	else
	{
		this->snapGuide->SetVisibility(false);
	}
}

#endif // WITH_EDITOR



FString AHeroesBuilder_BuildingActor::getLogName() const
{
	FString logName;

	logName.Append("<");
	logName.Append(this->GetName());
	logName.Append(">");

	return logName;
}