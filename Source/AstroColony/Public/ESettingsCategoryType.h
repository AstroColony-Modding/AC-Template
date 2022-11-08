#pragma once
#include "CoreMinimal.h"
#include "ESettingsCategoryType.generated.h"

UENUM(BlueprintType)
enum class ESettingsCategoryType : uint8 {
    None,
    Audio,
    Video,
    Gameplay,
    Interface,
    Controls,
    MouseAndKeyboard,
    Gamepad,
    ChangeKeyBindings,
    ChangeControllerBindings,
};

