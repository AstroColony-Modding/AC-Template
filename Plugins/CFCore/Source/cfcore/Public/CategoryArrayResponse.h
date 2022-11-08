#pragma once
#include "CoreMinimal.h"
#include "Category.h"
#include "CategoryArrayResponse.generated.h"

USTRUCT(BlueprintType)
struct FCategoryArrayResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCategory> Data;
    
    CFCORE_API FCategoryArrayResponse();
};

