#pragma once
#include "CoreMinimal.h"
#include "CFCoreApiResponsePagination.h"
#include "CFCoreMod.h"
#include "ModArrayResponse.generated.h"

USTRUCT(BlueprintType)
struct FModArrayResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCFCoreMod> Data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCFCoreApiResponsePagination pagination;
    
    CFCORE_API FModArrayResponse();
};

