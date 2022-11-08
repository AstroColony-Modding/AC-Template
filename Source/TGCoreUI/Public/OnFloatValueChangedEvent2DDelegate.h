#pragma once
#include "CoreMinimal.h"
#include "OnFloatValueChangedEvent2DDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFloatValueChangedEvent2D, float, Value);

