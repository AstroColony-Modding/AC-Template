#pragma once
#include "CoreMinimal.h"
#include "EInstalledModStatus.generated.h"

UENUM(BlueprintType)
enum class EInstalledModStatus : uint8 {
    Pending,
    OutOfDate,
    Normal,
    Invalid,
    WorkingCopy,
    Uploading,
};

