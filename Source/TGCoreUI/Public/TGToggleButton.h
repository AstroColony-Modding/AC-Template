#pragma once
#include "CoreMinimal.h"
#include "TGToggle.h"
#include "Styling/SlateBrush.h"
#include "TGToggleButton.generated.h"

UCLASS(Blueprintable)
class TGCOREUI_API UTGToggleButton : public UTGToggle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush HandleBrush;
    
    UTGToggleButton();
};

