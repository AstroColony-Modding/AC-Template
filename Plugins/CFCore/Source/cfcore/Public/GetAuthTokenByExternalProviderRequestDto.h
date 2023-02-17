#pragma once
#include "CoreMinimal.h"
#include "ExternalAuthAdditionalInfoRequestDto.h"
#include "GetAuthTokenByExternalProviderRequestDto.generated.h"

USTRUCT(BlueprintType)
struct FGetAuthTokenByExternalProviderRequestDto {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString provider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Token;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExternalAuthAdditionalInfoRequestDto additionalInfo;
    
    CFCORE_API FGetAuthTokenByExternalProviderRequestDto();
};

