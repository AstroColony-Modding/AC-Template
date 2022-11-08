#include "EHVoxelWorld.h"

class AEHCharacter;
class AVoxelWorld;


void AEHVoxelWorld::VoxelDiggingFinished(const FIntVector& Coord) {
}


void AEHVoxelWorld::RemoveVoxelOld(const FIntVector& Coord) {
}


void AEHVoxelWorld::OnValuesModified(const TArray<FModifiedVoxelValue>& ModifiedValues, AEHCharacter* Character) {
}

void AEHVoxelWorld::Multi_RemoveBox_Implementation(const FVoxelIntBox& BoxBounds, AEHCharacter* Character) {
}

void AEHVoxelWorld::Multi_AddVoxel_Implementation(const FIntVector& Coord) {
}


bool AEHVoxelWorld::HasParam(const FName ParamName) {
    return false;
}

void AEHVoxelWorld::HandleVoxelWorldLoaded(AVoxelWorld* VoxelWorld) {
}

EVoxelTerrainType AEHVoxelWorld::GetVoxelTypeFromLayer(const int32 LayerIndex) {
    return EVoxelTerrainType::Mud;
}

FIntVector AEHVoxelWorld::GetPlanetoidSize() {
    return FIntVector{};
}


void AEHVoxelWorld::AddVoxel(const FIntVector& Coord) {
}

AEHVoxelWorld::AEHVoxelWorld() {
    this->VoxelTerrainType = EVoxelTerrainType::Mud;
    this->VoxelShapeType = EVoxelShapeType::Bowl;
    this->SteepStep = 1.00f;
    this->IsRemovingVoxel = false;
    this->ColliderWorld = NULL;
    this->PlanetoidGrid = NULL;
    this->HigherNoise = 0.00f;
    this->LowerNoise = 0.00f;
}

