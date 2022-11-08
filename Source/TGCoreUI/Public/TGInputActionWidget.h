#pragma once
#include "CoreMinimal.h"
#include "TGRichTextBlock.h"
#include "TGInputActionWidget.generated.h"

UCLASS(Blueprintable)
class TGCOREUI_API UTGInputActionWidget : public UTGRichTextBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActionName;
    
    UTGInputActionWidget();
    UFUNCTION(BlueprintCallable)
    void SetActionName(const FName& InActionName);
    
};

