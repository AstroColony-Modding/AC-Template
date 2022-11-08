#include "EHMultiplayerScreen.h"

class UEHBaseButtonWidget;

void UEHMultiplayerScreen::UpdateButtonBar(bool ShowBack) {
}


void UEHMultiplayerScreen::HandleRemoveFileClicked(UEHBaseButtonWidget* ButtonWidget) {
}

void UEHMultiplayerScreen::HandleHostGameButtonPressed(UEHBaseButtonWidget* Button) {
}

FString UEHMultiplayerScreen::GetSelectedSavegameName() {
    return TEXT("");
}

UEHMultiplayerScreen::UEHMultiplayerScreen() {
    this->MultiplayerViewModel = NULL;
    this->HostGameButton = NULL;
    this->LoadList = NULL;
    this->RemoveFileButton = NULL;
}

