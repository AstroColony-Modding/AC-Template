#pragma once
#include "CoreMinimal.h"
#include "EPlayerActionType.generated.h"

UENUM(BlueprintType)
enum class EPlayerActionType : uint8 {
    Interact,
    Open,
    Select,
    Inspect,
    Extract,
    Enter,
    Leave,
    Cancel,
    Remove,
    RemoveSelected,
    RotateRight,
    RotateLeft,
    AddVoxel,
    Upgrade,
    Jump,
    Crouch,
    Turbo,
    NextVariant,
    PreviousVariant,
    Pick,
};

