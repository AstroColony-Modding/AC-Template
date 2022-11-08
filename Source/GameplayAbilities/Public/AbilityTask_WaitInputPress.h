#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
#include "InputPressDelegateDelegate.h"
#include "AbilityTask_WaitInputPress.generated.h"

class UAbilityTask_WaitInputPress;
class UGameplayAbility;

UCLASS(Blueprintable)
class GAMEPLAYABILITIES_API UAbilityTask_WaitInputPress : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputPressDelegate OnPress;
    
    UAbilityTask_WaitInputPress();
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitInputPress* WaitInputPress(UGameplayAbility* OwningAbility, bool bTestAlreadyPressed);
    
    UFUNCTION(BlueprintCallable)
    void OnPressCallback();
    
};

