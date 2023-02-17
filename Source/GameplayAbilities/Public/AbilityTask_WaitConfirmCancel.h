#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
#include "WaitConfirmCancelDelegateDelegate.h"
#include "AbilityTask_WaitConfirmCancel.generated.h"

class UAbilityTask_WaitConfirmCancel;
class UGameplayAbility;

UCLASS(Blueprintable)
class GAMEPLAYABILITIES_API UAbilityTask_WaitConfirmCancel : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaitConfirmCancelDelegate OnConfirm;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaitConfirmCancelDelegate OnCancel;
    
    UAbilityTask_WaitConfirmCancel();
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitConfirmCancel* WaitConfirmCancel(UGameplayAbility* OwningAbility);
    
    UFUNCTION(BlueprintCallable)
    void OnLocalConfirmCallback();
    
    UFUNCTION(BlueprintCallable)
    void OnLocalCancelCallback();
    
    UFUNCTION(BlueprintCallable)
    void OnConfirmCallback();
    
    UFUNCTION(BlueprintCallable)
    void OnCancelCallback();
    
};

