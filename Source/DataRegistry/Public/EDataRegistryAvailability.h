#pragma once
#include "CoreMinimal.h"
#include "EDataRegistryAvailability.generated.h"

UENUM(BlueprintType)
enum class EDataRegistryAvailability : uint8 {
    DoesNotExist,
    Unknown,
    Remote,
    OnDisk,
    LocalAsset,
    PreCached,
};

