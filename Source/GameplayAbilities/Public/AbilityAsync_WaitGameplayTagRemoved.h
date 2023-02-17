#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AbilityAsync_WaitGameplayTag.h"
#include "AbilityAsync_WaitGameplayTag.h"
#include "AbilityAsync_WaitGameplayTagRemoved.generated.h"

class AActor;
class UAbilityAsync_WaitGameplayTagRemoved;

UCLASS(Blueprintable)
class GAMEPLAYABILITIES_API UAbilityAsync_WaitGameplayTagRemoved : public UAbilityAsync_WaitGameplayTag {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncWaitGameplayTagDelegate Removed;
    
    UAbilityAsync_WaitGameplayTagRemoved();
    UFUNCTION(BlueprintCallable)
    static UAbilityAsync_WaitGameplayTagRemoved* WaitGameplayTagRemoveFromActor(AActor* TargetActor, FGameplayTag Tag, bool OnlyTriggerOnce);
    
};

