#pragma once
#include "CoreMinimal.h"
#include "AbilityAsync.h"
#include "AbilityAsync_WaitGameplayTag.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAsyncWaitGameplayTagDelegate);

UCLASS(Abstract, Blueprintable)
class GAMEPLAYABILITIES_API UAbilityAsync_WaitGameplayTag : public UAbilityAsync {
    GENERATED_BODY()
public:
    UAbilityAsync_WaitGameplayTag();
};

