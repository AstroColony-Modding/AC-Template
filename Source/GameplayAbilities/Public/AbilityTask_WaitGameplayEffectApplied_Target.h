#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AbilityTask_WaitGameplayEffectApplied.h"
#include "GameplayTargetDataFilterHandle.h"
#include "GameplayEffectAppliedTargetDelegateDelegate.h"
#include "GameplayTagRequirements.h"
#include "AbilityTask_WaitGameplayEffectApplied_Target.generated.h"

class UAbilityTask_WaitGameplayEffectApplied_Target;
class UGameplayAbility;
class AActor;

UCLASS(Blueprintable)
class GAMEPLAYABILITIES_API UAbilityTask_WaitGameplayEffectApplied_Target : public UAbilityTask_WaitGameplayEffectApplied {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayEffectAppliedTargetDelegate OnApplied;
    
    UAbilityTask_WaitGameplayEffectApplied_Target();
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget_Query(UGameplayAbility* OwningAbility, const FGameplayTargetDataFilterHandle SourceFilter, FGameplayTagQuery SourceTagQuery, FGameplayTagQuery TargetTagQuery, bool TriggerOnce, AActor* OptionalExternalOwner, bool ListenForPeriodicEffect);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget(UGameplayAbility* OwningAbility, const FGameplayTargetDataFilterHandle TargetFilter, FGameplayTagRequirements SourceTagRequirements, FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, AActor* OptionalExternalOwner, bool ListenForPeriodicEffects);
    
};

