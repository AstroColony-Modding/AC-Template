#pragma once
#include "CoreMinimal.h"
#include "EHAsteroidExtraction.generated.h"

class UEHResourceItem;

USTRUCT(BlueprintType)
struct FEHAsteroidExtraction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHResourceItem* ExtractedResource;
    
    UPROPERTY(EditAnywhere)
    uint8 NuberOfHits;
    
    ASTROCOLONY_API FEHAsteroidExtraction();
};

