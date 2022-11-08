#pragma once
#include "CoreMinimal.h"
#include "EDataRegistrySubsystemGetItemResult.generated.h"

UENUM(BlueprintType)
enum class EDataRegistrySubsystemGetItemResult : uint8 {
    Found,
    NotFound,
};

