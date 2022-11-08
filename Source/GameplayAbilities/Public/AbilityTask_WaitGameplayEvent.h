#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
#include "WaitGameplayEventDelegateDelegate.h"
#include "GameplayTagContainer.h"
#include "AbilityTask_WaitGameplayEvent.generated.h"

class UGameplayAbility;
class AActor;
class UAbilitySystemComponent;
class UAbilityTask_WaitGameplayEvent;

UCLASS(Blueprintable)
class GAMEPLAYABILITIES_API UAbilityTask_WaitGameplayEvent : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaitGameplayEventDelegate EventReceived;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* OptionalExternalTarget;
    
    UAbilityTask_WaitGameplayEvent();
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitGameplayEvent* WaitGameplayEvent(UGameplayAbility* OwningAbility, FGameplayTag EventTag, AActor* NewOptionalExternalTarget, bool OnlyTriggerOnce, bool OnlyMatchExact);
    
};

