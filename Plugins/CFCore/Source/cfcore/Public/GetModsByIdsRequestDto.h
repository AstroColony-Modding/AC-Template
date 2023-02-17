#pragma once
#include "CoreMinimal.h"
#include "GetModsByIdsRequestDto.generated.h"

USTRUCT(BlueprintType)
struct FGetModsByIdsRequestDto {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int64> modIds;
    
    CFCORE_API FGetModsByIdsRequestDto();
};

