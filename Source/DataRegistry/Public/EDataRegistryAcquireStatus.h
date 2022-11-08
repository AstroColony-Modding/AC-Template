#pragma once
#include "CoreMinimal.h"
#include "EDataRegistryAcquireStatus.generated.h"

UENUM(BlueprintType)
enum class EDataRegistryAcquireStatus : uint8 {
    NotStarted,
    WaitingForInitialAcquire,
    InitialAcquireFinished,
    WaitingForResources,
    AcquireFinished,
    AcquireError,
    DoesNotExist,
};

