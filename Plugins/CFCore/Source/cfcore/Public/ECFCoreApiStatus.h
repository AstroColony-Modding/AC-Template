#pragma once
#include "CoreMinimal.h"
#include "ECFCoreApiStatus.generated.h"

UENUM(BlueprintType)
enum class ECFCoreApiStatus : uint8 {
    None,
    Private,
    Public,
};

