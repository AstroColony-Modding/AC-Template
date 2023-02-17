#pragma once
#include "CoreMinimal.h"
#include "EVoxelTerrainType.h"
#include "EHLayerOverride.generated.h"

class UMaterialInstance;

USTRUCT(BlueprintType)
struct FEHLayerOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EVoxelTerrainType TerrainType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInstance> LayerMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ChanceToSpawn;
    
    ASTROCOLONY_API FEHLayerOverride();
};

