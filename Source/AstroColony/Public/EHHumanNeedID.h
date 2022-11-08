#pragma once
#include "CoreMinimal.h"
#include "EHHumanNeedID.generated.h"

UENUM(BlueprintType)
enum class EHHumanNeedID : uint8 {
    None,
    Oxygen,
    Thirst,
    Hunger,
    Toilet,
    Temperature,
    Comfort,
    Sleep,
};

