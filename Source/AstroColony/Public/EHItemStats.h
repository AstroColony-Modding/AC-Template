#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EHItemStats.generated.h"

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FEHItemStats : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 MaxStackSize;
    
    UPROPERTY(EditAnywhere)
    uint8 BuyCost;
    
    UPROPERTY(EditAnywhere)
    uint8 SellCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PickupTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PickupRange;
    
    FEHItemStats();
};

