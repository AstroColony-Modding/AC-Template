#pragma once
#include "CoreMinimal.h"
#include "ECFCoreStatus.generated.h"

UENUM(BlueprintType)
enum class ECFCoreStatus : uint8 {
    None,
    Draft,
    Test,
    PendingReview,
    Rejected,
    Approved,
    Live,
};

