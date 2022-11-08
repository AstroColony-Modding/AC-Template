#pragma once
#include "CoreMinimal.h"
#include "ETGInputEvent.generated.h"

UENUM(BlueprintType)
enum class ETGInputEvent : uint8 {
    Press,
    Release,
    Repeat,
    Hold,
};

