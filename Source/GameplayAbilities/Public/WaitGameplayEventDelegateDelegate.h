#pragma once
#include "CoreMinimal.h"
#include "GameplayEventData.h"
#include "WaitGameplayEventDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FWaitGameplayEventDelegate, FGameplayEventData, Payload);

