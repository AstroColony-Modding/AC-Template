#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VoxelGeneratorPicker.h"
#include "VoxelSpawnerConfigSpawner.h"
#include "VoxelSpawnerCollection.generated.h"

UCLASS(Blueprintable)
class VOXEL_API UVoxelSpawnerCollection : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoxelGeneratorPicker MainGeneratorForDropdowns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVoxelSpawnerConfigSpawner> Spawners;
    
    UVoxelSpawnerCollection();
};

