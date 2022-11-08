#include "TGWidget.h"

void UTGWidget::SetTouchMethod(TEnumAsByte<EButtonTouchMethod::Type> InTouchMethod) {
}

void UTGWidget::SetSelected(const bool InSelected) {
}

void UTGWidget::SetPressMethod(TEnumAsByte<EButtonPressMethod::Type> InPressMethod) {
}

void UTGWidget::SetPressed(const bool InPressed) {
}

void UTGWidget::SetIsFocusable(bool InIsFocusable) {
}

void UTGWidget::SetHovered(const bool InHovered) {
}

void UTGWidget::SetClickMethod(TEnumAsByte<EButtonClickMethod::Type> InClickMethod) {
}

void UTGWidget::SetActive(bool Inactive) {
}

bool UTGWidget::IsSelected() const {
    return false;
}

bool UTGWidget::IsPressed() const {
    return false;
}

bool UTGWidget::IsActive() const {
    return false;
}

UTGWidget::UTGWidget() {
    this->ClickMethod = EButtonClickMethod::DownAndUp;
    this->TouchMethod = EButtonTouchMethod::DownAndUp;
    this->PressMethod = EButtonPressMethod::DownAndUp;
    this->IsFocusable = true;
    this->ShouldDisableAudio = false;
    this->ShouldOverrideDefaultAudio = false;
    this->UsePreviewValuesToShowFinalWidgetState = false;
    this->EditorPreviewStates = 1;
}

