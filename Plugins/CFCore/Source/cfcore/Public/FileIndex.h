#pragma once
#include "CoreMinimal.h"
#include "ECFCoreFileReleaseType.h"
#include "ECFCoreModLoaderType.h"
#include "FileIndex.generated.h"

USTRUCT(BlueprintType)
struct CFCORE_API FFileIndex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GameVersion;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 fileId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Filename;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECFCoreFileReleaseType releaseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 gameVersionTypeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECFCoreModLoaderType modLoader;
    
    FFileIndex();
};

