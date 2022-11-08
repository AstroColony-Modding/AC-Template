#pragma once
#include "CoreMinimal.h"
#include "GetAuthTokenRequestDto.generated.h"

USTRUCT(BlueprintType)
struct FGetAuthTokenRequestDto {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString email;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 otp;
    
    CFCORE_API FGetAuthTokenRequestDto();
};

