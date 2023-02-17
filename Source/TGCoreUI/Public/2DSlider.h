#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/Widget.h"
#include "Components/Widget.h"
#include "2DSliderStyle.h"
#include "OnControllerCaptureBeginEvent2DDelegate.h"
#include "OnControllerCaptureEndEvent2DDelegate.h"
#include "OnFloatValueChangedEvent2DDelegate.h"
#include "OnMouseCaptureBeginEvent2DDelegate.h"
#include "OnMouseCaptureEndEvent2DDelegate.h"
#include "2DSlider.generated.h"

UCLASS(Blueprintable)
class TGCOREUI_API U2DSlider : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ValueX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ValueY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidget::FGetFloat ValueXDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidget::FGetFloat ValueYDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    F2DSliderStyle WidgetStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SliderHandleColor;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IndentHandle;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Locked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StepSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFocusable;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMouseCaptureBeginEvent2D OnMouseCaptureBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMouseCaptureEndEvent2D OnMouseCaptureEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnControllerCaptureBeginEvent2D OnControllerCaptureBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnControllerCaptureEndEvent2D OnControllerCaptureEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFloatValueChangedEvent2D OnValueChangedX;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFloatValueChangedEvent2D OnValueChangedY;
    
    U2DSlider();
    UFUNCTION(BlueprintCallable)
    void SetValue(FVector2D InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetStepSize(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSliderHandleColor(FLinearColor InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetLocked(bool InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetIndentHandle(bool InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCircleValue(FVector2D InCircleValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetCircleValue() const;
    
};

