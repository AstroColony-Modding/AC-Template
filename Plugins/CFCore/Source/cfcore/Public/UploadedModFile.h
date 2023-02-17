#pragma once
#include "CoreMinimal.h"
#include "UploadedModFile.generated.h"

USTRUCT(BlueprintType)
struct CFCORE_API FUploadedModFile {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 fileId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Directory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Filename;
    
    FUploadedModFile();
};

