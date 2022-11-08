#include "EHSettingsCategoryWidget.h"

class UTGViewModel;
class UUserWidget;

void UEHSettingsCategoryWidget::HandleUserScrolled(float CurrentOffset) {
}

void UEHSettingsCategoryWidget::HandleSettingsOptionUnhovered(UUserWidget* InUserWidget) {
}

void UEHSettingsCategoryWidget::HandleSettingsOptionSelected(UTGViewModel* InViewModel) {
}

void UEHSettingsCategoryWidget::HandleSettingsOptionHovered(UUserWidget* InUserWidget) {
}

void UEHSettingsCategoryWidget::HandleSettingsButtonPressed(UTGViewModel* InViewModel) {
}

UEHSettingsCategoryWidget::UEHSettingsCategoryWidget() {
    this->SettingsOptionWidgetClass = NULL;
    this->SplitterWidgetClass = NULL;
    this->HortizontalSlotAligment = HAlign_Fill;
    this->ScrollTimeThreshold = 0.20f;
    this->MouseMovementThreshold = 1.00f;
    this->VerticalSettings = NULL;
    this->ScrollBox = NULL;
    this->SettingsCategoryViewModel = NULL;
    this->ScrollPadding = 0.00f;
    this->ShouldScrollAnimate = true;
    this->DescendantScrollDestination = EDescendantScrollDestination::IntoView;
}

