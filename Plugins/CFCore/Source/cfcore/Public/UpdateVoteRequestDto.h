#pragma once
#include "CoreMinimal.h"
#include "ECFCoreThumbsUpDirection.h"
#include "UpdateVoteRequestDto.generated.h"

USTRUCT(BlueprintType)
struct FUpdateVoteRequestDto {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECFCoreThumbsUpDirection Direction;
    
    CFCORE_API FUpdateVoteRequestDto();
};

