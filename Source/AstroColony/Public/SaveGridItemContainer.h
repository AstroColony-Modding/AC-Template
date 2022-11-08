#pragma once
#include "CoreMinimal.h"
#include "SaveGridItem.h"
#include "SaveGridItemContainer.generated.h"

class UEHItem;

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FSaveGridItemContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHItem* Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSaveGridItem> Instances;
    
    FSaveGridItemContainer();
};

