#include "AbilityTask_WaitGameplayEffectBlockedImmunity.h"

class AActor;
class UAbilityTask_WaitGameplayEffectBlockedImmunity;
class UGameplayAbility;

UAbilityTask_WaitGameplayEffectBlockedImmunity* UAbilityTask_WaitGameplayEffectBlockedImmunity::WaitGameplayEffectBlockedByImmunity(UGameplayAbility* OwningAbility, FGameplayTagRequirements SourceTagRequirements, FGameplayTagRequirements TargetTagRequirements, AActor* OptionalExternalTarget, bool OnlyTriggerOnce) {
    return NULL;
}

UAbilityTask_WaitGameplayEffectBlockedImmunity::UAbilityTask_WaitGameplayEffectBlockedImmunity() {
    this->ExternalOwner = NULL;
}

