#include "VoxelPlaceableItemActor.h"

class AVoxelWorld;

int32 AVoxelPlaceableItemActor::K2_GetPriority_Implementation() const {
    return 0;
}

void AVoxelPlaceableItemActor::K2_AddItemToWorld_Implementation(AVoxelWorld* World) {
}

AVoxelPlaceableItemActor::AVoxelPlaceableItemActor() {
    this->PreviewWorld = NULL;
    this->bOnlyImportIntoPreviewWorld = true;
}

