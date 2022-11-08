#pragma once
#include "CoreMinimal.h"
#include "EGameplayCuePayloadType.generated.h"

UENUM(BlueprintType)
enum class EGameplayCuePayloadType : uint8 {
    CueParameters,
    FromSpec,
};

