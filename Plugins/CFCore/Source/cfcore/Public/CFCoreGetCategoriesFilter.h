#pragma once
#include "CoreMinimal.h"
#include "CFCoreGetCategoriesFilter.generated.h"

USTRUCT(BlueprintType)
struct CFCORE_API FCFCoreGetCategoriesFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 classId;
    
    FCFCoreGetCategoriesFilter();
};

