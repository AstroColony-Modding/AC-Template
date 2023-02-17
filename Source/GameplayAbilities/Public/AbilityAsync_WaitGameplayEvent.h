#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AbilityAsync.h"
#include "GameplayEventData.h"
#include "AbilityAsync_WaitGameplayEvent.generated.h"

class AActor;
class UAbilityAsync_WaitGameplayEvent;

UCLASS(Blueprintable)
class GAMEPLAYABILITIES_API UAbilityAsync_WaitGameplayEvent : public UAbilityAsync {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEventReceivedDelegate, FGameplayEventData, Payload);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventReceivedDelegate EventReceived;
    
    UAbilityAsync_WaitGameplayEvent();
    UFUNCTION(BlueprintCallable)
    static UAbilityAsync_WaitGameplayEvent* WaitGameplayEventToActor(AActor* TargetActor, FGameplayTag EventTag, bool OnlyTriggerOnce, bool OnlyMatchExact);
    
};

