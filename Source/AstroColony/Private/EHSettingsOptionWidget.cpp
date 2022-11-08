#include "EHSettingsOptionWidget.h"

class UTGViewModel;


void UEHSettingsOptionWidget::SelectOption() {
}

void UEHSettingsOptionWidget::HandleUnhovered() {
}

void UEHSettingsOptionWidget::HandleSelectionChange(const bool IsSelected) {
}

void UEHSettingsOptionWidget::HandleOptionsChange() {
}

void UEHSettingsOptionWidget::HandleOptionButtonPressed(UTGViewModel* InViewModel) {
}

void UEHSettingsOptionWidget::HandleIsEnabledChange(const bool IsEnabled) {
}

void UEHSettingsOptionWidget::HandleIsCollapsedChange(const bool IsCollapsed) {
}

void UEHSettingsOptionWidget::HandleHovered() {
}

void UEHSettingsOptionWidget::HandleClicked() {
}

UEHSettingsOptionWidget::UEHSettingsOptionWidget() {
    this->OptionPanel = NULL;
    this->OptionWidget = NULL;
    this->InteractiveArea = NULL;
    this->SettingsOptionViewModel = NULL;
}

