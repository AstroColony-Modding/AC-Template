#include "VoxelDataItemActor.h"

class AVoxelWorld;

void AVoxelDataItemActor::ScheduleRefresh() {
}

void AVoxelDataItemActor::K2_AddItemToWorld_Implementation(AVoxelWorld* World) {
}

AVoxelDataItemActor::AVoxelDataItemActor() {
    this->bAutomaticUpdates = true;
    this->RefreshDelay = 0.10f;
}

