#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameFramework/PlayerInput.h"
#include "InputCoreTypes.h"
#include "BoolBindable.h"
#include "ColorBindable.h"
#include "FloatBindable.h"
#include "Int32Bindable.h"
#include "StringBindable.h"
#include "TextBindable.h"
#include "Texture2DBindable.h"
#include "Vector2DBindable.h"
#include "VisibilityBindable.h"
#include "TGUIFunctionLibrary.generated.h"

class UComboBoxString;
class UEditableText;
class UImage;
class UObject;
class USlider;
class UTGEditableTextBox;
class UTGRichTextBlock;
class UTGToggle;
class UTextBlock;
class UUserWidget;
class UWidget;
class UWidgetSwitcher;

UCLASS(Blueprintable)
class UTGUIFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTGUIFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void Visibility_BindWidgetVisibility(UPARAM(Ref) FVisibilityBindable& VisibilityBindable, UWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    static void Vector2D_BindWidgetRenderShear(UPARAM(Ref) FVector2DBindable& Vector2DBindable, UWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    static void Vector2D_BindRenderTranslation(UPARAM(Ref) FVector2DBindable& Vector2DBindable, UWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    static void Vector2D_BindRenderTransformPivot(UPARAM(Ref) FVector2DBindable& Vector2DBindable, UWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    static void Texture2D_BindImage(UPARAM(Ref) FTexture2DBindable& Texture2DBindable, UImage* Image, bool MatchSize);
    
    UFUNCTION(BlueprintCallable)
    static void Text_BindTGEditableTextBoxText(UPARAM(Ref) FTextBindable& TextBindable, UTGEditableTextBox* TextBox);
    
    UFUNCTION(BlueprintCallable)
    static void Text_BindTextBlockText(UPARAM(Ref) FTextBindable& TextBindable, UTextBlock* TextBlock);
    
    UFUNCTION(BlueprintCallable)
    static void Text_BindRichTextBlockText(UPARAM(Ref) FTextBindable& TextBindable, UTGRichTextBlock* RichTextBlock);
    
    UFUNCTION(BlueprintCallable)
    static void Text_BindEditableTextBoxText(UPARAM(Ref) FTextBindable& TextBindable, UEditableText* TextBox);
    
    UFUNCTION(BlueprintCallable)
    static void String_BindComboBoxStringOption(UPARAM(Ref) FStringBindable& StringBindable, UComboBoxString* ComboBoxString);
    
    UFUNCTION(BlueprintCallable)
    static void Int32_BindActiveWidgetIndex(UPARAM(Ref) FInt32Bindable& Int32Bindable, UWidgetSwitcher* WidgetSwitcher);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FInputActionKeyMapping GetKeyMappingForAction(const FName ActionName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FKey GetKeyForAction(const FName ActionName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FLinearColor GetColorByThemeName(UObject* WorldContextObject, FName ThemeName);
    
    UFUNCTION(BlueprintCallable)
    static void Float_BindSliderValue(UPARAM(Ref) FFloatBindable& FloatBindable, USlider* Slider);
    
    UFUNCTION(BlueprintCallable)
    static void Float_BindRenderOpacity(UPARAM(Ref) FFloatBindable& FloatBindable, UWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    static void Color_BindColorAndOpacity(UPARAM(Ref) FColorBindable& ColorBindable, UUserWidget* UserWidget);
    
    UFUNCTION(BlueprintCallable)
    static void Bool_BindToggleState(UPARAM(Ref) FBoolBindable& BoolBindable, UTGToggle* ToggleWidget);
    
    UFUNCTION(BlueprintCallable)
    static void Bool_BindIsEnabled(UPARAM(Ref) FBoolBindable& BoolBindable, UWidget* Widget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ActionHasKey(const FName ActionName, const FKey& Key);
    
};

