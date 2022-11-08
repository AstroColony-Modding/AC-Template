#pragma once
#include "CoreMinimal.h"
#include "ETGLifecycleState.generated.h"

UENUM(BlueprintType)
enum class ETGLifecycleState : uint8 {
    Inactive,
    Alive,
    Dead,
};

