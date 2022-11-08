#include "MOMissionsManager.h"

class UMOObjectiveNode;
class UMission;
class UReferencedMissionObject;
class USaveGame;
class UMOTextNode;
class UObjectiveAsset;

void UMOMissionsManager::SwapWithNextMission(UMission* SelectedMission) {
}

void UMOMissionsManager::Server_StartMission_Implementation(UMission* Mission, const FName MissionID, UReferencedMissionObject* ReferencedMissionObject) {
}

void UMOMissionsManager::Server_CompleteObjective_Implementation(FName ObjectiveName, UMission* Mission, uint8 RepetitionsCount) {
}

void UMOMissionsManager::SaveMissionsToSlot(const FString& SlotName, const int32 UserIndex) {
}

void UMOMissionsManager::SaveMissionsToObject(const uint8 PlayerNetworkIndex, USaveGame* SaveGameObject) {
}

void UMOMissionsManager::NotifyLastMissionNodeActivated(UMission* Mission) {
}

void UMOMissionsManager::MultiStartMission_Implementation(UMission* Mission, const FName MissionID, UReferencedMissionObject* ReferencedMissionObject) {
}

void UMOMissionsManager::MultiCompleteObjective_Implementation(FName ObjectiveName, UMission* Mission, uint8 RepetitionsCount) {
}

void UMOMissionsManager::LoadMissionsFromSlot(const FString& SlotName, const int32 UserIndex) {
}

void UMOMissionsManager::LoadMissionsFromObject(const uint8 PlayerNetworkIndex, USaveGame* SaveGameObject) {
}

bool UMOMissionsManager::IsMissionObjectiveInProgress(UMission* Mission, const FName MissionID, const FName ObjectiveName) {
    return false;
}

bool UMOMissionsManager::IsMissionInProgress(UMission* Mission, const FName MissionID) {
    return false;
}

bool UMOMissionsManager::IsMissionCompleted(UMission* Mission, const FName MissionID) {
    return false;
}

void UMOMissionsManager::HandleObjectiveCompleted(UMission* Mission, UMOObjectiveNode* OObjectiveNode) {
}

void UMOMissionsManager::HandleNodeActivated(UMission* Mission, UMOTextNode* Node) {
}

USaveGame* UMOMissionsManager::GetSavegameMissionsObject() {
    return NULL;
}

TArray<UMission*> UMOMissionsManager::GetMissionsInProgress() {
    return TArray<UMission*>();
}

TArray<UMission*> UMOMissionsManager::GetMissionsFinished() {
    return TArray<UMission*>();
}

UMission* UMOMissionsManager::GetMissionByTemplate(UMission* MissionTemplate) {
    return NULL;
}

void UMOMissionsManager::EndMission(UMission* Mission, bool IsSuccesfull) {
}

void UMOMissionsManager::CompleteObjectiveByAsset(UObjectiveAsset* ObjectiveAsset, UMission* Mission, uint8 RepetitionsCount) {
}

void UMOMissionsManager::CompleteObjective(FName ObjectiveName, UMission* Mission, uint8 RepetitionsCount) {
}

void UMOMissionsManager::ClientRecovery_Implementation(const FMissionSavegameData& MissionSavegameData) {
}

UMOMissionsManager::UMOMissionsManager() {
    this->SaveGameTemplate = NULL;
}

