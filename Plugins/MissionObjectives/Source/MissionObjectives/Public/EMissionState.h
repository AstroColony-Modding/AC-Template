#pragma once
#include "CoreMinimal.h"
#include "EMissionState.generated.h"

UENUM(BlueprintType)
enum class EMissionState : uint8 {
    None,
    InProgress,
    Successful,
    Failure,
};

