#pragma once
#include "CoreMinimal.h"
#include "EHDeviceItem.h"
#include "EHPlanetoidDestructibleItem.generated.h"

class UEHItem;
class UMaterialInterface;

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHPlanetoidDestructibleItem : public UEHDeviceItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> DestructibleMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHItem* DestructibleResoruce;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 DstructibleSpawnChance[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnDensity[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsUniqueCollectableItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartNoiseRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MapOutNoiseRangeChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinChanceToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomizeSwappingChance;
    
    UEHPlanetoidDestructibleItem();
};

