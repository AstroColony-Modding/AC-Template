#pragma once
#include "CoreMinimal.h"
#include "EHJobModeType.generated.h"

UENUM(BlueprintType)
enum class EHJobModeType : uint8 {
    None,
    Select,
    Construct,
    ModifyTerrain,
    PickUpItem,
    _MAX UMETA(Hidden),
};

