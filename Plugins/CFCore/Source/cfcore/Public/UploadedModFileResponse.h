#pragma once
#include "CoreMinimal.h"
#include "UploadedModFile.h"
#include "UploadedModFileResponse.generated.h"

USTRUCT(BlueprintType)
struct FUploadedModFileResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUploadedModFile Data;
    
    CFCORE_API FUploadedModFileResponse();
};

