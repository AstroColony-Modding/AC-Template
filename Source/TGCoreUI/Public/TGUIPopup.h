#pragma once
#include "CoreMinimal.h"
#include "TGUIScene.h"
#include "TGUIPopup.generated.h"

class UTGPopupViewModel;

UCLASS(Blueprintable, EditInlineNew)
class TGCOREUI_API UTGUIPopup : public UTGUIScene {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowDismissal;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTGPopupViewModel* PopupViewModel;
    
public:
    UTGUIPopup();
};

