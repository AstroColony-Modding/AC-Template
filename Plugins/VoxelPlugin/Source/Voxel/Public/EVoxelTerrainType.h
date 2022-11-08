#pragma once
#include "CoreMinimal.h"
#include "EVoxelTerrainType.generated.h"

UENUM(BlueprintType)
enum class EVoxelTerrainType : uint8 {
    Mud,
    Frozen,
    Gravel,
    Sand,
    Volcanic,
    Moss,
    None,
    Ice,
    Stone,
    Quartz,
    Magma,
    Water,
    _MAX UMETA(Hidden),
};

