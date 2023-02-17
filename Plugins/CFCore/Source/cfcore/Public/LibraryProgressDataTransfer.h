#pragma once
#include "CoreMinimal.h"
#include "LibraryProgressDataTransfer.generated.h"

USTRUCT(BlueprintType)
struct CFCORE_API FLibraryProgressDataTransfer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 progress;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 transferredBytes;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 transferRateBytesPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Filename;
    
    FLibraryProgressDataTransfer();
};

