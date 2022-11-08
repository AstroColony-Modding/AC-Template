#include "TGToggle.h"

void UTGToggle::Toggle() {
}

void UTGToggle::SetToggled(bool IsToggled) {
}

void UTGToggle::SetTextColorAndOpacity(FSlateColor InColorAndOpacity) {
}

void UTGToggle::SetText(FText InText) {
}

void UTGToggle::SetColorAndOpacity(FLinearColor InColorAndOpacity) {
}

UTGToggle::UTGToggle() {
    this->CheckBoxType = ESlateCheckBoxType::CheckBox;
    this->LockToggleState = false;
    this->Toggled = false;
    this->GlowZOrder = 0;
}

