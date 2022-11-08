#pragma once
#include "CoreMinimal.h"
#include "EHItemInstance.generated.h"

class UEHItem;

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FEHItemInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHItem* Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Quantity;
    
    FEHItemInstance();
};

