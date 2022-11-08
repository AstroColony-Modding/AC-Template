#pragma once
#include "CoreMinimal.h"
#include "ECFCoreFileStatus.generated.h"

UENUM(BlueprintType)
enum class ECFCoreFileStatus : uint8 {
    None,
    Processing,
    ChangesRequired,
    UnderReview,
    Approved,
    Rejected,
    MalwareDetected,
    Deleted,
    Archived,
    Testing,
    Released,
    ReadyForReview,
    Deprecated,
    Baking,
    AwaitingPublishing,
    FailedPublishing,
};

