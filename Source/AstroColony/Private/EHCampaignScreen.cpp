#include "EHCampaignScreen.h"

class UEHBaseButtonWidget;

void UEHCampaignScreen::HandleStartTutorialButtonPressed(UEHBaseButtonWidget* Button) {
}

UEHCampaignScreen::UEHCampaignScreen() {
    this->CampaignViewModel = NULL;
    this->CampaignList = NULL;
    this->StartTutorialButton = NULL;
    this->CurrentlySelectedOption = NULL;
}

