#pragma once
#include "CoreMinimal.h"
#include "ELibraryProgressState.generated.h"

UENUM(BlueprintType)
enum class ELibraryProgressState : uint8 {
    Pending,
    Downloading,
    Uploading,
    Validating,
    PendingUnzipping,
    Unzipping,
    PendingZipping,
    Zipping,
    Copying,
    CleaningUp,
    Cancelling,
    SuccessfullyCompleted,
    FailedToComplete,
};

