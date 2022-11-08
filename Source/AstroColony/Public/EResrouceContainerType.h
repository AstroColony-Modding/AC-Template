#pragma once
#include "CoreMinimal.h"
#include "EResrouceContainerType.generated.h"

UENUM(BlueprintType)
enum class EResrouceContainerType : uint8 {
    Storage,
    Production,
    Required,
};

