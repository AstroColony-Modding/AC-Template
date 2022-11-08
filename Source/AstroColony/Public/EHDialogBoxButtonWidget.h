#pragma once
#include "CoreMinimal.h"
#include "TGUserWidget.h"
#include "EHDialogBoxButtonWidget.generated.h"

class UEHBaseButtonWidget;
class UEHDialogBoxButtonViewModel;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHDialogBoxButtonWidget : public UTGUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHBaseButtonWidget* ButtonWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEHDialogBoxButtonViewModel* DialogBoxButtonViewModel;
    
public:
    UEHDialogBoxButtonWidget();
};

