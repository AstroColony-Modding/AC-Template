#pragma once
#include "CoreMinimal.h"
#include "EUnlockType.generated.h"

UENUM(BlueprintType)
enum class EUnlockType : uint8 {
    None,
    Item,
    Profession,
    Plant,
    Animal,
    GlobalPoint,
    GameplayEffect,
    Recipe,
    Custom,
};

