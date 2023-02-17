#include "AbilityTask_WaitGameplayEffectApplied_Self.h"

class AActor;
class UAbilityTask_WaitGameplayEffectApplied_Self;
class UGameplayAbility;

UAbilityTask_WaitGameplayEffectApplied_Self* UAbilityTask_WaitGameplayEffectApplied_Self::WaitGameplayEffectAppliedToSelf_Query(UGameplayAbility* OwningAbility, const FGameplayTargetDataFilterHandle SourceFilter, FGameplayTagQuery SourceTagQuery, FGameplayTagQuery TargetTagQuery, bool TriggerOnce, AActor* OptionalExternalOwner, bool ListenForPeriodicEffect) {
    return NULL;
}

UAbilityTask_WaitGameplayEffectApplied_Self* UAbilityTask_WaitGameplayEffectApplied_Self::WaitGameplayEffectAppliedToSelf(UGameplayAbility* OwningAbility, const FGameplayTargetDataFilterHandle SourceFilter, FGameplayTagRequirements SourceTagRequirements, FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, AActor* OptionalExternalOwner, bool ListenForPeriodicEffect) {
    return NULL;
}

UAbilityTask_WaitGameplayEffectApplied_Self::UAbilityTask_WaitGameplayEffectApplied_Self() {
}

