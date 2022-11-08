#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VoxelTransformableGeneratorPicker.h"
#include "VoxelGeneratorPicker.h"
#include "VoxelGeneratorCache.generated.h"

class UVoxelTransformableGeneratorInstanceWrapper;
class UVoxelGeneratorInstanceWrapper;

UCLASS(Blueprintable)
class VOXEL_API UVoxelGeneratorCache : public UObject {
    GENERATED_BODY()
public:
    UVoxelGeneratorCache();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVoxelTransformableGeneratorInstanceWrapper* MakeTransformableGeneratorInstance(FVoxelTransformableGeneratorPicker Picker) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVoxelGeneratorInstanceWrapper* MakeGeneratorInstance(FVoxelGeneratorPicker Picker) const;
    
};

