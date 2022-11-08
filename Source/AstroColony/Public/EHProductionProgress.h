#pragma once
#include "CoreMinimal.h"
#include "EHProgress.h"
#include "EHProductionProgress.generated.h"

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FEHProductionProgress : public FEHProgress {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    FEHProductionProgress();
};

