#pragma once
#include "CoreMinimal.h"
#include "CFCoreApiResponseError.h"
#include "ECFCoreErrorCodes.h"
#include "CFCoreError.generated.h"

USTRUCT(BlueprintType)
struct CFCORE_API FCFCoreError {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isError;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECFCoreErrorCodes code;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCFCoreApiResponseError apiError;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Description;
    
    FCFCoreError();
};

