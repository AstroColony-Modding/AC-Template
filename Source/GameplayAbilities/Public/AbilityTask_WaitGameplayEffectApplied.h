#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayEffectSpec.h"
#include "AbilityTask_WaitGameplayEffectApplied.generated.h"

class UAbilitySystemComponent;

UCLASS(Blueprintable)
class GAMEPLAYABILITIES_API UAbilityTask_WaitGameplayEffectApplied : public UAbilityTask {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* ExternalOwner;
    
public:
    UAbilityTask_WaitGameplayEffectApplied();
    UFUNCTION(BlueprintCallable)
    void OnApplyGameplayEffectCallback(UAbilitySystemComponent* Target, const FGameplayEffectSpec& SpecApplied, FActiveGameplayEffectHandle ActiveHandle);
    
};

