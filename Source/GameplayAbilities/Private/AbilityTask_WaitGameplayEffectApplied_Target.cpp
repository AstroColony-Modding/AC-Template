#include "AbilityTask_WaitGameplayEffectApplied_Target.h"

class UGameplayAbility;
class UAbilityTask_WaitGameplayEffectApplied_Target;
class AActor;

UAbilityTask_WaitGameplayEffectApplied_Target* UAbilityTask_WaitGameplayEffectApplied_Target::WaitGameplayEffectAppliedToTarget_Query(UGameplayAbility* OwningAbility, const FGameplayTargetDataFilterHandle SourceFilter, FGameplayTagQuery SourceTagQuery, FGameplayTagQuery TargetTagQuery, bool TriggerOnce, AActor* OptionalExternalOwner, bool ListenForPeriodicEffect) {
    return NULL;
}

UAbilityTask_WaitGameplayEffectApplied_Target* UAbilityTask_WaitGameplayEffectApplied_Target::WaitGameplayEffectAppliedToTarget(UGameplayAbility* OwningAbility, const FGameplayTargetDataFilterHandle TargetFilter, FGameplayTagRequirements SourceTagRequirements, FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, AActor* OptionalExternalOwner, bool ListenForPeriodicEffects) {
    return NULL;
}

UAbilityTask_WaitGameplayEffectApplied_Target::UAbilityTask_WaitGameplayEffectApplied_Target() {
}

