#pragma once
#include "CoreMinimal.h"
#include "VoxelSpawnerOutputName.generated.h"

USTRUCT(BlueprintType)
struct FVoxelSpawnerOutputName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    VOXEL_API FVoxelSpawnerOutputName();
};

