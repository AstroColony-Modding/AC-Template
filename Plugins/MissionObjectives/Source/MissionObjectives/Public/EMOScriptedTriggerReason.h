#pragma once
#include "CoreMinimal.h"
#include "EMOScriptedTriggerReason.generated.h"

UENUM(BlueprintType)
enum class EMOScriptedTriggerReason : uint8 {
    None,
    NodeActivated,
    ObjectiveCompleted,
    _MAX UMETA(Hidden),
};

