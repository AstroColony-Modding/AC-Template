#include "VoxelPhysicsTools.h"

class AVoxelWorld;
class IVoxelPhysicsPartSpawner;
class UVoxelPhysicsPartSpawner;
class IVoxelPhysicsPartSpawnerResult;
class UVoxelPhysicsPartSpawnerResult;
class UObject;

void UVoxelPhysicsTools::ApplyVoxelPhysics(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<TScriptInterface<IVoxelPhysicsPartSpawnerResult>>& Results, AVoxelWorld* World, FVoxelIntBox Bounds, TScriptInterface<IVoxelPhysicsPartSpawner> PartSpawner, int32 MinParts, bool bDebug, bool bHideLatentWarnings) {
}

UVoxelPhysicsTools::UVoxelPhysicsTools() {
}

