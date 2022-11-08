#pragma once
#include "CoreMinimal.h"
#include "EToastImageType.generated.h"

UENUM(BlueprintType)
enum class EToastImageType : uint8 {
    NONE,
    Emblem,
    Nameplate,
    Avatar,
    Video,
};

