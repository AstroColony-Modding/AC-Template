#pragma once
#include "CoreMinimal.h"
#include "EHHumanNeedID.h"
#include "EHHumanNeed.generated.h"

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FEHHumanNeed {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHHumanNeedID NeedID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    FEHHumanNeed();
};

