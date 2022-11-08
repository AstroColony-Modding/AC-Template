#include "EHSaveScreen.h"

class UEHBaseButtonWidget;

void UEHSaveScreen::HandleSaveButtonClicked(UEHBaseButtonWidget* ButtonWidget) {
}

void UEHSaveScreen::HandleRemoveFileClicked(UEHBaseButtonWidget* ButtonWidget) {
}

void UEHSaveScreen::HandleRemoveAllClicked(UEHBaseButtonWidget* ButtonWidget) {
}

void UEHSaveScreen::HandleBack() {
}


UEHSaveScreen::UEHSaveScreen() {
    this->SaveViewModel = NULL;
    this->SaveList = NULL;
    this->SaveButton = NULL;
    this->RemoveFileButton = NULL;
    this->RemoveAllButton = NULL;
    this->FilenameText = NULL;
}

