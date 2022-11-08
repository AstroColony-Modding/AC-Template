#include "EHGameInstance.h"

class UEHScreenManager;
class AEHPlayerController;
class UEHLayerManager;
class UEHAchievementsManager;

void UEHGameInstance::StartAsyncSoftAssetsLoading() {
}

void UEHGameInstance::ResetState() {
}

void UEHGameInstance::QuickSave() {
}

void UEHGameInstance::QuickLoad() {
}


bool UEHGameInstance::IsSandboxGame() {
    return false;
}

bool UEHGameInstance::IsLoadGameFinished() {
    return false;
}

bool UEHGameInstance::IsAsyncSoftLoadingActive() {
    return false;
}

bool UEHGameInstance::HasSavegame() {
    return false;
}

float UEHGameInstance::GetSessionTimeInSeconds() {
    return 0.0f;
}

UEHScreenManager* UEHGameInstance::GetScreenManager() {
    return NULL;
}

FEHScenarioParams UEHGameInstance::GetScenarioParams(FName Name) {
    return FEHScenarioParams{};
}

uint8 UEHGameInstance::GetPlayerNetworkIndex(AEHPlayerController* PlayerController) {
    return 0;
}

UEHLayerManager* UEHGameInstance::GetLayerManager() {
    return NULL;
}

float UEHGameInstance::GetAsyncSoftPhaseProgress() {
    return 0.0f;
}

FText UEHGameInstance::GetAsyncSoftPhaseName() {
    return FText::GetEmpty();
}

UEHAchievementsManager* UEHGameInstance::GetAchievementsManager() {
    return NULL;
}

void UEHGameInstance::DebugToast(const FString& NewDebugToast) {
}

void UEHGameInstance::CreateAutosave(int32 AutosaveMaxCount) {
}

UEHGameInstance::UEHGameInstance() {
    this->SavegameClass = NULL;
    this->NumberOfPlayers = 2;
    this->ScenarioName = TEXT("Sandbox");
    this->UseCampaignScenarioParams = false;
    this->CurrentSaveGame = NULL;
    this->PlayerNetworkID = 0;
    this->SoftAsyncLoadPhase = EEHSoftAsyncLoadPhase::PrimaryAssets;
    this->SoftAsyncLoadingDelay = 3.00f;
    this->AsyncSoftAssetsCounter = 0;
}

