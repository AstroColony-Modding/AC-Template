#pragma once
#include "CoreMinimal.h"
#include "EHOptionWidget.h"
#include "EHOptionInputBindingDisplayWidget.generated.h"

class UTGButton;
class UEHInputBindingDisplayViewModel;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHOptionInputBindingDisplayWidget : public UEHOptionWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTGButton* PrimaryBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHInputBindingDisplayViewModel* BindingViewModel;
    
public:
    UEHOptionInputBindingDisplayWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void HandleOnClicked();
    
};

