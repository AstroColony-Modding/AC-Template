#pragma once
#include "CoreMinimal.h"
#include "EVoxelRGBA.h"
#include "EVoxelSpawnerDensityTransform.h"
#include "EVoxelSpawnerDensityType.h"
#include "EVoxelSpawnerUVAxis.h"
#include "VoxelGeneratorPicker.h"
#include "VoxelSpawnerOutputName.h"
#include "VoxelSpawnerDensity.generated.h"

USTRUCT(BlueprintType)
struct FVoxelSpawnerDensity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVoxelSpawnerDensityType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Constant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseMainGenerator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoxelGeneratorPicker CustomGenerator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVoxelSpawnerOutputName GeneratorOutputName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVoxelRGBA RGBAChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UVChannel;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EVoxelSpawnerUVAxis UVAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FiveWayBlendChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> SingleIndexChannels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> MultiIndexChannels;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EVoxelSpawnerDensityTransform Transform;
    
    VOXEL_API FVoxelSpawnerDensity();
};

