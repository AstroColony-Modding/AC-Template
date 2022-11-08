#pragma once
#include "CoreMinimal.h"
#include "GameVersionType.h"
#include "GameVersionTypeArrayResponse.generated.h"

USTRUCT(BlueprintType)
struct FGameVersionTypeArrayResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameVersionType> Data;
    
    CFCORE_API FGameVersionTypeArrayResponse();
};

