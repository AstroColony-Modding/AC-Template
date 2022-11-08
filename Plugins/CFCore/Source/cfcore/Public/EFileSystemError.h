#pragma once
#include "CoreMinimal.h"
#include "EFileSystemError.generated.h"

UENUM(BlueprintType)
enum class EFileSystemError : uint8 {
    None,
    FailedToReadFromDisk,
    FailedToCreateDirectory,
    FailedToSaveToDisk,
    FailedToOpenFileForWrite,
};

