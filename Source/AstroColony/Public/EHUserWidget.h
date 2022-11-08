#pragma once
#include "CoreMinimal.h"
#include "TGUserWidget.h"
#include "EHUserWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHUserWidget : public UTGUserWidget {
    GENERATED_BODY()
public:
    UEHUserWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnterEvent();
    
};

