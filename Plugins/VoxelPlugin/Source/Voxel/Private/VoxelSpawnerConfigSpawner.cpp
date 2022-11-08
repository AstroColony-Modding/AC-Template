#include "VoxelSpawnerConfigSpawner.h"

FVoxelSpawnerConfigSpawner::FVoxelSpawnerConfigSpawner() {
    this->Spawner = NULL;
    this->SpawnerType = EVoxelSpawnerType::Ray;
    this->ChunkSize_EditorOnly = 0;
    this->LOD = 0;
    this->GenerationDistanceInVoxels_EditorOnly = 0;
    this->GenerationDistanceInChunks = 0;
    this->bInfiniteGenerationDistance = false;
    this->bSave = false;
    this->bDoNotDespawn = false;
    this->Seed = 0;
    this->RandomGenerator = EVoxelSpawnerConfigElementRandomGenerator::Sobol;
    this->bComputeDensityFirst_HeightOnly = false;
    this->bCheckIfFloating_HeightOnly = false;
    this->bCheckIfCovered_HeightOnly = false;
}

