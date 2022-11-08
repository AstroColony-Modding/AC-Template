#pragma once
#include "CoreMinimal.h"
#include "EEHToastNature.generated.h"

UENUM(BlueprintType)
enum class EEHToastNature : uint8 {
    Neutral,
    Positive,
    Negative,
    _MAX UMETA(Hidden),
};

