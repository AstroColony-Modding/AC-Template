#pragma once
#include "CoreMinimal.h"
#include "EHOptionWidget.h"
#include "Types/SlateEnums.h"
#include "EHOptionSliderWidget.generated.h"

class UEHSliderViewModel;
class USlider;
class UTGEditableTextBox;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHOptionSliderWidget : public UEHOptionWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USlider* Slider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTGEditableTextBox* Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHSliderViewModel* SliderViewModel;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldFirstDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldInterval;
    
public:
    UEHOptionSliderWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void SetSliderValue(float ChangedValue);
    
    UFUNCTION()
    void HandleTextComitted(const FText& NewText, TEnumAsByte<ETextCommit::Type> CommitMethod);
    
    UFUNCTION(BlueprintCallable)
    void HandleSliderValueChanged(float ChangedValue);
    
};

