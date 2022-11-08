#pragma once
#include "CoreMinimal.h"
#include "EChunkGenerationType.generated.h"

UENUM(BlueprintType)
enum class EChunkGenerationType : uint8 {
    None,
    Planet,
    AsteroidDebris,
    BlackHole,
    MeteorRain,
    CometStrike,
    ElectromagneticField,
    FreezeBreaze,
    SolarWind,
    Nebula,
    Planetoid,
    _MAX UMETA(Hidden),
};

