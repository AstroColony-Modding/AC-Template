#pragma once
#include "CoreMinimal.h"
#include "OnPlayerExecuteActionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerExecuteAction, bool, IsSuccessful);

