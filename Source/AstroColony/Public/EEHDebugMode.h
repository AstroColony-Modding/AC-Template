#pragma once
#include "CoreMinimal.h"
#include "EEHDebugMode.generated.h"

UENUM(BlueprintType)
enum class EEHDebugMode : uint8 {
    None,
    Grid,
    Universe,
    PriorityOrder,
    SmoothMovement,
};

