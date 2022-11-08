#pragma once
#include "CoreMinimal.h"
#include "ECompressionError.generated.h"

UENUM(BlueprintType)
enum class ECompressionError : uint8 {
    None,
    FailedToReadZip,
    FailedToExtractFile,
    FailedToWriteFile,
};

