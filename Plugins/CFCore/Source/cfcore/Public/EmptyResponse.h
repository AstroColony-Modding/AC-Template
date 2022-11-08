#pragma once
#include "CoreMinimal.h"
#include "EmptyResponse.generated.h"

USTRUCT(BlueprintType)
struct FEmptyResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Data;
    
    CFCORE_API FEmptyResponse();
};

