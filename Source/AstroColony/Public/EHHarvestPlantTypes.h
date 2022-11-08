#pragma once
#include "CoreMinimal.h"
#include "EHHarvestPlantTypes.generated.h"

UENUM(BlueprintType)
enum class EHHarvestPlantTypes : uint8 {
    None,
    Wheat,
    Tree,
    Tomatoes,
    Sunflower,
    Potato,
    NopalCactus,
    TigerLily,
    Rosemary,
    _MAX UMETA(Hidden),
};

