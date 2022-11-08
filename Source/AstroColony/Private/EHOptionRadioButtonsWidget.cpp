#include "EHOptionRadioButtonsWidget.h"

void UEHOptionRadioButtonsWidget::UpdateToggledRadiobuttonVisual(const uint8 RadioButtonID) {
}

void UEHOptionRadioButtonsWidget::HandleToggleStateChanged(uint8 RadioButtonID, bool bIsToggled) {
}

UEHOptionRadioButtonsWidget::UEHOptionRadioButtonsWidget() {
    this->HorizontalButtonBox = NULL;
    this->RadioButtonClass = NULL;
    this->RadioButtonsViewModel = NULL;
}

