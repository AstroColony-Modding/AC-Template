#include "VoxelMeshSpawner.h"

UVoxelMeshSpawner::UVoxelMeshSpawner() {
    this->Mesh = NULL;
    this->DistanceBetweenInstancesInVoxel = 10.00f;
    this->InstanceRandom = EVoxelMeshSpawnerInstanceRandom::Random;
    this->bDistanceBetweenInstancesIsInCm = false;
    this->bAlwaysSpawnActor = false;
    this->bEnableHeightRestriction = false;
    this->HeightRestrictionFalloff = 0.00f;
    this->RotationAlignment = EVoxelBasicSpawnerRotation::AlignToWorldUp;
    this->bRandomYaw = true;
    this->RandomPitchAngle = 6.00f;
}

