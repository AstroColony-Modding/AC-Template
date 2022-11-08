#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AbilityTask_WaitGameplayTag.h"
#include "WaitGameplayTagDelegateDelegate.h"
#include "AbilityTask_WaitGameplayTagAdded.generated.h"

class UAbilityTask_WaitGameplayTagAdded;
class UGameplayAbility;
class AActor;

UCLASS(Blueprintable)
class GAMEPLAYABILITIES_API UAbilityTask_WaitGameplayTagAdded : public UAbilityTask_WaitGameplayTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaitGameplayTagDelegate Added;
    
    UAbilityTask_WaitGameplayTagAdded();
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitGameplayTagAdded* WaitGameplayTagAdd(UGameplayAbility* OwningAbility, FGameplayTag Tag, AActor* InOptionalExternalTarget, bool OnlyTriggerOnce);
    
};

