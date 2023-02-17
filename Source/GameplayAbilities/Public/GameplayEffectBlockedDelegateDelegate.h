#pragma once
#include "CoreMinimal.h"
#include "ActiveGameplayEffectHandle.h"
#include "GameplayEffectSpecHandle.h"
#include "GameplayEffectBlockedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGameplayEffectBlockedDelegate, FGameplayEffectSpecHandle, BlockedSpec, FActiveGameplayEffectHandle, ImmunityGameplayEffectHandle);

