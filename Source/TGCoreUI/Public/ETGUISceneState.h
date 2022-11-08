#pragma once
#include "CoreMinimal.h"
#include "ETGUISceneState.generated.h"

UENUM(BlueprintType)
enum class ETGUISceneState : uint8 {
    Opening,
    Open,
    Closing,
    Closed,
};

