#pragma once
#include "CoreMinimal.h"
#include "VoxelMaterialCollectionBase.h"
#include "VoxelLandscapeMaterialCollectionPermutation.h"
#include "VoxelLandscapeMaterialCollectionLayer.h"
#include "VoxelLandscapeMaterialCollection.generated.h"

class UMaterialInterface;
class UMaterialInstanceConstant;

UCLASS(Blueprintable)
class VOXEL_API UVoxelLandscapeMaterialCollection : public UVoxelMaterialCollectionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxMaterialsToBlendAtOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> LayersToIgnore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVoxelLandscapeMaterialCollectionLayer> Layers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FVoxelLandscapeMaterialCollectionPermutation, UMaterialInstanceConstant*> MaterialCache;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, FVoxelLandscapeMaterialCollectionLayer> IndicesToLayers;
    
public:
    UVoxelLandscapeMaterialCollection();
};

