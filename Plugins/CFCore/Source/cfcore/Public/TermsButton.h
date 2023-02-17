#pragma once
#include "CoreMinimal.h"
#include "TermsButton.generated.h"

USTRUCT(BlueprintType)
struct CFCORE_API FTermsButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Text;
    
    FTermsButton();
};

