#include "EHSettingsPreviewViewModel.h"

class UEHOptionViewModel;

void UEHSettingsPreviewViewModel::OnOptionSelectedChanged(UEHOptionViewModel* ViewModel) {
}

UEHSettingsPreviewViewModel::UEHSettingsPreviewViewModel() {
    this->SettingsGamepadPreviewViewModel = NULL;
    this->SettingsGamepadPreviewFrontViewModel = NULL;
    this->SettingsOptionViewModel = NULL;
}

