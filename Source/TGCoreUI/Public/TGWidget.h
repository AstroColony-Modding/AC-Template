#pragma once
#include "CoreMinimal.h"
#include "Components/PanelWidget.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "OnWidgetHoverEventDelegate.h"
#include "Types/SlateEnums.h"
#include "OnWidgetClickedEventDelegate.h"
#include "OnWidgetPressedEventDelegate.h"
#include "OnWidgetReleasedEventDelegate.h"
#include "OnWidgetFocusReceivedEventDelegate.h"
#include "OnWidgetFocusLostEventDelegate.h"
#include "TGWidget.generated.h"

class USoundBase;

UCLASS(Blueprintable)
class TGCOREUI_API UTGWidget : public UPanelWidget {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TEnumAsByte<EButtonClickMethod::Type> ClickMethod;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TEnumAsByte<EButtonTouchMethod::Type> TouchMethod;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TEnumAsByte<EButtonPressMethod::Type> PressMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFocusable;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWidgetClickedEvent OnClicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWidgetPressedEvent OnPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWidgetReleasedEvent OnReleased;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWidgetHoverEvent OnHovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWidgetHoverEvent OnUnhovered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWidgetFocusReceivedEvent OnFocusReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWidgetFocusLostEvent OnFocusLost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldDisableAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldOverrideDefaultAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> PressedAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> ReleasedAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> HoveredAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> UnhoveredAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> FocusReceivedAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> FocusLostAudio;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UsePreviewValuesToShowFinalWidgetState;
    
    UPROPERTY(EditAnywhere)
    uint8 EditorPreviewStates;
    
public:
    UTGWidget();
    UFUNCTION(BlueprintCallable)
    void SetTouchMethod(TEnumAsByte<EButtonTouchMethod::Type> InTouchMethod);
    
    UFUNCTION(BlueprintCallable)
    void SetSelected(const bool InSelected);
    
    UFUNCTION(BlueprintCallable)
    void SetPressMethod(TEnumAsByte<EButtonPressMethod::Type> InPressMethod);
    
    UFUNCTION(BlueprintCallable)
    void SetPressed(const bool InPressed);
    
    UFUNCTION(BlueprintCallable)
    void SetIsFocusable(bool InIsFocusable);
    
    UFUNCTION(BlueprintCallable)
    void SetHovered(const bool InHovered);
    
    UFUNCTION(BlueprintCallable)
    void SetClickMethod(TEnumAsByte<EButtonClickMethod::Type> InClickMethod);
    
    UFUNCTION(BlueprintCallable)
    void SetActive(bool Inactive);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSelected() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPressed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive() const;
    
};

