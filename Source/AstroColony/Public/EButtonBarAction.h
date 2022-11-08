#pragma once
#include "CoreMinimal.h"
#include "EButtonBarAction.generated.h"

UENUM(BlueprintType)
enum class EButtonBarAction : uint8 {
    BACK,
    CONTINUE,
    SETTINGS_RESTORE_DEFAULT,
    OPEN_OPTIONS,
    APPLY_CHANGES,
    TAB_NAVIGATE_NEXT,
    TAB_NAVIGATE_PREVIOUS,
    TAB_NEXT_SUBSCREEN,
    TAB_PREVIOUS_SUBSCREEN,
};

