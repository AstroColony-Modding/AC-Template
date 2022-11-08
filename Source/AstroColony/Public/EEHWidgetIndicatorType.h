#pragma once
#include "CoreMinimal.h"
#include "EEHWidgetIndicatorType.generated.h"

UENUM(BlueprintType)
enum class EEHWidgetIndicatorType : uint8 {
    Icon,
    InfoTextStatic,
    InfoTextRadial,
    _MAX UMETA(Hidden),
};

