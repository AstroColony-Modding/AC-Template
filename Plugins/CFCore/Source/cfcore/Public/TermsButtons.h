#pragma once
#include "CoreMinimal.h"
#include "TermsButton.h"
#include "TermsButtons.generated.h"

USTRUCT(BlueprintType)
struct CFCORE_API FTermsButtons {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTermsButton agree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTermsButton disagree;
    
    FTermsButtons();
};

