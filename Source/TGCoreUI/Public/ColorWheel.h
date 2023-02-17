#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/Widget.h"
#include "OnMouseColorCaptureBeginEventDelegate.h"
#include "OnMouseColorCaptureEndEventDelegate.h"
#include "OnValueChangedEventDelegate.h"
#include "ColorWheel.generated.h"

UCLASS(Blueprintable)
class TGCOREUI_API UColorWheel : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMouseColorCaptureBeginEvent OnMouseCaptureBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMouseColorCaptureEndEvent OnMouseCaptureEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnValueChangedEvent OnValueChanged;
    
    UColorWheel();
    UFUNCTION(BlueprintCallable)
    void SetColor(const FLinearColor& LinearColor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetCurrentColor() const;
    
};

