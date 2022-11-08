#pragma once
#include "CoreMinimal.h"
#include "EHCraftingObject.h"
#include "OnPlayerExecuteActionDelegate.h"
#include "EHOxygenGenerator.generated.h"

class UEHItem;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHOxygenGenerator : public UEHCraftingObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerExecuteAction OnPlayerExecuteRefillOxygen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHItem* ManualRefillItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHItem* BarrierRefillItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OxygenAmountToRefill;
    
    UEHOxygenGenerator();
};

