#pragma once
#include "CoreMinimal.h"
#include "VoxelMaterial.h"
#include "UObject/NoExportTypes.h"
#include "VoxelFindClosestNonEmptyVoxelResult.generated.h"

USTRUCT(BlueprintType)
struct FVoxelFindClosestNonEmptyVoxelResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuccess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoxelMaterial Material;
    
    VOXEL_API FVoxelFindClosestNonEmptyVoxelResult();
};

