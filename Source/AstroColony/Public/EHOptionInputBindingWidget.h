#pragma once
#include "CoreMinimal.h"
#include "EHOptionWidget.h"
#include "EHOptionInputBindingWidget.generated.h"

class UTGButton;
class UEHInputBindingViewModel;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHOptionInputBindingWidget : public UEHOptionWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseWheelUpThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseWheelDownThreshold;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTGButton* PrimaryBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHInputBindingViewModel* BindingViewModel;
    
public:
    UEHOptionInputBindingWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void HandleOnClicked();
    
};

