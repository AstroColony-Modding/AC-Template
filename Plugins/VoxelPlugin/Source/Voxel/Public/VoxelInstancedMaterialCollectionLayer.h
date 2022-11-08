#pragma once
#include "CoreMinimal.h"
#include "EVoxelTerrainType.h"
#include "VoxelInstancedMaterialCollectionLayer.generated.h"

class UMaterialInstance;

USTRUCT(BlueprintType)
struct FVoxelInstancedMaterialCollectionLayer {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 LayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* LayerMaterialInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVoxelTerrainType TerrainType;
    
    VOXEL_API FVoxelInstancedMaterialCollectionLayer();
};

