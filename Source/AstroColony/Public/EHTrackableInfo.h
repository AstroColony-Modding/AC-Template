#pragma once
#include "CoreMinimal.h"
#include "EHTrackableInfo.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FEHTrackableInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Texture;
    
    FEHTrackableInfo();
};

