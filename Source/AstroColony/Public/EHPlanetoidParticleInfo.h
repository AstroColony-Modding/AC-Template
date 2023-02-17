#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EHPlanetoidParticleInfo.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FEHPlanetoidParticleInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UParticleSystem> Particle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Offset;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 SpawnChance[6];
    
    FEHPlanetoidParticleInfo();
};

