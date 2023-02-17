#pragma once
#include "CoreMinimal.h"
#include "ECFCoreExternalAuthProvider.generated.h"

UENUM(BlueprintType)
enum class ECFCoreExternalAuthProvider : uint8 {
    None,
    Steam,
};

