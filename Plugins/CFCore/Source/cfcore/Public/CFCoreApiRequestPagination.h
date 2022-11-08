#pragma once
#include "CoreMinimal.h"
#include "CFCoreApiRequestPagination.generated.h"

USTRUCT(BlueprintType)
struct CFCORE_API FCFCoreApiRequestPagination {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 pageSize;
    
    FCFCoreApiRequestPagination();
};

