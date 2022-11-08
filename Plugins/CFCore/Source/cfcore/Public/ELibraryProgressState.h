#pragma once
#include "CoreMinimal.h"
#include "ELibraryProgressState.generated.h"

UENUM(BlueprintType)
enum class ELibraryProgressState : uint8 {
    Pending,
    Downloading,
    Uploading,
    Validating,
    Unzipping,
    Zipping,
    Copying,
    CleaningUp,
    Cancelling,
    SuccessfullyCompleted,
    FailedToComplete,
};

