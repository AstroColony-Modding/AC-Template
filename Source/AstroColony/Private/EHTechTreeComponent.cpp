#include "EHTechTreeComponent.h"
#include "Net/UnrealNetwork.h"

class UEHTechnologyAsset;
class UEHAsset;

void UEHTechTreeComponent::UpdateTechPointsDocked(const bool ArePointsDocked) {
}


void UEHTechTreeComponent::Server_TryUnlockTechnology_Implementation() {
}

void UEHTechTreeComponent::Server_ChangeResearchedTechnology_Implementation(UEHTechnologyAsset* TechnologyToResearch) {
}

void UEHTechTreeComponent::OnRep_CurrentlyReasearchTechnology(UEHTechnologyAsset* LastReasearchTechnology) {
}

bool UEHTechTreeComponent::IsUnlockedWithFeedback(UEHAsset* Item) {
    return false;
}

bool UEHTechTreeComponent::IsStructureUnlocked(UEHAsset* Structure) {
    return false;
}

bool UEHTechTreeComponent::IsRecipeUnlocked(const FName Name, const bool IsUnlockedByDefault) {
    return false;
}

bool UEHTechTreeComponent::IsProfessionUnlocked(UEHAsset* Technology) {
    return false;
}

bool UEHTechTreeComponent::IsPlantUnlocked(UEHAsset* Plant) {
    return false;
}

bool UEHTechTreeComponent::IsItemUnlocked(UEHAsset* Item) {
    return false;
}

bool UEHTechTreeComponent::IsGlobalPointUnlocked(UEHAsset* GlobalPoint) {
    return false;
}

bool UEHTechTreeComponent::IsGameplayEffectUnlocked(UEHAsset* GameplayEffect) {
    return false;
}

bool UEHTechTreeComponent::IsAnimalUnlocked(UEHAsset* Animal) {
    return false;
}

UEHTechnologyAsset* UEHTechTreeComponent::GetTechnologyToUnlock(UEHAsset* Asset) {
    return NULL;
}

void UEHTechTreeComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UEHTechTreeComponent, CurrentlyReasearchTechnology);
}

UEHTechTreeComponent::UEHTechTreeComponent() {
    this->EnableTechNotifications = true;
    this->AreTechPointsDocked = false;
    this->CurrentlyReasearchTechnology = NULL;
}

