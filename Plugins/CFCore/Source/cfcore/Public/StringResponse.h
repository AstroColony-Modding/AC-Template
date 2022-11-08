#pragma once
#include "CoreMinimal.h"
#include "StringResponse.generated.h"

USTRUCT(BlueprintType)
struct FStringResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Data;
    
    CFCORE_API FStringResponse();
};

