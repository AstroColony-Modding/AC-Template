#include "VoxelLevelTools.h"

class UObject;
class AVoxelWorld;

void UVoxelLevelTools::LevelAsync(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVector& position, float Radius, float Falloff, float Height, bool bAdditive, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender, bool bHideLatentWarnings) {
}

void UVoxelLevelTools::Level(TArray<FModifiedVoxelValue>& ModifiedValues, FVoxelIntBox& EditedBounds, AVoxelWorld* VoxelWorld, const FVector& position, float Radius, float Falloff, float Height, bool bAdditive, bool bMultiThreaded, bool bRecordModifiedValues, bool bConvertToVoxelSpace, bool bUpdateRender) {
}

UVoxelLevelTools::UVoxelLevelTools() {
}

