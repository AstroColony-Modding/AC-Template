#pragma once
#include "CoreMinimal.h"
#include "EVoxelBasicSpawnerRotation.generated.h"

UENUM(BlueprintType)
enum class EVoxelBasicSpawnerRotation : uint8 {
    AlignToSurface,
    AlignToWorldUp,
    RandomAlign,
};

