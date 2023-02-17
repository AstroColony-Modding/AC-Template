#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
#include "GameplayEffectBlockedDelegateDelegate.h"
#include "GameplayTagRequirements.h"
#include "AbilityTask_WaitGameplayEffectBlockedImmunity.generated.h"

class AActor;
class UAbilitySystemComponent;
class UAbilityTask_WaitGameplayEffectBlockedImmunity;
class UGameplayAbility;

UCLASS(Blueprintable)
class GAMEPLAYABILITIES_API UAbilityTask_WaitGameplayEffectBlockedImmunity : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayEffectBlockedDelegate bLocked;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* ExternalOwner;
    
public:
    UAbilityTask_WaitGameplayEffectBlockedImmunity();
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitGameplayEffectBlockedImmunity* WaitGameplayEffectBlockedByImmunity(UGameplayAbility* OwningAbility, FGameplayTagRequirements SourceTagRequirements, FGameplayTagRequirements TargetTagRequirements, AActor* OptionalExternalTarget, bool OnlyTriggerOnce);
    
};

