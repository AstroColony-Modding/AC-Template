#pragma once
#include "CoreMinimal.h"
#include "GameplayAbilityTargetDataHandle.h"
#include "WaitOverlapDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWaitOverlapDelegate, const FGameplayAbilityTargetDataHandle&, TargetData);

