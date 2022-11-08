#include "VoxelCookingLibrary.h"

class AVoxelWorld;

FVoxelCookingSettings UVoxelCookingLibrary::MakeVoxelCookingSettingsFromVoxelWorld(AVoxelWorld* World) {
    return FVoxelCookingSettings{};
}

void UVoxelCookingLibrary::LoadCookedVoxelData(FVoxelCookedData CookedData, AVoxelWorld* World) {
}

FVoxelCookedData UVoxelCookingLibrary::CookVoxelDataWithSave(FVoxelCookingSettings Settings, FVoxelUncompressedWorldSave SAVE) {
    return FVoxelCookedData{};
}

FVoxelCookedData UVoxelCookingLibrary::CookVoxelData(FVoxelCookingSettings Settings) {
    return FVoxelCookedData{};
}

UVoxelCookingLibrary::UVoxelCookingLibrary() {
}

