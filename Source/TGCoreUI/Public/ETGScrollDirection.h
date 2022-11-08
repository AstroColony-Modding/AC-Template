#pragma once
#include "CoreMinimal.h"
#include "ETGScrollDirection.generated.h"

UENUM(BlueprintType)
enum class ETGScrollDirection : uint8 {
    LEFT,
    RIGHT,
    UP,
    DOWN,
};

