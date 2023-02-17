#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
#include "WaitCancelDelegateDelegate.h"
#include "AbilityTask_WaitCancel.generated.h"

class UAbilityTask_WaitCancel;
class UGameplayAbility;

UCLASS(Blueprintable)
class GAMEPLAYABILITIES_API UAbilityTask_WaitCancel : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaitCancelDelegate OnCancel;
    
    UAbilityTask_WaitCancel();
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitCancel* WaitCancel(UGameplayAbility* OwningAbility);
    
    UFUNCTION(BlueprintCallable)
    void OnLocalCancelCallback();
    
    UFUNCTION(BlueprintCallable)
    void OnCancelCallback();
    
};

