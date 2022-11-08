#pragma once
#include "CoreMinimal.h"
#include "EHVisualMeshAsset.h"
#include "EHHarvestPlantTypes.h"
#include "EHPlantMeshAsset.generated.h"

class UEHItem;

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHPlantMeshAsset : public UEHVisualMeshAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHHarvestPlantTypes HarvestPlantType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPlantBig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrowingPhaseTime;
    
    UPROPERTY(EditAnywhere)
    uint8 ConsumedPhaseWater;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHItem* ProducedResource;
    
    UEHPlantMeshAsset();
};

