#include "EHCampaignListWidget.h"


void UEHCampaignListWidget::HandleUserScrolled(float CurrentOffset) {
}

UEHCampaignListWidget::UEHCampaignListWidget() {
    this->CampaignOptionWidgetClass = NULL;
    this->HortizontalSlotAligment = HAlign_Fill;
    this->ScrollTimeThreshold = 0.20f;
    this->MouseMovementThreshold = 1.00f;
    this->VerticalScenariosList = NULL;
    this->ScrollBox = NULL;
    this->CampaignListViewModel = NULL;
    this->ScrollPadding = 0.00f;
    this->ShouldScrollAnimate = true;
    this->DescendantScrollDestination = EDescendantScrollDestination::IntoView;
    this->CurrentlySelectedOption = NULL;
}

