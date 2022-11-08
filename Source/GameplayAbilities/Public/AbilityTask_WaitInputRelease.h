#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
#include "InputReleaseDelegateDelegate.h"
#include "AbilityTask_WaitInputRelease.generated.h"

class UAbilityTask_WaitInputRelease;
class UGameplayAbility;

UCLASS(Blueprintable)
class GAMEPLAYABILITIES_API UAbilityTask_WaitInputRelease : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputReleaseDelegate OnRelease;
    
    UAbilityTask_WaitInputRelease();
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitInputRelease* WaitInputRelease(UGameplayAbility* OwningAbility, bool bTestAlreadyReleased);
    
    UFUNCTION(BlueprintCallable)
    void OnReleaseCallback();
    
};

