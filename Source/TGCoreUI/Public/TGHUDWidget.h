#pragma once
#include "CoreMinimal.h"
#include "TGListenerWidget.h"
#include "TGHUDWidget.generated.h"

class ATGHUD;

UCLASS(Blueprintable, EditInlineNew)
class TGCOREUI_API UTGHUDWidget : public UTGListenerWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<ATGHUD> HUD;
    
public:
    UTGHUDWidget();
};

