#pragma once
#include "CoreMinimal.h"
#include "EVoxelSpawnerDensityType.generated.h"

UENUM(BlueprintType)
enum class EVoxelSpawnerDensityType : uint8 {
    Constant,
    GeneratorOutput,
    MaterialRGBA,
    MaterialUVs,
    MaterialFiveWayBlend,
    SingleIndex,
    MultiIndex,
};

