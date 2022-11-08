#pragma once
#include "CoreMinimal.h"
#include "OnRadiobuttonsStateChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRadiobuttonsStateChange, int32, Index, const FString&, Name);

