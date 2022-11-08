#pragma once
#include "CoreMinimal.h"
#include "VoxelSpawnerConfigFiveWayBlendSetup.generated.h"

USTRUCT(BlueprintType)
struct FVoxelSpawnerConfigFiveWayBlendSetup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFourWayBlend;
    
    VOXEL_API FVoxelSpawnerConfigFiveWayBlendSetup();
};

