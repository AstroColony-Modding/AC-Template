#pragma once
#include "CoreMinimal.h"
#include "EButtonBarItemVisibility.generated.h"

UENUM(BlueprintType)
enum class EButtonBarItemVisibility : uint8 {
    NONE,
    ALWAYS,
    ONLY_MOUSE_AND_KEYBOARD,
    ONLY_GAMEPAD,
};

