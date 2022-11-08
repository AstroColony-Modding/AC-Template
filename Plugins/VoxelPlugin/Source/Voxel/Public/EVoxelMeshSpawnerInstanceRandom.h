#pragma once
#include "CoreMinimal.h"
#include "EVoxelMeshSpawnerInstanceRandom.generated.h"

UENUM(BlueprintType)
enum class EVoxelMeshSpawnerInstanceRandom : uint8 {
    Random,
    VoxelMaterial,
    ColorOutput,
};

