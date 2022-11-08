#pragma once
#include "CoreMinimal.h"
#include "VoxelRange.generated.h"

USTRUCT(BlueprintType)
struct FVoxelRange {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    double Min;
    
    UPROPERTY(EditAnywhere)
    double Max;
    
    VOXEL_API FVoxelRange();
};

