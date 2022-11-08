#pragma once
#include "CoreMinimal.h"
#include "EVoxelSpawnerConfigElementRandomGenerator.generated.h"

UENUM(BlueprintType)
enum class EVoxelSpawnerConfigElementRandomGenerator : uint8 {
    Sobol,
    Halton,
};

