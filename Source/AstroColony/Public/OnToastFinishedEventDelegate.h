#pragma once
#include "CoreMinimal.h"
#include "OnToastFinishedEventDelegate.generated.h"

class UEHToastWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnToastFinishedEvent, UEHToastWidget*, ToastWidget);

