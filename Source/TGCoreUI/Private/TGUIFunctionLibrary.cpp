#include "TGUIFunctionLibrary.h"

class UTextBlock;
class UWidget;
class UWidgetSwitcher;
class UImage;
class UObject;
class UTGEditableTextBox;
class UTGRichTextBlock;
class UEditableText;
class UComboBoxString;
class UTGToggle;
class USlider;
class UUserWidget;

void UTGUIFunctionLibrary::Visibility_BindWidgetVisibility(FVisibilityBindable& VisibilityBindable, UWidget* Widget) {
}

void UTGUIFunctionLibrary::Vector2D_BindWidgetRenderShear(FVector2DBindable& Vector2DBindable, UWidget* Widget) {
}

void UTGUIFunctionLibrary::Vector2D_BindRenderTranslation(FVector2DBindable& Vector2DBindable, UWidget* Widget) {
}

void UTGUIFunctionLibrary::Vector2D_BindRenderTransformPivot(FVector2DBindable& Vector2DBindable, UWidget* Widget) {
}

void UTGUIFunctionLibrary::Texture2D_BindImage(FTexture2DBindable& Texture2DBindable, UImage* Image, bool MatchSize) {
}

void UTGUIFunctionLibrary::Text_BindTGEditableTextBoxText(FTextBindable& TextBindable, UTGEditableTextBox* TextBox) {
}

void UTGUIFunctionLibrary::Text_BindTextBlockText(FTextBindable& TextBindable, UTextBlock* TextBlock) {
}

void UTGUIFunctionLibrary::Text_BindRichTextBlockText(FTextBindable& TextBindable, UTGRichTextBlock* RichTextBlock) {
}

void UTGUIFunctionLibrary::Text_BindEditableTextBoxText(FTextBindable& TextBindable, UEditableText* TextBox) {
}

void UTGUIFunctionLibrary::String_BindComboBoxStringOption(FStringBindable& StringBindable, UComboBoxString* ComboBoxString) {
}

void UTGUIFunctionLibrary::Int32_BindActiveWidgetIndex(FInt32Bindable& Int32Bindable, UWidgetSwitcher* WidgetSwitcher) {
}

FInputActionKeyMapping UTGUIFunctionLibrary::GetKeyMappingForAction(const FName ActionName) {
    return FInputActionKeyMapping{};
}

FKey UTGUIFunctionLibrary::GetKeyForAction(const FName ActionName) {
    return FKey{};
}

FLinearColor UTGUIFunctionLibrary::GetColorByThemeName(UObject* WorldContextObject, FName ThemeName) {
    return FLinearColor{};
}

void UTGUIFunctionLibrary::Float_BindSliderValue(FFloatBindable& FloatBindable, USlider* Slider) {
}

void UTGUIFunctionLibrary::Float_BindRenderOpacity(FFloatBindable& FloatBindable, UWidget* Widget) {
}

void UTGUIFunctionLibrary::Color_BindColorAndOpacity(FColorBindable& ColorBindable, UUserWidget* UserWidget) {
}

void UTGUIFunctionLibrary::Bool_BindToggleState(FBoolBindable& BoolBindable, UTGToggle* ToggleWidget) {
}

void UTGUIFunctionLibrary::Bool_BindIsEnabled(FBoolBindable& BoolBindable, UWidget* Widget) {
}

UTGUIFunctionLibrary::UTGUIFunctionLibrary() {
}

