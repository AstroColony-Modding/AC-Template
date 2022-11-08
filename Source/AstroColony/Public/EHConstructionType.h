#pragma once
#include "CoreMinimal.h"
#include "EHConstructionType.generated.h"

UENUM(BlueprintType)
enum class EHConstructionType : uint8 {
    Floor,
    Wall,
    Device,
    Utilities,
    Mining,
    Farming,
    Paths,
    LogicBlocks,
    Gadgets,
    Resources,
    AI,
    _MAX UMETA(Hidden),
};

