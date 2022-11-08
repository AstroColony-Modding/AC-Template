#pragma once
#include "CoreMinimal.h"
#include "EEHSlotDragType.generated.h"

UENUM(BlueprintType)
enum class EEHSlotDragType : uint8 {
    NoDrag,
    Orderable,
    Selectable,
    Assignable,
    Items,
    Garbage,
};

