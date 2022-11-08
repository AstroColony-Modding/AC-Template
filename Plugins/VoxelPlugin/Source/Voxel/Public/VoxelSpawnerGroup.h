#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VoxelSpawnerGroupChild.h"
#include "VoxelSpawnerGroup.generated.h"

UCLASS(Blueprintable)
class VOXEL_API UVoxelSpawnerGroup : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNormalizeProbabilitiesOnEdit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVoxelSpawnerGroupChild> Children;
    
    UVoxelSpawnerGroup();
};

