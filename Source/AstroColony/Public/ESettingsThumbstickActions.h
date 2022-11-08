#pragma once
#include "CoreMinimal.h"
#include "ESettingsThumbstickActions.generated.h"

UENUM(BlueprintType)
enum class ESettingsThumbstickActions : uint8 {
    None,
    LeftStickUp,
    LeftStickLeftRight,
    LeftStickDown,
    RightStickUp,
    RightStickLeftRight,
    RightStickDown,
};

