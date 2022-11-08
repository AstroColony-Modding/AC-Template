#pragma once
#include "CoreMinimal.h"
#include "ECFCoreFileReleaseType.generated.h"

UENUM(BlueprintType)
enum class ECFCoreFileReleaseType : uint8 {
    None,
    Release,
    Beta,
    Alpha,
};

