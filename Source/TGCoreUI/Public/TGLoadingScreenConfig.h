#pragma once
#include "CoreMinimal.h"
#include "TGLoadingScreenConfig.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FTGLoadingScreenConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* ScreenBackgroundImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TransitionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TitleText;
    
    TGCOREUI_API FTGLoadingScreenConfig();
};

