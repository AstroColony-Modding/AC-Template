#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AbilityAsync_WaitGameplayTag.h"
#include "AbilityAsync_WaitGameplayTag.h"
#include "AbilityAsync_WaitGameplayTagAdded.generated.h"

class AActor;
class UAbilityAsync_WaitGameplayTagAdded;

UCLASS(Blueprintable)
class GAMEPLAYABILITIES_API UAbilityAsync_WaitGameplayTagAdded : public UAbilityAsync_WaitGameplayTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncWaitGameplayTagDelegate Added;
    
    UAbilityAsync_WaitGameplayTagAdded();
    UFUNCTION(BlueprintCallable)
    static UAbilityAsync_WaitGameplayTagAdded* WaitGameplayTagAddToActor(AActor* TargetActor, FGameplayTag Tag, bool OnlyTriggerOnce);
    
};

