#pragma once
#include "CoreMinimal.h"
#include "ERepAnimPositionMethod.generated.h"

UENUM(BlueprintType)
enum class ERepAnimPositionMethod : uint8 {
    Position,
    CurrentSectionId,
};

