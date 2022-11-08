#pragma once
#include "CoreMinimal.h"
#include "ELibraryProgressState.h"
#include "LibraryProgressDataTransfer.h"
#include "LibraryProgress.generated.h"

USTRUCT(BlueprintType)
struct CFCORE_API FLibraryProgress {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int64 modId;
    
    UPROPERTY(EditAnywhere)
    int64 fileId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELibraryProgressState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLibraryProgressDataTransfer dataTransfer;
    
    FLibraryProgress();
};

