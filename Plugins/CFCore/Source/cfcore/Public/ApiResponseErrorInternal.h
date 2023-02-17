#pragma once
#include "CoreMinimal.h"
#include "ApiResponseErrorInternal.generated.h"

USTRUCT(BlueprintType)
struct FApiResponseErrorInternal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 statusCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Message;
    
    CFCORE_API FApiResponseErrorInternal();
};

