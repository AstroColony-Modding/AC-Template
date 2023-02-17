#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EVoxelSpawnerConfigElementRandomGenerator.h"
#include "EVoxelSpawnerType.h"
#include "VoxelSpawnerDensity.h"
#include "VoxelSpawnerOutputName.h"
#include "VoxelSpawnerConfigSpawner.generated.h"

class UVoxelMeshSpawner;

USTRUCT(BlueprintType)
struct FVoxelSpawnerConfigSpawner {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVoxelMeshSpawner* Spawner;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EVoxelSpawnerType SpawnerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoxelSpawnerDensity Density;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoxelSpawnerDensity DensityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoxelSpawnerOutputName HeightGraphOutputName_HeightOnly;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ChunkSize_EditorOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LOD;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 GenerationDistanceInVoxels_EditorOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GenerationDistanceInChunks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInfiniteGenerationDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoNotDespawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Seed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVoxelSpawnerConfigElementRandomGenerator RandomGenerator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid Guid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bComputeDensityFirst_HeightOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckIfFloating_HeightOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckIfCovered_HeightOnly;
    
    VOXEL_API FVoxelSpawnerConfigSpawner();
};

