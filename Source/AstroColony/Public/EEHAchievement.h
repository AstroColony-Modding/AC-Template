#pragma once
#include "CoreMinimal.h"
#include "EEHAchievement.generated.h"

UENUM(BlueprintType)
enum class EEHAchievement : uint8 {
    FIRST_TECH,
    BARRIER_OXYGEN,
    MOVE,
    GROW_PLANT,
    BREED_ANIMAL,
    SIGNAL,
    NEXT_UNIVERSE,
    LOGIC_CIRCUIT,
    BLACK_HOLE,
    FIRST_COLONIST,
    FIRST_VEHICLE,
    METEOR_RAIN,
    COMET,
    ELECTRICSTORM,
    FOUND_COLONY,
    END_GAME,
    _MAX UMETA(Hidden),
};

