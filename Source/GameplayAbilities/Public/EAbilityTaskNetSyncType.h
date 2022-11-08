#pragma once
#include "CoreMinimal.h"
#include "EAbilityTaskNetSyncType.generated.h"

UENUM(BlueprintType)
enum class EAbilityTaskNetSyncType : uint8 {
    BothWait,
    OnlyServerWait,
    OnlyClientWait,
};

