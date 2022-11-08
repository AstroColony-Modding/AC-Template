#include "EHSummaryScreen.h"

class UEHBaseButtonWidget;

void UEHSummaryScreen::HandleLoadClicked(UEHBaseButtonWidget* ButtonWidget) {
}

void UEHSummaryScreen::HandleEndMissionClicked(UEHBaseButtonWidget* ButtonWidget) {
}

void UEHSummaryScreen::HandleContinuePlayingClicked(UEHBaseButtonWidget* ButtonWidget) {
}

UEHSummaryScreen::UEHSummaryScreen() {
    this->ContinuePlaying = NULL;
    this->EndMission = NULL;
    this->BackToMainMenu = NULL;
    this->LoadGame = NULL;
    this->SummaryViewModel = NULL;
}

