#pragma once
#include "CoreMinimal.h"
#include "EHPushOut.generated.h"

class UEHItemsContainer;

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FEHPushOut {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHItemsContainer* PushContainer;
    
    FEHPushOut();
};

