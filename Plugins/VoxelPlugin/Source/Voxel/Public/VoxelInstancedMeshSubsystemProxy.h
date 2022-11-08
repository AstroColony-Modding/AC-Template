#pragma once
#include "CoreMinimal.h"
#include "VoxelStaticSubsystemProxy.h"
#include "VoxelInstancedMeshSubsystemProxy.generated.h"

UCLASS(Blueprintable)
class VOXEL_API UVoxelInstancedMeshSubsystemProxy : public UVoxelStaticSubsystemProxy {
    GENERATED_BODY()
public:
    UVoxelInstancedMeshSubsystemProxy();
};

