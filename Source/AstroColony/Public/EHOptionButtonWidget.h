#pragma once
#include "CoreMinimal.h"
#include "EHOptionWidget.h"
#include "EHOptionButtonWidget.generated.h"

class UTGWidget;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHOptionButtonWidget : public UEHOptionWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTGWidget* InteractiveArea;
    
public:
    UEHOptionButtonWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void HandleClicked();
    
};

