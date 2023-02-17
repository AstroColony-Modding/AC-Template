#pragma once
#include "CoreMinimal.h"
#include "Terms.h"
#include "TermsResponse.generated.h"

USTRUCT(BlueprintType)
struct FTermsResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTerms Data;
    
    CFCORE_API FTermsResponse();
};

