#pragma once
#include "CoreMinimal.h"
#include "EEHDecalType.generated.h"

UENUM(BlueprintType)
enum class EEHDecalType : uint8 {
    GateIn,
    GateOut,
    Electricity,
    Water,
    StationOrigin,
    SignalIn,
    SignalOut,
    _MAX UMETA(Hidden),
};

