#include "EHChunk.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

class AEHPlanetoidGrid;
class AVoxelWorld;

void AEHChunk::UpdateCollision(bool InCollisionsEnabled) {
}

void AEHChunk::SpawnVoxelWorld(AEHPlanetoidGrid* EHPlanetoidGrid, const bool IsPlanet, const int32 Index) {
}

void AEHChunk::SpawnCelestialBodies() {
}

void AEHChunk::OnRep_SmallPlanetoidGrids() {
}

void AEHChunk::OnRep_PlanetoidGrid() {
}

void AEHChunk::OnChunkGenerated_Implementation() {
}



void AEHChunk::HandleWorldLoaded(AVoxelWorld* VoxelWorld) {
}



TArray<FEHCelestialBodyGeneration> AEHChunk::GetCelestialGenerations(const EChunkGenerationType GenerationTyp) {
    return TArray<FEHCelestialBodyGeneration>();
}

void AEHChunk::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AEHChunk, ProcedurallyGenerated);
    DOREPLIFETIME(AEHChunk, ChunkCoords);
    DOREPLIFETIME(AEHChunk, PlanetoidGrid);
    DOREPLIFETIME(AEHChunk, SmallPlanetoidGrids);
}

AEHChunk::AEHChunk() {
    this->ProcedurallyGenerated = false;
    this->ChunkGenerationType = EChunkGenerationType::None;
    this->ColliderWorldTemplate = NULL;
    this->PlanetoidTemplate = NULL;
    this->NoiseMultiplyX = 2;
    this->NoiseMultiplyY = 2;
    this->NoiseMultiplyZ = 2;
    this->GenerateChance = 1.00f;
    this->ZOffsetVoxelWorld = -45.00f;
    this->ZOffsetPlanetoidGrid = 0.00f;
    this->CollisionsEnabled = false;
    this->ColliderDeactivateTime = 20.00f;
    this->IsLoadedFromSavegame = false;
    this->CelestialBodiesGenerated = false;
    this->SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->PlanetoidGrid = NULL;
    this->CelestialBody = NULL;
}

