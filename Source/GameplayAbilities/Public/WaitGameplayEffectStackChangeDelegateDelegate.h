#pragma once
#include "CoreMinimal.h"
#include "ActiveGameplayEffectHandle.h"
#include "WaitGameplayEffectStackChangeDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FWaitGameplayEffectStackChangeDelegate, FActiveGameplayEffectHandle, Handle, int32, NewCount, int32, OldCount);

