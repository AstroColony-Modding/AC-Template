#pragma once
#include "CoreMinimal.h"
#include "GameVersionsByType.h"
#include "GameVersionByTypeArrayResponse.generated.h"

USTRUCT(BlueprintType)
struct FGameVersionByTypeArrayResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameVersionsByType> Data;
    
    CFCORE_API FGameVersionByTypeArrayResponse();
};

