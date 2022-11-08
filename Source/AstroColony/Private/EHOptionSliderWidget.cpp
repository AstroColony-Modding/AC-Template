#include "EHOptionSliderWidget.h"

void UEHOptionSliderWidget::SetSliderValue(float ChangedValue) {
}

void UEHOptionSliderWidget::HandleTextComitted(const FText& NewText, TEnumAsByte<ETextCommit::Type> CommitMethod) {
}

void UEHOptionSliderWidget::HandleSliderValueChanged(float ChangedValue) {
}

UEHOptionSliderWidget::UEHOptionSliderWidget() {
    this->Slider = NULL;
    this->Text = NULL;
    this->SliderViewModel = NULL;
    this->HoldFirstDelay = 0.15f;
    this->HoldInterval = 0.02f;
}

