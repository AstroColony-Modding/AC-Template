#pragma once
#include "CoreMinimal.h"
#include "ETGTargetFlags.generated.h"

UENUM(BlueprintType)
enum class ETGTargetFlags : uint8 {
    Nothing,
    Allies,
    Enemies,
    Everything,
};

