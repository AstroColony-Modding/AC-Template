#pragma once
#include "CoreMinimal.h"
#include "ECFCoreErrorCodes.generated.h"

UENUM(BlueprintType)
enum class ECFCoreErrorCodes : uint8 {
    None,
    ApiError,
    FileSystemError,
    FailedToInitialize,
    AlreadyInitialized,
    NotImplemented,
    InvalidModParams,
    InstalledModNotFound,
    InstallCancelled,
    MissingModsDirectory,
    MissingModsDirectoryMode,
    MissingUserDataDirectory,
    FailedToLoadModsStateFromDisk,
    FailedToSaveModsStateToDisk,
    MissingLatestFileInformation,
    ModAlreadyBeingInstalled,
    DownloadedFileHasInvalidHash,
    FailedDeletingOutputDirectory,
    FailedToMoveModDirectory,
    FailedSettingAuthToken,
    UserNotAuthenticated,
    FailedToCancelAction,
};

