#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "MovementModeChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMovementModeChangedDelegate, TEnumAsByte<EMovementMode>, NewMovementMode);

