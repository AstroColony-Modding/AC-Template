#pragma once
#include "CoreMinimal.h"
#include "VoxelSpawnerSubsystemProxy.h"
#include "VoxelSpawnerImplSubsystemProxy.generated.h"

UCLASS(Blueprintable)
class VOXEL_API UVoxelSpawnerImplSubsystemProxy : public UVoxelSpawnerSubsystemProxy {
    GENERATED_BODY()
public:
    UVoxelSpawnerImplSubsystemProxy();
};

