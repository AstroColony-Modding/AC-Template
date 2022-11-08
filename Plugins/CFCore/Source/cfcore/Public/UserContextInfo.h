#pragma once
#include "CoreMinimal.h"
#include "UserContextInfo.generated.h"

USTRUCT(BlueprintType)
struct CFCORE_API FUserContextInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AuthToken;
    
    FUserContextInfo();
};

