#pragma once
#include "CoreMinimal.h"
#include "ModIdArrayResponse.generated.h"

USTRUCT(BlueprintType)
struct FModIdArrayResponse {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int64> Data;
    
    CFCORE_API FModIdArrayResponse();
};

