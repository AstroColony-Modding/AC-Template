#pragma once
#include "CoreMinimal.h"
#include "ETechNodePinType.generated.h"

UENUM(BlueprintType)
enum class ETechNodePinType : uint8 {
    Input,
    Output,
};

