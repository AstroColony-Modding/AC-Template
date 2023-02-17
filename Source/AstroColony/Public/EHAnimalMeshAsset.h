#pragma once
#include "CoreMinimal.h"
#include "EHAnimalSize.h"
#include "EHBreedAnimalTypes.h"
#include "EHVisualMeshAsset.h"
#include "EHAnimalMeshAsset.generated.h"

class UEHItem;

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHAnimalMeshAsset : public UEHVisualMeshAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHBreedAnimalTypes BreedAnimalType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHAnimalSize AnimalSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrowingPhaseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ConsumedPhaseWater;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ConsumedPhaseGrain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHItem* ProducedResource;
    
    UEHAnimalMeshAsset();
};

