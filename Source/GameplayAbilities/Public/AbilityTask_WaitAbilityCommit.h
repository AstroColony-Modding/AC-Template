#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
#include "GameplayTagContainer.h"
#include "WaitAbilityCommitDelegateDelegate.h"
#include "GameplayTagContainer.h"
#include "AbilityTask_WaitAbilityCommit.generated.h"

class UAbilityTask_WaitAbilityCommit;
class UGameplayAbility;

UCLASS(Blueprintable)
class GAMEPLAYABILITIES_API UAbilityTask_WaitAbilityCommit : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaitAbilityCommitDelegate OnCommit;
    
    UAbilityTask_WaitAbilityCommit();
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit_Query(UGameplayAbility* OwningAbility, FGameplayTagQuery Query, bool TriggerOnce);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit(UGameplayAbility* OwningAbility, FGameplayTag WithTag, FGameplayTag WithoutTage, bool TriggerOnce);
    
    UFUNCTION(BlueprintCallable)
    void OnAbilityCommit(UGameplayAbility* ActivatedAbility);
    
};

