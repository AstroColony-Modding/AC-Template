#pragma once
#include "CoreMinimal.h"
#include "EEHPreviewVehicleActions.generated.h"

UENUM(BlueprintType)
enum class EEHPreviewVehicleActions : uint8 {
    None,
    StrafeLeft,
    StrafeRight,
    Land = 0x4,
    SaveOxygen = 0x8,
    Excavate = 0x10,
    BoosterJump = 0x20,
};

