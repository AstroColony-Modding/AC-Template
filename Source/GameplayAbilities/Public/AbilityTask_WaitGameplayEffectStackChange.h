#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
#include "ActiveGameplayEffectHandle.h"
#include "WaitGameplayEffectStackChangeDelegateDelegate.h"
#include "AbilityTask_WaitGameplayEffectStackChange.generated.h"

class UAbilityTask_WaitGameplayEffectStackChange;
class UGameplayAbility;

UCLASS(Blueprintable)
class GAMEPLAYABILITIES_API UAbilityTask_WaitGameplayEffectStackChange : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaitGameplayEffectStackChangeDelegate OnChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaitGameplayEffectStackChangeDelegate InvalidHandle;
    
    UAbilityTask_WaitGameplayEffectStackChange();
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitGameplayEffectStackChange* WaitForGameplayEffectStackChange(UGameplayAbility* OwningAbility, FActiveGameplayEffectHandle Handle);
    
    UFUNCTION(BlueprintCallable)
    void OnGameplayEffectStackChange(FActiveGameplayEffectHandle Handle, int32 NewCount, int32 OldCount);
    
};

