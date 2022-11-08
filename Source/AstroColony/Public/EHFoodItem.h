#pragma once
#include "CoreMinimal.h"
#include "EHResourceItem.h"
#include "EHFoodItem.generated.h"

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHFoodItem : public UEHResourceItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RestoreHungerRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RestoreHungerTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLiquidFood;
    
    UEHFoodItem();
};

