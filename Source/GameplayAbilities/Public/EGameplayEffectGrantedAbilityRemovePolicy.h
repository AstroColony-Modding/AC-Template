#pragma once
#include "CoreMinimal.h"
#include "EGameplayEffectGrantedAbilityRemovePolicy.generated.h"

UENUM(BlueprintType)
enum class EGameplayEffectGrantedAbilityRemovePolicy : uint8 {
    CancelAbilityImmediately,
    RemoveAbilityOnEnd,
    DoNothing,
};

