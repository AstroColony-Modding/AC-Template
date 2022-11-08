#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GammaSettings.generated.h"

UCLASS(Blueprintable)
class ASTROCOLONY_API UGammaSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StepperTilesCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StepperOptionSelected;
    
    UGammaSettings();
};

