#include "EHOptionInputBindingWidget.h"

void UEHOptionInputBindingWidget::HandleOnClicked() {
}

UEHOptionInputBindingWidget::UEHOptionInputBindingWidget() {
    this->MouseWheelUpThreshold = 0.02f;
    this->MouseWheelDownThreshold = -0.02f;
    this->PrimaryBinding = NULL;
    this->BindingViewModel = NULL;
}

