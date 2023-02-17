#pragma once
#include "CoreMinimal.h"
#include "UpdateVoteRequestDto.generated.h"

USTRUCT(BlueprintType)
struct FUpdateVoteRequestDto {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Direction;
    
    CFCORE_API FUpdateVoteRequestDto();
};

