#pragma once
#include "CoreMinimal.h"
#include "TGTimestamp.generated.h"

USTRUCT(BlueprintType)
struct TGCOREUTILITY_API FTGTimestamp {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
public:
    FTGTimestamp();
};

