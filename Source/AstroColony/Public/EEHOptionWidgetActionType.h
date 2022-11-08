#pragma once
#include "CoreMinimal.h"
#include "EEHOptionWidgetActionType.generated.h"

UENUM(BlueprintType)
enum class EEHOptionWidgetActionType : uint8 {
    NavigationLeft,
    NavigationRight,
    Confirm,
};

