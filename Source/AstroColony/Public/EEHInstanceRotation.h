#pragma once
#include "CoreMinimal.h"
#include "EEHInstanceRotation.generated.h"

UENUM(BlueprintType)
enum class EEHInstanceRotation : uint8 {
    Rot0,
    Rot90,
    Rot180,
    Rot270,
};

