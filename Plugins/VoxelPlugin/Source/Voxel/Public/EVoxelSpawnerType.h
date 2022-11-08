#pragma once
#include "CoreMinimal.h"
#include "EVoxelSpawnerType.generated.h"

UENUM()
enum class EVoxelSpawnerType : int32 {
    Ray,
    Height,
};

