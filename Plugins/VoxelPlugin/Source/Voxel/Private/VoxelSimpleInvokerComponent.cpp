#include "VoxelSimpleInvokerComponent.h"

FVector UVoxelSimpleInvokerComponent::GetInvokerGlobalPosition_Implementation() const {
    return FVector{};
}

UVoxelSimpleInvokerComponent::UVoxelSimpleInvokerComponent() {
    this->bUseForLOD = true;
    this->LODToSet = 0;
    this->LODRange = 1000.00f;
    this->bUseForCollisions = true;
    this->CollisionsRange = 1000.00f;
    this->bUseForNavmesh = true;
    this->NavmeshRange = 1000.00f;
}

