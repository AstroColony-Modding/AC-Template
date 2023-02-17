#include "AbilityTask_WaitVelocityChange.h"

class UAbilityTask_WaitVelocityChange;
class UGameplayAbility;

UAbilityTask_WaitVelocityChange* UAbilityTask_WaitVelocityChange::CreateWaitVelocityChange(UGameplayAbility* OwningAbility, FVector Direction, float MinimumMagnitude) {
    return NULL;
}

UAbilityTask_WaitVelocityChange::UAbilityTask_WaitVelocityChange() {
    this->CachedMovementComponent = NULL;
}

