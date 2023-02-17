#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
#include "Templates/SubclassOf.h"
#include "VisualizeTargetingDelegateDelegate.h"
#include "AbilityTask_VisualizeTargeting.generated.h"

class AGameplayAbilityTargetActor;
class UAbilityTask_VisualizeTargeting;
class UGameplayAbility;

UCLASS(Blueprintable)
class GAMEPLAYABILITIES_API UAbilityTask_VisualizeTargeting : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVisualizeTargetingDelegate TimeElapsed;
    
    UAbilityTask_VisualizeTargeting();
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_VisualizeTargeting* VisualizeTargetingUsingActor(UGameplayAbility* OwningAbility, AGameplayAbilityTargetActor* TargetActor, FName TaskInstanceName, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static UAbilityTask_VisualizeTargeting* VisualizeTargeting(UGameplayAbility* OwningAbility, TSubclassOf<AGameplayAbilityTargetActor> Class, FName TaskInstanceName, float Duration);
    
    UFUNCTION(BlueprintCallable)
    void FinishSpawningActor(UGameplayAbility* OwningAbility, AGameplayAbilityTargetActor* SpawnedActor);
    
    UFUNCTION(BlueprintCallable)
    bool BeginSpawningActor(UGameplayAbility* OwningAbility, TSubclassOf<AGameplayAbilityTargetActor> Class, AGameplayAbilityTargetActor*& SpawnedActor);
    
};

