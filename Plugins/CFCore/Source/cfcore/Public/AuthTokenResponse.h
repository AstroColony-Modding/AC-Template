#pragma once
#include "CoreMinimal.h"
#include "AuthToken.h"
#include "AuthTokenResponse.generated.h"

USTRUCT(BlueprintType)
struct FAuthTokenResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAuthToken Data;
    
    CFCORE_API FAuthTokenResponse();
};

