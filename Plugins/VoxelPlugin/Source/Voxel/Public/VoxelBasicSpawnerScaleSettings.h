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
    
    UPROPERTY(EditAnywhere)
    FFloatInterval ScaleX;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval ScaleY;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval ScaleZ;
    
    VOXEL_API FVoxelBasicSpawnerScaleSettings();
};

