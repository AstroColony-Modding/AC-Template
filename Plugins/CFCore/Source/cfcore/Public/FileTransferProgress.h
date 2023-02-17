#pragma once
#include "CoreMinimal.h"
#include "FileTransferProgress.generated.h"

USTRUCT(BlueprintType)
struct CFCORE_API FFileTransferProgress {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 progress;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 transferred_bytes;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 bytes_per_second;
    
    FFileTransferProgress();
};

