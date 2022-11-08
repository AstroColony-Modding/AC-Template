#pragma once
#include "CoreMinimal.h"
#include "EEHPopMenuType.generated.h"

UENUM(BlueprintType)
enum class EEHPopMenuType : uint8 {
    None,
    DepositItems,
    Recipes,
    Recycling,
    TransferAstronaut,
    _MAX UMETA(Hidden),
};

