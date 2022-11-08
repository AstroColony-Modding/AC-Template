#pragma once
#include "CoreMinimal.h"
#include "VoxelMaterial.h"
#include "UObject/NoExportTypes.h"
#include "ModifiedVoxelMaterial.generated.h"

USTRUCT(BlueprintType)
struct FModifiedVoxelMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoxelMaterial OldMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoxelMaterial NewMaterial;
    
    VOXEL_API FModifiedVoxelMaterial();
};

