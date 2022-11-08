#pragma once
#include "CoreMinimal.h"
#include "EAttributeBasedFloatCalculationType.generated.h"

UENUM(BlueprintType)
enum class EAttributeBasedFloatCalculationType : uint8 {
    AttributeMagnitude,
    AttributeBaseValue,
    AttributeBonusMagnitude,
    AttributeMagnitudeEvaluatedUpToChannel,
};

