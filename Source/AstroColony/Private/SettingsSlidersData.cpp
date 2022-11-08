#include "SettingsSlidersData.h"

FSettingsSlidersData::FSettingsSlidersData() {
    this->SettingOptionType = ESettingOptionType::None;
    this->SliderStepType = ESliderStepType::ValueStep;
    this->GamepadKeyboardStepValue = 0.00f;
    this->StepRound = 0.00f;
    this->MouseWidgetStep = 0.00f;
    this->MinimumFractionalDigits = 0;
    this->MaximumFractionalDigits = 0;
}

