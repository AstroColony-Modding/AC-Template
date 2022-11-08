#pragma once
#include "CoreMinimal.h"
#include "EDialogBoxElementType.generated.h"

UENUM(BlueprintType)
enum class EDialogBoxElementType : uint8 {
    None,
    Button,
    CurrencyButton,
};

