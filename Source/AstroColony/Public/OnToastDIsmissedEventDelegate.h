#pragma once
#include "CoreMinimal.h"
#include "OnToastDIsmissedEventDelegate.generated.h"

class UEHToastWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnToastDIsmissedEvent, UEHToastWidget*, ToastWidget);

