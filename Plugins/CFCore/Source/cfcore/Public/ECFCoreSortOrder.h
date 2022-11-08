#pragma once
#include "CoreMinimal.h"
#include "ECFCoreSortOrder.generated.h"

UENUM(BlueprintType)
enum class ECFCoreSortOrder : uint8 {
    None,
    Asc,
    Desc,
};

