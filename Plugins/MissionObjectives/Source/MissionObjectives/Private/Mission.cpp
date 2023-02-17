#include "Mission.h"

class UMOBaseNode;
class UMOObjectiveNode;
class UMOTextNode;

void UMission::NotifyNodeActivated(UMOTextNode* ActivatedNode) {
}

bool UMission::IsObjectiveCompleted(const FName ObjectiveName) {
    return false;
}

bool UMission::IsObjectiveActive(const FName ObjectiveName) {
    return false;
}

UMOObjectiveNode* UMission::GetObjectiveByName(const FName ObjectiveName) {
    return NULL;
}

UMOTextNode* UMission::GetLastNodeWithBotText() {
    return NULL;
}

TArray<UMOBaseNode*> UMission::FindAllTreeTextNodes() {
    return TArray<UMOBaseNode*>();
}

UMission::UMission() {
    this->AssetName = TEXT("Default__Mission");
    this->bUseAssetNameAsMissionName = true;
    this->MissionIcon = NULL;
    this->ChangeLastActiveReasons = 1;
    this->ReferencedMissionObject = NULL;
    this->MissionState = EMissionState::None;
    this->MissionObjectivesRoot = NULL;
    this->UpdateGraph = NULL;
    this->UniqueID = 0;
    this->MissionTemplate = NULL;
}

