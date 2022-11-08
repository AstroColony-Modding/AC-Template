#pragma once
#include "CoreMinimal.h"
#include "EEditorPreviewState.generated.h"

UENUM(BlueprintType)
enum class EEditorPreviewState : uint8 {
    None,
    Active,
    Pressed,
    Selected = 0x4,
    Hovered = 0x10,
};

