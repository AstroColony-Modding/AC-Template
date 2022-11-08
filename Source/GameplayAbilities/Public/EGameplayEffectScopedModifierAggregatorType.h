#pragma once
#include "CoreMinimal.h"
#include "EGameplayEffectScopedModifierAggregatorType.generated.h"

UENUM(BlueprintType)
enum class EGameplayEffectScopedModifierAggregatorType : uint8 {
    CapturedAttributeBacked,
    Transient,
};

