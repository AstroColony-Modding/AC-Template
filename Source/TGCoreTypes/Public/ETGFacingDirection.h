#pragma once
#include "CoreMinimal.h"
#include "ETGFacingDirection.generated.h"

UENUM(BlueprintType)
enum class ETGFacingDirection : uint8 {
    Left,
    Right,
    Forward,
    Back,
};

