#pragma once
#include "CoreMinimal.h"
#include "EVoxelShapeType.generated.h"

UENUM(BlueprintType)
enum class EVoxelShapeType : uint8 {
    Bowl,
    Donut,
    Boomerang,
    Bullet,
    Spike,
    Cauliflower,
    Fang,
    Elipsoid,
    Spheroid,
    Crater,
    _MAX UMETA(Hidden),
};

