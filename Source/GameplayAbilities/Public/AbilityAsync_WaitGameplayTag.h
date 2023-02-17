#pragma once
#include "CoreMinimal.h"
#include "AbilityAsync.h"
#include "AbilityAsync_WaitGameplayTag.generated.h"

UCLASS(Abstract, Blueprintable)
class GAMEPLAYABILITIES_API UAbilityAsync_WaitGameplayTag : public UAbilityAsync {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAsyncWaitGameplayTagDelegate);
    
    UAbilityAsync_WaitGameplayTag();
};

