#pragma once
#include "CoreMinimal.h"
#include "ECFCoreFileRelationType.h"
#include "FileDependency.generated.h"

USTRUCT(BlueprintType)
struct CFCORE_API FFileDependency {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int64 modId;
    
    UPROPERTY(EditAnywhere)
    int64 fileId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECFCoreFileRelationType relationType;
    
    FFileDependency();
};

