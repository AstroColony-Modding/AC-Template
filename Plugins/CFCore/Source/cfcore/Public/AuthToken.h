#pragma once
#include "CoreMinimal.h"
#include "AuthToken.generated.h"

USTRUCT(BlueprintType)
struct CFCORE_API FAuthToken {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Token;
    
    FAuthToken();
};

