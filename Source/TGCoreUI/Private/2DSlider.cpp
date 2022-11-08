#include "2DSlider.h"

void U2DSlider::SetValue(FVector2D InValue) {
}

void U2DSlider::SetStepSize(float InValue) {
}

void U2DSlider::SetSliderHandleColor(FLinearColor InValue) {
}

void U2DSlider::SetLocked(bool InValue) {
}

void U2DSlider::SetIndentHandle(bool InValue) {
}

void U2DSlider::SetCircleValue(FVector2D InCircleValue) {
}

FVector2D U2DSlider::GetValue() const {
    return FVector2D{};
}

FVector2D U2DSlider::GetCircleValue() const {
    return FVector2D{};
}

U2DSlider::U2DSlider() {
    this->ValueX = 0.00f;
    this->ValueY = 0.00f;
    this->IndentHandle = false;
    this->Locked = false;
    this->StepSize = 0.01f;
    this->IsFocusable = true;
}

