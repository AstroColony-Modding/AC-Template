#pragma once
#include "CoreMinimal.h"
#include "EEHPlanetoidSurfaceDetailType.generated.h"

UENUM(BlueprintType)
enum class EEHPlanetoidSurfaceDetailType : uint8 {
    None,
    RockSmallA,
    RockSmallB,
    RockSmallC,
    RockMediumA,
    RockMediumB,
    RockMediumC,
    RockLargeA,
    RockLargeB,
    RockLargeC,
    DebrisA,
    DebrisB,
    DebrisC,
    BushA,
    BushB,
    BushC,
    GrassA,
    GrassB,
    GrassC,
    _MAX UMETA(Hidden),
};

