#pragma once
#include "CoreMinimal.h"
#include "CFCoreApiResponsePagination.generated.h"

USTRUCT(BlueprintType)
struct CFCORE_API FCFCoreApiResponsePagination {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 pageSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 resultCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 totalCount;
    
    FCFCoreApiResponsePagination();
};

