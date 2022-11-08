#pragma once
#include "CoreMinimal.h"
#include "EDockingState.generated.h"

UENUM(BlueprintType)
enum class EDockingState : uint8 {
    Undocked,
    Docking,
    Docked,
    ShuttleArrival,
};

