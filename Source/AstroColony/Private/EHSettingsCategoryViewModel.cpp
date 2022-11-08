#include "EHSettingsCategoryViewModel.h"

class UEHSettingsOptionViewModel;

void UEHSettingsCategoryViewModel::HandleSettingChanged(UEHSettingsOptionViewModel* ViewModel) {
}

void UEHSettingsCategoryViewModel::HandleInputBindingChanged(UEHSettingsOptionViewModel* ViewModel) {
}

UEHSettingsCategoryViewModel::UEHSettingsCategoryViewModel() {
    this->CurrentOption = NULL;
}

