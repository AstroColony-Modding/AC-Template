#pragma once
#include "CoreMinimal.h"
#include "EHItem.h"
#include "EHFloorItem.generated.h"

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHFloorItem : public UEHItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsCornerFloor;
    
    UEHFloorItem();
};

