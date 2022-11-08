#pragma once
#include "CoreMinimal.h"
#include "EEHTrackableType.generated.h"

UENUM(BlueprintType)
enum class EEHTrackableType : uint8 {
    SpaceStation,
    Planetoid,
    Blackhole,
    MeteorRain,
    CometStrike,
    ElectromagneticField,
    _MAX UMETA(Hidden),
};

