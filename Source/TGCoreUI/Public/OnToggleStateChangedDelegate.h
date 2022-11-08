#pragma once
#include "CoreMinimal.h"
#include "OnToggleStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnToggleStateChanged, bool, bIsToggled);

