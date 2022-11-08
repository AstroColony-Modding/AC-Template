#pragma once
#include "CoreMinimal.h"
#include "TGUserWidgetFocusable.h"
#include "TGInvisibleSlotWidget.generated.h"

class UTGGridWidget;

UCLASS(Blueprintable, EditInlineNew)
class TGCOREUI_API UTGInvisibleSlotWidget : public UTGUserWidgetFocusable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotIndex;
    
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UTGGridWidget> GridReference;
    
public:
    UTGInvisibleSlotWidget();
};

