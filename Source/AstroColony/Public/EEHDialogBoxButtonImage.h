#pragma once
#include "CoreMinimal.h"
#include "EEHDialogBoxButtonImage.generated.h"

UENUM(BlueprintType)
enum class EEHDialogBoxButtonImage : uint8 {
    None,
    SteamStore,
    MicrosoftStore,
    SeasonalCurrency,
};

