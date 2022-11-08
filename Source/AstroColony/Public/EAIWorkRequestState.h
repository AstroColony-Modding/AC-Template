#pragma once
#include "CoreMinimal.h"
#include "EAIWorkRequestState.generated.h"

UENUM(BlueprintType)
enum class EAIWorkRequestState : uint8 {
    None,
    Found,
    PrimaryTarget,
    SecondaryTarget,
    Completed,
    Frozen,
};

