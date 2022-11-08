#pragma once
#include "CoreMinimal.h"
#include "ETGAbilitySlot.generated.h"

UENUM(BlueprintType)
enum class ETGAbilitySlot : uint8 {
    AbilityA,
    AbilityB,
    AbilityC,
    Passive,
};

