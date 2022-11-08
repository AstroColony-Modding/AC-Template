#pragma once
#include "CoreMinimal.h"
#include "EBarrierReportType.generated.h"

UENUM(BlueprintType)
enum class EBarrierReportType : uint8 {
    Increase,
    Decrese,
    Both,
};

