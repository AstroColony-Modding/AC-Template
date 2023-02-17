#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EHPlanetoidDecalInfo.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FEHPlanetoidDecalInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Size;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 SpawnChance[6];
    
    FEHPlanetoidDecalInfo();
};

