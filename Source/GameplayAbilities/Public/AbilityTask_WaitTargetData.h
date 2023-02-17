#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AbilityTask.h"
#include "EGameplayTargetingConfirmation.h"
#include "GameplayAbilityTargetDataHandle.h"
#include "Templates/SubclassOf.h"
#include "WaitTargetDataDelegateDelegate.h"
#include "AbilityTask_WaitTargetData.generated.h"

class AGameplayAbilityTargetActor;
class UAbilityTask_WaitTargetData;
class UGameplayAbility;

UCLASS(Blueprintable, NotPlaceable)
class GAMEPLAYABILITIES_API UAbilityTask_WaitTargetData : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaitTargetDataDelegate ValidData;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaitTargetDataDelegate cancelled;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGameplayAbilityTargetActor> TargetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGameplayAbilityTargetActor* TargetActor;
    
public:
    UAbilityTask_WaitTargetData();
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitTargetData* WaitTargetDataUsingActor(UGameplayAbility* OwningAbility, FName TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation::Type> ConfirmationType, AGameplayAbilityTargetActor* NewTargetActor);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_WaitTargetData* WaitTargetData(UGameplayAbility* OwningAbility, FName TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation::Type> ConfirmationType, TSubclassOf<AGameplayAbilityTargetActor> Class);
    
    UFUNCTION(BlueprintCallable)
    void OnTargetDataReplicatedCancelledCallback();
    
    UFUNCTION(BlueprintCallable)
    void OnTargetDataReplicatedCallback(const FGameplayAbilityTargetDataHandle& Data, FGameplayTag ActivationTag);
    
    UFUNCTION(BlueprintCallable)
    void OnTargetDataReadyCallback(const FGameplayAbilityTargetDataHandle& Data);
    
    UFUNCTION(BlueprintCallable)
    void OnTargetDataCancelledCallback(const FGameplayAbilityTargetDataHandle& Data);
    
    UFUNCTION(BlueprintCallable)
    void FinishSpawningActor(UGameplayAbility* OwningAbility, AGameplayAbilityTargetActor* SpawnedActor);
    
    UFUNCTION(BlueprintCallable)
    bool BeginSpawningActor(UGameplayAbility* OwningAbility, TSubclassOf<AGameplayAbilityTargetActor> Class, AGameplayAbilityTargetActor*& SpawnedActor);
    
};

