#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VoxelMaterialCollectionBase.generated.h"

class UMaterialInterface;

UCLASS(Abstract, Blueprintable)
class VOXEL_API UVoxelMaterialCollectionBase : public UObject {
    GENERATED_BODY()
public:
    UVoxelMaterialCollectionBase();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInterface* GetIndexMaterial(uint8 Index) const;
    
};

