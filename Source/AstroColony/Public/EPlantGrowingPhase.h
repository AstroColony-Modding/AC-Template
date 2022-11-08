#pragma once
#include "CoreMinimal.h"
#include "EPlantGrowingPhase.generated.h"

UENUM(BlueprintType)
enum class EPlantGrowingPhase : uint8 {
    NotPlanted,
    Planted,
    WateringOne,
    GrowingOne,
    WateringTwo,
    GrowingTwo,
    WateringThree,
    GrowingThree,
    ReadyToHarvest,
    Harvesting,
    _MAX UMETA(Hidden),
};

