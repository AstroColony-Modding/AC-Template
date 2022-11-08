#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnValueChangedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnValueChangedEvent, FLinearColor, Value);

