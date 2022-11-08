#pragma once
#include "CoreMinimal.h"
#include "EInstanceCellType.generated.h"

UENUM(BlueprintType)
enum class EInstanceCellType : uint8 {
    None,
    Block,
    Resource,
    AI,
    Logic,
    Visual,
    Floor,
    Wall,
    DiagonalWall,
};

