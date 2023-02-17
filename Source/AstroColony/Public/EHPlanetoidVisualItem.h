#pragma once
#include "CoreMinimal.h"
#include "EHVisualItem.h"
#include "EHPlanetoidVisualItem.generated.h"

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHPlanetoidVisualItem : public UEHVisualItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 VisualSpawnChance[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnDensity[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartNoiseRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MapOutNoiseRangeChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinChanceToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomizeSwappingChance;
    
    UEHPlanetoidVisualItem();
};

