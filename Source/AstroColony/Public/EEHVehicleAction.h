#pragma once
#include "CoreMinimal.h"
#include "EEHVehicleAction.generated.h"

UENUM(BlueprintType)
enum class EEHVehicleAction : uint8 {
    StrafeLeft,
    StrafeRight,
    Land,
    SaveOxygen,
    Excavate,
    BoosterJump,
};

