#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EHPanelNavigationWidget.generated.h"

class UNamedSlot;

UCLASS(Blueprintable, EditInlineNew)
class UEHPanelNavigationWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNamedSlot* PanelWidgetSlot;
    
    UEHPanelNavigationWidget();
};

