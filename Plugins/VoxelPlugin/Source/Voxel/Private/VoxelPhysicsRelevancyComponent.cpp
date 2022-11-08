#include "VoxelPhysicsRelevancyComponent.h"

UVoxelPhysicsRelevancyComponent::UVoxelPhysicsRelevancyComponent() {
    this->MaxVoxelChunksLODForPhysics = 2;
    this->TimeToWaitBeforeActivating = 1.00f;
    this->TickInterval = 0.10f;
}

