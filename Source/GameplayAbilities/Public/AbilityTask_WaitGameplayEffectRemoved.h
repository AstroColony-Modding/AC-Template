#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayEffectRemovalInfo.h"
#include "WaitGameplayEffectRemovedDelegateDelegate.h"
#include "AbilityTask_WaitGameplayEffectRemoved.generated.h"

class UAbilityTask_WaitGameplayEffectRemoved;
class UGameplayAbility;

UCLASS(Blueprintable)
class GAMEPLAYABILITIES_API UAbilityTask_WaitGameplayEffectRemoved : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaitGameplayEffectRemovedDelegate OnRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaitGameplayEffectRemovedDelegate InvalidHandle;
    
    UAbilityTask_WaitGameplayEffectRemoved();
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitGameplayEffectRemoved* WaitForGameplayEffectRemoved(UGameplayAbility* OwningAbility, FActiveGameplayEffectHandle Handle);
    
    UFUNCTION(BlueprintCallable)
    void OnGameplayEffectRemoved(const FGameplayEffectRemovalInfo& InGameplayEffectRemovalInfo);
    
};

