#pragma once
#include "CoreMinimal.h"
#include "EEHUIUnderlayID.generated.h"

UENUM(BlueprintType)
enum class EEHUIUnderlayID : uint8 {
    None,
    Background,
    RetainFocus,
    _MAX UMETA(Hidden),
};

