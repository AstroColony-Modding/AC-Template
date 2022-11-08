#pragma once
#include "CoreMinimal.h"
#include "EEHUIOverlayID.h"
#include "OverlayInfo.generated.h"

USTRUCT(BlueprintType)
struct ASTROCOLONY_API FOverlayInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEHUIOverlayID OverlayID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldOpen;
    
    FOverlayInfo();
};

