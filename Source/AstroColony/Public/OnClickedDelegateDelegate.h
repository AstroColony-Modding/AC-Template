#pragma once
#include "CoreMinimal.h"
#include "OnClickedDelegateDelegate.generated.h"

class UEHBaseButtonWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnClickedDelegate, UEHBaseButtonWidget*, ButtonWidget);

