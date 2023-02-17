#pragma once
#include "CoreMinimal.h"
#include "ExternalAuthAdditionalInfoRequestDto.generated.h"

USTRUCT(BlueprintType)
struct FExternalAuthAdditionalInfoRequestDto {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString eulaAcceptTime;
    
    CFCORE_API FExternalAuthAdditionalInfoRequestDto();
};

