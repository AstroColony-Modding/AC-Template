#include "EHScenarioComponent.h"

class UMission;

bool UEHScenarioComponent::IsMissionStarted() {
    return false;
}

FCampaignData UEHScenarioComponent::GetScenarioCampaignData() {
    return FCampaignData{};
}

UMission* UEHScenarioComponent::GetNextScenarioMission() {
    return NULL;
}

UEHScenarioComponent::UEHScenarioComponent() {
    this->SelectedMission = NULL;
    this->ScenarioOvelrayClass = NULL;
}

