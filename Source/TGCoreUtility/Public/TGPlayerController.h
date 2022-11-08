#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TGPlayerController.generated.h"

UCLASS(Blueprintable)
class TGCOREUTILITY_API ATGPlayerController : public APlayerController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableRenderFocusRule;
    
public:
    ATGPlayerController();
};

