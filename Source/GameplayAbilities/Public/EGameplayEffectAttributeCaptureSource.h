#pragma once
#include "CoreMinimal.h"
#include "EGameplayEffectAttributeCaptureSource.generated.h"

UENUM(BlueprintType)
enum class EGameplayEffectAttributeCaptureSource : uint8 {
    Source,
    Target,
};

