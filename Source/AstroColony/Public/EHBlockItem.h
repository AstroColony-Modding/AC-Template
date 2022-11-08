#pragma once
#include "CoreMinimal.h"
#include "EHItem.h"
#include "EHBlockItem.generated.h"

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHBlockItem : public UEHItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BlockSupportsFloorConstruction;
    
    UEHBlockItem();
};

