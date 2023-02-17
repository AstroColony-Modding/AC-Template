#include "AbilityTask_WaitGameplayEffectRemoved.h"

class UAbilityTask_WaitGameplayEffectRemoved;
class UGameplayAbility;

UAbilityTask_WaitGameplayEffectRemoved* UAbilityTask_WaitGameplayEffectRemoved::WaitForGameplayEffectRemoved(UGameplayAbility* OwningAbility, FActiveGameplayEffectHandle Handle) {
    return NULL;
}

void UAbilityTask_WaitGameplayEffectRemoved::OnGameplayEffectRemoved(const FGameplayEffectRemovalInfo& InGameplayEffectRemovalInfo) {
}

UAbilityTask_WaitGameplayEffectRemoved::UAbilityTask_WaitGameplayEffectRemoved() {
}

