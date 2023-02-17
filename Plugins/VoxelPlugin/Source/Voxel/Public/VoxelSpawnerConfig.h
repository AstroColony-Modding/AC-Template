#pragma once
#include "CoreMinimal.h"
#include "EVoxelSpawnerConfigRayWorldType.h"
#include "VoxelSpawnerCollection.h"
#include "VoxelSpawnerConfigFiveWayBlendSetup.h"
#include "VoxelSpawnerConfig.generated.h"

UCLASS(Blueprintable)
class VOXEL_API UVoxelSpawnerConfig : public UVoxelSpawnerCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVoxelSpawnerConfigRayWorldType WorldType;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoxelSpawnerConfigFiveWayBlendSetup FiveWayBlendSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVoxelSpawnerCollection*> Collections;
    
    UVoxelSpawnerConfig();
};

