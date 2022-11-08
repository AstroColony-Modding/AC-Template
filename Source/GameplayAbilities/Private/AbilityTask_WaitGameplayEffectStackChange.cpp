#include "AbilityTask_WaitGameplayEffectStackChange.h"

class UAbilityTask_WaitGameplayEffectStackChange;
class UGameplayAbility;

UAbilityTask_WaitGameplayEffectStackChange* UAbilityTask_WaitGameplayEffectStackChange::WaitForGameplayEffectStackChange(UGameplayAbility* OwningAbility, FActiveGameplayEffectHandle Handle) {
    return NULL;
}

void UAbilityTask_WaitGameplayEffectStackChange::OnGameplayEffectStackChange(FActiveGameplayEffectHandle Handle, int32 NewCount, int32 OldCount) {
}

UAbilityTask_WaitGameplayEffectStackChange::UAbilityTask_WaitGameplayEffectStackChange() {
}

