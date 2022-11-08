#pragma once
#include "CoreMinimal.h"
#include "EEHScenarioFailureReason.generated.h"

UENUM(BlueprintType)
enum class EEHScenarioFailureReason : uint8 {
    None,
    PlayerDeath,
    TimesUp,
};

