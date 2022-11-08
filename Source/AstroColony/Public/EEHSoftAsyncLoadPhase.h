#pragma once
#include "CoreMinimal.h"
#include "EEHSoftAsyncLoadPhase.generated.h"

UENUM(BlueprintType)
enum class EEHSoftAsyncLoadPhase : uint8 {
    PrimaryAssets,
    DataProvider,
    GameplayList,
    Vehicles,
    Map,
    Interface,
    _MAX UMETA(Hidden),
};

