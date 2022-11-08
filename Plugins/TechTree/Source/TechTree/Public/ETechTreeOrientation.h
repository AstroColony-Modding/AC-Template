#pragma once
#include "CoreMinimal.h"
#include "ETechTreeOrientation.generated.h"

UENUM(BlueprintType)
enum class ETechTreeOrientation : uint8 {
    Vertical,
    Horizontal,
    Custom,
};

