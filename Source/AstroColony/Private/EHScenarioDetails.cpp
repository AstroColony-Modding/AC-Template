#include "EHScenarioDetails.h"

FEHScenarioDetails::FEHScenarioDetails() {
    this->IsScenarioSuccessful = false;
    this->ScenarioFailureReason = EEHScenarioFailureReason::None;
    this->Icon = NULL;
    this->PlayersCount = 0;
}

