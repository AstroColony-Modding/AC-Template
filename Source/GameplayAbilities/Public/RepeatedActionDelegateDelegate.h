#pragma once
#include "CoreMinimal.h"
#include "RepeatedActionDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRepeatedActionDelegate, int32, ActionNumber);

