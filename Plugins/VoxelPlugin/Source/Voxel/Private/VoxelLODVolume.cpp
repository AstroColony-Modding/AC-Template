#include "VoxelLODVolume.h"
#include "VoxelVolumeInvokerComponent.h"

AVoxelLODVolume::AVoxelLODVolume() {
    this->InvokerComponent = CreateDefaultSubobject<UVoxelVolumeInvokerComponent>(TEXT("Invoker Component"));
}

