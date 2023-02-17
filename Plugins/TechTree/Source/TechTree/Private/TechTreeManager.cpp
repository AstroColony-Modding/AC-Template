#include "TechTreeManager.h"

class USaveGame;
class UTTTechNode;
class UTechTreeWidget;
class UTechnologyAsset;
class UTechnologyTree;

void UTechTreeManager::UnlockTechnology(UTechnologyAsset* Technology) {
}

void UTechTreeManager::SaveTechToObject(const uint8 PlayerNetworkIndex, USaveGame* SaveGameObject) {
}

void UTechTreeManager::SaveTechStateFromSlot(const FString& SlotName, const int32 UserIndex) {
}

void UTechTreeManager::LoadTechStateFromSlot(const FString& SlotName, const int32 UserIndex) {
}

void UTechTreeManager::LoadTechFromObject(const uint8 PlayerNetworkIndex, USaveGame* SaveGameObject) {
}

bool UTechTreeManager::IsTechnologyUnlocked(UTechnologyAsset* Technology) {
    return false;
}

bool UTechTreeManager::IsChildTechnology(UTTTechNode* ParentNode, UTechnologyAsset* ChildNodeTechnology) {
    return false;
}

bool UTechTreeManager::HasUnlockedParents(UTechnologyAsset* Technology) {
    return false;
}

void UTechTreeManager::HandleTechnologyStateChanged(UTTTechNode* TechNode, bool IsUnlocked) {
}

UTechTreeWidget* UTechTreeManager::GetTechTreeWidget() {
    return NULL;
}

USaveGame* UTechTreeManager::GetSavegameTechObject() {
    return NULL;
}

UTTTechNode* UTechTreeManager::GetNodeFromTechAsset(UTechnologyAsset* Technology) {
    return NULL;
}

UTechnologyTree* UTechTreeManager::GetAssignedTechTree() {
    return NULL;
}

void UTechTreeManager::Client_UnlockTechnology_Implementation(UTechnologyAsset* Technology) {
}

void UTechTreeManager::AssignTechTreeWidget(UTechTreeWidget* InTechTreeWidget) {
}

void UTechTreeManager::AssignTechTree(UTechnologyTree* TechTree) {
}

UTechTreeManager::UTechTreeManager() {
    this->SaveGameTemplate = NULL;
    this->TechnologyTree = NULL;
    this->TechTreeWidget = NULL;
}

