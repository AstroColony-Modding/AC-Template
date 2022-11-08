#include "EHSettingsOptionViewModel.h"

class UEHOptionViewModel;

void UEHSettingsOptionViewModel::HandleOptionChanged(UEHOptionViewModel* ViewModel) {
}

UEHSettingsOptionViewModel::UEHSettingsOptionViewModel() {
    this->WidgetType = ESettingWidgetType::None;
    this->PreviewType = ESettingPreviewType::None;
    this->OptionViewModel = NULL;
}

