#pragma once
#include "CoreMinimal.h"
#include "ECFCoreModStatus.generated.h"

UENUM(BlueprintType)
enum class ECFCoreModStatus : uint8 {
    None,
    New,
    ChangesRequired,
    UnderSoftReview,
    Approved,
    Rejected,
    ChangesMade,
    Inactive,
    Abandoned,
    Deleted,
    UnderReview,
};

