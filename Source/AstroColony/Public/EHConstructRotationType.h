#pragma once
#include "CoreMinimal.h"
#include "EHConstructRotationType.generated.h"

UENUM(BlueprintType)
enum class EHConstructRotationType : uint8 {
    Default,
    LockCollectiveRotation,
    UseDragRotation,
    UserCantChangeRotation,
    NoRotationForceZero,
};

