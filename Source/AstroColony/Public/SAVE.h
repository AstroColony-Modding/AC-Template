#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SAVE.generated.h"

USTRUCT(BlueprintType)
struct FSAVE {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString saveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime DateTime;
    
    ASTROCOLONY_API FSAVE();
};

