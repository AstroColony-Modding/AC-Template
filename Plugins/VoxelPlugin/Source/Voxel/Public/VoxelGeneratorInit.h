#pragma once
#include "CoreMinimal.h"
#include "EVoxelRenderType.h"
#include "EVoxelMaterialConfig.h"
#include "VoxelGeneratorInit.generated.h"

class UVoxelMaterialCollectionBase;
class AVoxelWorld;

USTRUCT(BlueprintType)
struct VOXEL_API FVoxelGeneratorInit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VoxelSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WorldSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVoxelRenderType RenderType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVoxelMaterialConfig MaterialConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVoxelMaterialCollectionBase* MaterialCollection;
    
    UPROPERTY(EditAnywhere)
    TWeakObjectPtr<AVoxelWorld> World;
    
    FVoxelGeneratorInit();
};

