#pragma once
#include "CoreMinimal.h"
#include "EEHBillboardTemplateType.generated.h"

UENUM(BlueprintType)
enum class EEHBillboardTemplateType : uint8 {
    Device,
    HumanNeeds,
    AINeeds,
    Resources,
    _MAX UMETA(Hidden),
};

