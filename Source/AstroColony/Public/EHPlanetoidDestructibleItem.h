#pragma once
#include "CoreMinimal.h"
#include "EHDeviceItem.h"
#include "EHPlanetoidDestructibleItem.generated.h"

class UMaterialInterface;
class UEHItem;

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHPlanetoidDestructibleItem : public UEHDeviceItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> DestructibleMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHItem* DestructibleResoruce;
    
    UPROPERTY(EditAnywhere)
    uint8 DstructibleSpawnChance[6];
    
    UPROPERTY(EditAnywhere)
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

