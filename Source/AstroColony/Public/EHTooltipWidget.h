#pragma once
#include "CoreMinimal.h"
#include "TGUILayer.h"
#include "EHTooltipWidget.generated.h"

class UTGConfigurableTextBlock;
class UEHViewModel;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHTooltipWidget : public UTGUILayer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTGConfigurableTextBlock* TooltipTextBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEHViewModel* EHViewModel;
    
public:
    UEHTooltipWidget();
};

