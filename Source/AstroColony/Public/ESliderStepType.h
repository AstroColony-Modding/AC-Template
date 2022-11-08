#pragma once
#include "CoreMinimal.h"
#include "ESliderStepType.generated.h"

UENUM(BlueprintType)
enum class ESliderStepType : uint8 {
    ValueStep,
    PercentageStep,
};

