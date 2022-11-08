#pragma once
#include "CoreMinimal.h"
#include "EEHUIPopupPriority.generated.h"

UENUM(BlueprintType)
enum class EEHUIPopupPriority : uint8 {
    HIGH,
    MEDIUM,
    LOW,
    NONE,
};

