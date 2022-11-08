#pragma once
#include "CoreMinimal.h"
#include "EEHVehiclePartType.generated.h"

UENUM(BlueprintType)
enum class EEHVehiclePartType : uint8 {
    Chassis,
    Wheel,
    Thruster,
    Drill,
    Container,
    ShipBody,
    Windshield,
    WingLeft,
    WingRight,
    WingletLeft,
    WingletRight,
    LandingLegs,
    Gun,
    Booster,
    _MAX UMETA(Hidden),
};

