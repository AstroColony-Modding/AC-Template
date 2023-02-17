#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EVoxelBasicSpawnerScaling.h"
#include "VoxelBasicSpawnerScaleSettings.generated.h"

USTRUCT(BlueprintType)
struct FVoxelBasicSpawnerScaleSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVoxelBasicSpawnerScaling Scaling;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval ScaleX;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval ScaleY;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval ScaleZ;
    
    VOXEL_API FVoxelBasicSpawnerScaleSettings();
};

