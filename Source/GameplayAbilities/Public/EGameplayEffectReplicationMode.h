#pragma once
#include "CoreMinimal.h"
#include "EGameplayEffectReplicationMode.generated.h"

UENUM(BlueprintType)
enum class EGameplayEffectReplicationMode : uint8 {
    Minimal,
    Mixed,
    Full,
};

