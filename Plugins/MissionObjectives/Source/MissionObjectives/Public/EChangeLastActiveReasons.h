#pragma once
#include "CoreMinimal.h"
#include "EChangeLastActiveReasons.generated.h"

UENUM(BlueprintType)
enum class EChangeLastActiveReasons : uint8 {
    MissionStarted,
    ObjectiveUpdated,
    ObjectiveCompleted,
};

