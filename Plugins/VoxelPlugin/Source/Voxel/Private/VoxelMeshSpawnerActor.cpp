#include "VoxelMeshSpawnerActor.h"
#include "Components/StaticMeshComponent.h"

AVoxelMeshSpawnerActor::AVoxelMeshSpawnerActor() {
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh Component"));
}

