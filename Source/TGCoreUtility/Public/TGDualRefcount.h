#pragma once
#include "CoreMinimal.h"
#include "TGDualRefcount.generated.h"

USTRUCT(BlueprintType)
struct TGCOREUTILITY_API FTGDualRefcount {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActivationRefcount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DisabledRefcount;
    
public:
    FTGDualRefcount();
};

