#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ExternalAuthAdditionalInfo.generated.h"

USTRUCT(BlueprintType)
struct CFCORE_API FExternalAuthAdditionalInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime eulaAcceptTime;
    
    FExternalAuthAdditionalInfo();
};

