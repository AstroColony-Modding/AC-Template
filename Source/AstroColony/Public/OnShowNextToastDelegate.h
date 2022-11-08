#pragma once
#include "CoreMinimal.h"
#include "OnShowNextToastDelegate.generated.h"

class UEHToastViewModel;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnShowNextToast, UEHToastViewModel*, ToastViewModel);

