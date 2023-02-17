#pragma once
#include "CoreMinimal.h"
#include "AbilityStateDelegateDelegate.h"
#include "AbilityTask.h"
#include "AbilityTask_StartAbilityState.generated.h"

class UAbilityTask_StartAbilityState;
class UGameplayAbility;

UCLASS(Blueprintable)
class GAMEPLAYABILITIES_API UAbilityTask_StartAbilityState : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbilityStateDelegate OnStateEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbilityStateDelegate OnStateInterrupted;
    
    UAbilityTask_StartAbilityState();
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_StartAbilityState* StartAbilityState(UGameplayAbility* OwningAbility, FName StateName, bool bEndCurrentState);
    
};

