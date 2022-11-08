#pragma once
#include "CoreMinimal.h"
#include "EEHUIPopupID.generated.h"

UENUM(BlueprintType)
enum class EEHUIPopupID : uint8 {
    None,
    EHDialogBox,
    EHDialogBoxWide,
    Authentication,
};

