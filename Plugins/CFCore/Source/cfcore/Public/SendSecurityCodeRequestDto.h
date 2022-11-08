#pragma once
#include "CoreMinimal.h"
#include "SendSecurityCodeRequestDto.generated.h"

USTRUCT(BlueprintType)
struct FSendSecurityCodeRequestDto {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString email;
    
    CFCORE_API FSendSecurityCodeRequestDto();
};

