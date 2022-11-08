#pragma once
#include "CoreMinimal.h"
#include "EGlobalPointType.generated.h"

UENUM(BlueprintType)
enum class EGlobalPointType : uint8 {
    None,
    Coin,
    BasicScience,
    EngineeringScience,
    ChemistryScience,
    BiologyScience,
    SpaceScience,
    HighTechScience,
    Electricity,
    Water,
    Oxygen,
    _MAX UMETA(Hidden),
};

