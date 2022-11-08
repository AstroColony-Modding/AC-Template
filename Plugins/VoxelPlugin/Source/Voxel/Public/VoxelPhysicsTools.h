#pragma once
#include "CoreMinimal.h"
#include "Engine/LatentActionManager.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "VoxelIntBox.h"
#include "VoxelPhysicsTools.generated.h"

class UVoxelPhysicsPartSpawnerResult;
class IVoxelPhysicsPartSpawnerResult;
class UObject;
class AVoxelWorld;
class UVoxelPhysicsPartSpawner;
class IVoxelPhysicsPartSpawner;

UCLASS(Blueprintable)
class VOXEL_API UVoxelPhysicsTools : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVoxelPhysicsTools();
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void ApplyVoxelPhysics(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<TScriptInterface<IVoxelPhysicsPartSpawnerResult>>& Results, AVoxelWorld* World, FVoxelIntBox Bounds, TScriptInterface<IVoxelPhysicsPartSpawner> PartSpawner, int32 MinParts, bool bDebug, bool bHideLatentWarnings);
    
};

