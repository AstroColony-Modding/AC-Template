#pragma once
#include "CoreMinimal.h"
#include "EEHMetamorphosisType.generated.h"

UENUM(BlueprintType)
enum class EEHMetamorphosisType : uint8 {
    TransformPipe,
    FarmLand,
    Pasture,
    Water,
    Electric,
    Fundation,
    Pillar,
    Signal,
    TypeMet,
    TypeMet2,
    TypeMet3,
    TypeMet4,
    Undefined,
};

