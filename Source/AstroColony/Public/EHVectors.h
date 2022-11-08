#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EHVectors.generated.h"

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FEHVectors {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> Vectors;
    
    FEHVectors();
};

