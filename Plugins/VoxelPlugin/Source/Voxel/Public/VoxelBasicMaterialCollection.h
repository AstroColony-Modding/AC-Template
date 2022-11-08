#pragma once
#include "CoreMinimal.h"
#include "VoxelMaterialCollectionBase.h"
#include "VoxelBasicMaterialCollectionLayer.h"
#include "VoxelBasicMaterialCollection.generated.h"

UCLASS(Blueprintable)
class VOXEL_API UVoxelBasicMaterialCollection : public UVoxelMaterialCollectionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVoxelBasicMaterialCollectionLayer> Layers;
    
    UVoxelBasicMaterialCollection();
};

