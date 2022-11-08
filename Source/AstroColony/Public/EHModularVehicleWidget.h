#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EHModularVehicleWidget.generated.h"

class UCanvasPanel;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHModularVehicleWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* RootCanvas;
    
public:
    UEHModularVehicleWidget();
};

