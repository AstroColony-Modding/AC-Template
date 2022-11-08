#pragma once
#include "CoreMinimal.h"
#include "VoxelSpawnerGroupChild.generated.h"

class UVoxelMeshSpawner;

USTRUCT(BlueprintType)
struct FVoxelSpawnerGroupChild {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVoxelMeshSpawner* Spawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Probability;
    
    VOXEL_API FVoxelSpawnerGroupChild();
};

