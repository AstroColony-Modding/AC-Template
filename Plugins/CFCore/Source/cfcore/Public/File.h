#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ECFCoreFileReleaseType.h"
#include "ECFCoreFileStatus.h"
#include "FileDependency.h"
#include "FileHash.h"
#include "FileModule.h"
#include "SortableGameVersion.h"
#include "File.generated.h"

USTRUCT(BlueprintType)
struct CFCORE_API FFile {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 ID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 gameId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 modId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Filename;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECFCoreFileReleaseType releaseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECFCoreFileStatus fileStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFileHash> hashes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime fileDate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 fileLength;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 downloadCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString downloadUrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> gameVersions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSortableGameVersion> sortableGameVersions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFileDependency> dependencies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ExposeAsAlternative;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 parentProjectFileId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 alternateFileId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isServerPack;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 serverPackFileId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 fileFingerprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFileModule> modules;
    
    FFile();
};

