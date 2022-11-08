#pragma once
#include "CoreMinimal.h"
#include "EGameplayTargetingConfirmation.generated.h"

UENUM(BlueprintType)
namespace EGameplayTargetingConfirmation {
    enum Type {
        Instant,
        UserConfirmed,
        Custom,
        CustomMulti,
    };
}

