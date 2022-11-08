#pragma once
#include "CoreMinimal.h"
#include "EVoxelBasicSpawnerScaling.generated.h"

UENUM(BlueprintType)
enum class EVoxelBasicSpawnerScaling : uint8 {
    Uniform,
    Free,
    LockXY,
};

