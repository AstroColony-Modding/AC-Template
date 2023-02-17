#include "AbilityTask_WaitGameplayEvent.h"

class AActor;
class UAbilityTask_WaitGameplayEvent;
class UGameplayAbility;

UAbilityTask_WaitGameplayEvent* UAbilityTask_WaitGameplayEvent::WaitGameplayEvent(UGameplayAbility* OwningAbility, FGameplayTag EventTag, AActor* NewOptionalExternalTarget, bool OnlyTriggerOnce, bool OnlyMatchExact) {
    return NULL;
}

UAbilityTask_WaitGameplayEvent::UAbilityTask_WaitGameplayEvent() {
    this->OptionalExternalTarget = NULL;
}

