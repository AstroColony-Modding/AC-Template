#include "EHRadioButton.h"

void UEHRadioButton::SetToggled(const bool IsToggled) {
}

void UEHRadioButton::InitButton(const uint8 InRadioButtonID, const FString& InButtonName) {
}

void UEHRadioButton::HandleToggleStateChanged(bool IsToggled) {
}

FString UEHRadioButton::GetButtonName() {
    return TEXT("");
}

uint8 UEHRadioButton::GetButtonID() {
    return 0;
}

UEHRadioButton::UEHRadioButton() {
    this->CheckBox = NULL;
}

