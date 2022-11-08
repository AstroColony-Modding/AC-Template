#pragma once
#include "CoreMinimal.h"
#include "EGameplayAbilityTriggerSource.generated.h"

UENUM(BlueprintType)
namespace EGameplayAbilityTriggerSource {
    enum Type {
        GameplayEvent,
        OwnedTagAdded,
        OwnedTagPresent,
    };
}

