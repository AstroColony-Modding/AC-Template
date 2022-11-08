#pragma once
#include "CoreMinimal.h"
#include "EEHVehiclePartMirrorType.generated.h"

UENUM(BlueprintType)
enum class EEHVehiclePartMirrorType : uint8 {
    None,
    LeftRight,
    RearFront,
    All,
    _MAX UMETA(Hidden),
};

