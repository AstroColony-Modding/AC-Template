#pragma once
#include "CoreMinimal.h"
#include "ESettingPreviewType.generated.h"

UENUM(BlueprintType)
enum class ESettingPreviewType : uint8 {
    None,
    Default,
    Controller_Front,
    Controller_Top,
    Gamma,
};

