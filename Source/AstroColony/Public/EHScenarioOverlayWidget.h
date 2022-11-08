#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EHScenarioOverlayWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHScenarioOverlayWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UEHScenarioOverlayWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeWidetMarkerVisibility(const FName& Name, const bool IsVisible);
    
};

