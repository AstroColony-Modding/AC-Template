#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EChunkGenerationType.h"
#include "EHCelestialBodyGeneration.generated.h"

class UEHCelestialGenerationObject;

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FEHCelestialBodyGeneration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EChunkGenerationType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHCelestialGenerationObject* CelestialGenerationObject;
    
    FEHCelestialBodyGeneration();
};

