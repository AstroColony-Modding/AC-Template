#pragma once
#include "CoreMinimal.h"
#include "OnHandleActionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHandleAction, FName, Action);

