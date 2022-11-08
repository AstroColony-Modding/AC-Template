#include "VoxelVolumeInvokerComponent.h"

UVoxelVolumeInvokerComponent::UVoxelVolumeInvokerComponent() {
    this->bUseForLOD = true;
    this->LODToSet = 0;
    this->bUseForCollisions = false;
    this->bUseForNavmesh = false;
}

