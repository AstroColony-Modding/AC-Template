#pragma once
#include "CoreMinimal.h"
#include "EEHMenuPlatformVisibility.generated.h"

UENUM(BlueprintType)
enum class EEHMenuPlatformVisibility : uint8 {
    BOTH,
    PC_ONLY,
    XBOX_ONLY,
};

