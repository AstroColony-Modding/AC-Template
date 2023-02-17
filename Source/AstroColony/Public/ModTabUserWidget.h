#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "HUBModDefinition.h"
#include "ModTabUserWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UModTabUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UModTabUserWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInit(const FHUBModDefinition& ModDefinition);
    
};

