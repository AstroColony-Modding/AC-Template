#pragma once
#include "CoreMinimal.h"
#include "EHItemInstance.h"
#include "EHItemsTranche.generated.h"

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FEHItemsTranche {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEHItemInstance> ItemTranches;
    
    FEHItemsTranche();
};

