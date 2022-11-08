#pragma once
#include "CoreMinimal.h"
#include "VoxelStaticSubsystemProxy.h"
#include "VoxelSpawnerDebugSubsystemProxy.generated.h"

UCLASS(Blueprintable)
class VOXEL_API UVoxelSpawnerDebugSubsystemProxy : public UVoxelStaticSubsystemProxy {
    GENERATED_BODY()
public:
    UVoxelSpawnerDebugSubsystemProxy();
};

