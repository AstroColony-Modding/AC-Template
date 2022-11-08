#pragma once
#include "CoreMinimal.h"
#include "EHPlayerAction.generated.h"

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FEHPlayerAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ActionDisplayText;
    
    FEHPlayerAction();
};

