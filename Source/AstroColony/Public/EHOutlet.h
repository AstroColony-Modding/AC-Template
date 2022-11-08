#pragma once
#include "CoreMinimal.h"
#include "EEHDecalType.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EHOutlet.generated.h"

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FEHOutlet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEHDecalType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector OutletCord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform OutletTransform;
    
    FEHOutlet();
};

