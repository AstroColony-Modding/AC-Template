#include "VoxelMeshWithPhysicsRelevancySpawnerActor.h"
#include "VoxelPhysicsRelevancyComponent.h"

AVoxelMeshWithPhysicsRelevancySpawnerActor::AVoxelMeshWithPhysicsRelevancySpawnerActor() {
    this->PhysicsRelevancyComponent = CreateDefaultSubobject<UVoxelPhysicsRelevancyComponent>(TEXT("Voxel Physics Relevancy Component"));
}

