#include "EHSettingsScreen.h"

class UTGViewModel;

void UEHSettingsScreen::ShowRestoreToDefaultPopup() {
}

void UEHSettingsScreen::HandleTabSelected(UTGViewModel* InViewModel) {
}

void UEHSettingsScreen::HandleSaveSettings() {
}

void UEHSettingsScreen::HandlePopupAction(FName Action) {
}

void UEHSettingsScreen::HandleLoadSettings() {
}

void UEHSettingsScreen::HandleCategoryOptionButtonPressed(UTGViewModel* InViewModel) {
}

void UEHSettingsScreen::HandleBack() {
}

UEHSettingsScreen::UEHSettingsScreen() {
    this->SettingsViewModel = NULL;
    this->SettingsCategory = NULL;
    this->SettingsTabs = NULL;
}

