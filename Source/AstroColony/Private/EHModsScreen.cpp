#include "EHModsScreen.h"

class UEHBaseButtonWidget;

void UEHModsScreen::HandleRemoveModClicked(UEHBaseButtonWidget* ButtonWidget) {
}

void UEHModsScreen::HandleOpenModClicked(UEHBaseButtonWidget* ButtonWidget) {
}

void UEHModsScreen::HandleInstallModButtonClicked(UEHBaseButtonWidget* ButtonWidget) {
}

void UEHModsScreen::HandleBack() {
}

UEHModsScreen::UEHModsScreen() {
    this->ModsViewModel = NULL;
    this->ModsList = NULL;
    this->BrowseModsList = NULL;
    this->InstalModButton = NULL;
    this->RemoveModButton = NULL;
    this->OpenModButton = NULL;
}

