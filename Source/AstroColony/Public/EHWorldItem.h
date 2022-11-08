#pragma once
#include "CoreMinimal.h"
#include "EHInteractableItem.h"
#include "EEHMiningResourceType.h"
#include "UObject/NoExportTypes.h"
#include "EHWorldItem.generated.h"

class UEHItem;

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHWorldItem : public UEHInteractableItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEHMiningResourceType MiningResourceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHItem* HarvestedItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector HarvestCoordOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DepositMinQuantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DepositMaxQuantity;
    
    UEHWorldItem();
};

