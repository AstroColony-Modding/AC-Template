#pragma once
#include "CoreMinimal.h"
#include "VoxelStaticSubsystemProxy.h"
#include "VoxelSpawnerSubsystemProxy.generated.h"

UCLASS(Abstract, Blueprintable)
class VOXEL_API UVoxelSpawnerSubsystemProxy : public UVoxelStaticSubsystemProxy {
    GENERATED_BODY()
public:
    UVoxelSpawnerSubsystemProxy();
};

