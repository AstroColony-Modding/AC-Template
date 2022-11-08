#pragma once
#include "CoreMinimal.h"
#include "EGameplayEffectDurationType.generated.h"

UENUM(BlueprintType)
enum class EGameplayEffectDurationType : uint8 {
    Instant,
    Infinite,
    HasDuration,
};

