#pragma once
#include "CoreMinimal.h"
#include "EAsteroidCatchStateChanged.generated.h"

UENUM(BlueprintType)
enum class EAsteroidCatchStateChanged : uint8 {
    Attracted,
    Catched,
    AttractedRemoved,
    ProcessedRemoved,
    ProcessedEnd,
};

