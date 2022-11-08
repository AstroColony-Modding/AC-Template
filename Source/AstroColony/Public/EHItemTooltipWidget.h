#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EHItemInstance.h"
#include "EHItemTooltipWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHItemTooltipWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UEHItemTooltipWidget();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SupportsSplit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Init(const FEHItemInstance& ItemInstance);
    
};

