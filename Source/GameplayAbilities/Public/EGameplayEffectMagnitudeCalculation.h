#pragma once
#include "CoreMinimal.h"
#include "EGameplayEffectMagnitudeCalculation.generated.h"

UENUM(BlueprintType)
enum class EGameplayEffectMagnitudeCalculation : uint8 {
    ScalableFloat,
    AttributeBased,
    CustomCalculationClass,
    SetByCaller,
};

