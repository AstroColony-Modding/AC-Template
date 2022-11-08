#pragma once
#include "CoreMinimal.h"
#include "EEHMiningResourceType.generated.h"

UENUM(BlueprintType)
enum class EEHMiningResourceType : uint8 {
    None,
    Stone,
    Ice,
    CoalOre,
    IronOre,
    CopperOre,
    GoldOre,
    AnorhiteOre,
    TitaniumOre,
    UraniumOre,
    Quartz,
    Dirt,
    _MAX UMETA(Hidden),
};

