#pragma once
#include "CoreMinimal.h"
#include "EHBreedAnimalTypes.generated.h"

UENUM(BlueprintType)
enum class EHBreedAnimalTypes : uint8 {
    None,
    Pig,
    Chicken,
    Cow,
    Sheep,
    _MAX UMETA(Hidden),
};

