#pragma once
#include "CoreMinimal.h"
#include "VoxelMaterial.h"
#include "UObject/NoExportTypes.h"
#include "VoxelPositionValueMaterial.generated.h"

USTRUCT(BlueprintType)
struct FVoxelPositionValueMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoxelMaterial Material;
    
    VOXEL_API FVoxelPositionValueMaterial();
};

