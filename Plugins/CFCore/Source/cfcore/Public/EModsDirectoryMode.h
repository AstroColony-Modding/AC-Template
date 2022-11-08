#pragma once
#include "CoreMinimal.h"
#include "EModsDirectoryMode.generated.h"

UENUM(BlueprintType)
enum class EModsDirectoryMode : uint8 {
    None,
    CFCore,
    Flat,
};

