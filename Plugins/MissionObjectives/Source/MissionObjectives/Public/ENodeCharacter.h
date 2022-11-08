#pragma once
#include "CoreMinimal.h"
#include "ENodeCharacter.generated.h"

UENUM(BlueprintType)
enum class ENodeCharacter : uint8 {
    Neutral,
    Positive,
    Negative,
};

