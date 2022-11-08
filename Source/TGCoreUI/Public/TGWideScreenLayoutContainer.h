#pragma once
#include "CoreMinimal.h"
#include "Components/PanelWidget.h"
#include "TGWideScreenLayoutContainer.generated.h"

UCLASS(Blueprintable)
class TGCOREUI_API UTGWideScreenLayoutContainer : public UPanelWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDesiredWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDesiredHeight;
    
    UTGWideScreenLayoutContainer();
};

