#pragma once
#include "CoreMinimal.h"
#include "EAnimalGrowingPhase.generated.h"

UENUM(BlueprintType)
enum class EAnimalGrowingPhase : uint8 {
    NoAnimal,
    Animal,
    WateringOne,
    GrowingOne,
    FeedingOne,
    GrowingTwo,
    WateringTwo,
    GrowingThree,
    FeedingTwo,
    GrowingFour,
    ReadyToHarvest,
    Harvesting,
    _MAX UMETA(Hidden),
};

