#pragma once
#include "CoreMinimal.h"
#include "EVoxelSpawnerDensityTransform.generated.h"

UENUM()
enum class EVoxelSpawnerDensityTransform : int32 {
    Identity,
    OneMinus,
};

