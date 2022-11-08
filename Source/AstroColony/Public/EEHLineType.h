#pragma once
#include "CoreMinimal.h"
#include "EEHLineType.generated.h"

UENUM(BlueprintType)
enum class EEHLineType : uint8 {
    White,
    Blue,
    Orange,
    Missing,
    _MAX UMETA(Hidden),
};

