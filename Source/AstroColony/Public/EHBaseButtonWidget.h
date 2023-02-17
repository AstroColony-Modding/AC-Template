#pragma once
#include "CoreMinimal.h"
#include "ETGInputControllerType.h"
#include "ConfigurableUIInterface.h"
#include "EHBaseButtonProperties.h"
#include "EHUserWidget.h"
#include "OnClickedDelegateDelegate.h"
#include "Components/HorizontalBox.h"
#include "Components/BackgroundBlur.h"
#include "Components/SizeBox.h"
#include "EHBaseButtonWidget.generated.h"

class UEHBaseButtonViewModel;
class UImage;
class UTGConfigurableTextBlock;
class UTGTile;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHBaseButtonWidget : public UEHUserWidget, public IConfigurableUIInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnClickedDelegate OnClickedDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEHBaseButtonProperties Properties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* OnEnterAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* OnExitAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* OnFocusedAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* OnUnfocusedAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* OnHoveredAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* OnUnhoveredAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* OnClickedAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* OnPressedAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTGConfigurableTextBlock* ButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTGConfigurableTextBlock* ButtonShadowText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* ContentContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHorizontalBox* ShadowContentContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBackgroundBlur* ShadowBackgroundBlur;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ButtonImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* FocusedImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* HatchingImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTGTile* ButtonTile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* ButtonSizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseHatching;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEHBaseButtonViewModel* BaseButtonViewModel;
    
public:
    UEHBaseButtonWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void ReturnFocusAfterClick();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnhoveredEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUnfocusedEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPressedEvent();
    
    /*UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputControllerChanged(TEnumAsByte<ETGInputControllerType> InputControllerType);*/
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHoveredEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFocusedEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClickedEvent();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnUnhovered();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnUnfocused();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnPressed();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnHovered();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnFocused();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnClicked();
    
    
    // Fix for true pure virtual functions not being implemented
};

