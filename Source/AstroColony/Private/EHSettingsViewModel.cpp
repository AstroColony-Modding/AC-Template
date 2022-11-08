#include "EHSettingsViewModel.h"

UEHSettingsViewModel::UEHSettingsViewModel() {
    this->TabCategoryViewModel = NULL;
    this->SettingsPreviewViewModel = NULL;
    this->SettingsWarningViewModel = NULL;
    this->SettingsAlertViewModel = NULL;
    this->HasPendingChanges = false;
    this->GameType = EEHBackgroundType::None;
    this->EHSettings = NULL;
    this->AudioManager = NULL;
}

