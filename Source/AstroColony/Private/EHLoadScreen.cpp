#include "EHLoadScreen.h"

class UEHBaseButtonWidget;

void UEHLoadScreen::HandleRemoveFileClicked(UEHBaseButtonWidget* ButtonWidget) {
}

void UEHLoadScreen::HandleRemoveAllClicked(UEHBaseButtonWidget* ButtonWidget) {
}

void UEHLoadScreen::HandleLoadButtonClicked(UEHBaseButtonWidget* ButtonWidget) {
}

void UEHLoadScreen::HandleBack() {
}

UEHLoadScreen::UEHLoadScreen() {
    this->LoadViewModel = NULL;
    this->LoadList = NULL;
    this->LoadButton = NULL;
    this->RemoveFileButton = NULL;
    this->RemoveAllButton = NULL;
}

