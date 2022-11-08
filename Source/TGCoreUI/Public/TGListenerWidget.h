#pragma once
#include "CoreMinimal.h"
#include "TGUserWidget.h"
#include "TGListenerWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TGCOREUI_API UTGListenerWidget : public UTGUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldPropagateInitToChildren;
    
    UTGListenerWidget();
};

