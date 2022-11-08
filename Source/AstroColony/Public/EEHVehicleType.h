#pragma once
#include "CoreMinimal.h"
#include "EEHVehicleType.generated.h"

UENUM(BlueprintType)
enum class EEHVehicleType : uint8 {
    Rover,
    Spacecraft,
    Vehicle3,
    _MAX UMETA(Hidden),
};

