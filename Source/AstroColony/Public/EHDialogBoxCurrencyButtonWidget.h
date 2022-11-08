#pragma once
#include "CoreMinimal.h"
#include "EHDialogBoxButtonWidget.h"
#include "EHDialogBoxCurrencyButtonWidget.generated.h"

class UEHDialogBoxCurrencyButtonViewModel;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHDialogBoxCurrencyButtonWidget : public UEHDialogBoxButtonWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEHDialogBoxCurrencyButtonViewModel* DialogBoxCurrencyButtonViewModel;
    
public:
    UEHDialogBoxCurrencyButtonWidget();
};

