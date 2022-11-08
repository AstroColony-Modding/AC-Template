#pragma once
#include "CoreMinimal.h"
#include "EPushDirection.generated.h"

UENUM(BlueprintType)
enum class EPushDirection : uint8 {
    Both,
    In,
    Out,
};

