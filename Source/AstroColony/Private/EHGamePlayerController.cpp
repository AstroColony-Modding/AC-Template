#include "EHGamePlayerController.h"
#include "Net/UnrealNetwork.h"

class UEHBarrierNetwork;
class AEHCharacter;
class APawn;
class AEHGrid;


void AEHGamePlayerController::ToggleControlMode(const bool ControlModeEnabled) {
}

void AEHGamePlayerController::ToggleCharacterRefillingOxygen_Implementation(const bool IsBarrierRefillingOxygen, UEHBarrierNetwork* BarrierNetwork) {
}



void AEHGamePlayerController::SetGamePaused(bool bPaused) {
}

void AEHGamePlayerController::SetDebugMode(bool IsOn) {
}

void AEHGamePlayerController::Server_PossesPawn_Implementation(APawn* InPawn, bool ShouldAttachCharacter) {
}

void AEHGamePlayerController::Server_PossesCharacterAtLocation_Implementation(const FVector& Location, const bool ShouldTeleportPlayer, bool ShouldDetachCharacter) {
}

void AEHGamePlayerController::Server_PossesCharacter_Implementation() {
}

bool AEHGamePlayerController::IsGirdDebugActive() {
    return false;
}

bool AEHGamePlayerController::IsCharacterPossesed() {
    return false;
}



void AEHGamePlayerController::HandlePlayerEnteredGrid(AEHGrid* Grid) {
}


void AEHGamePlayerController::GoToPreviousUniverse() {
}

void AEHGamePlayerController::GoToNextUniverse() {
}

FName AEHGamePlayerController::GetUniverseSignature() {
    return NAME_None;
}

AEHCharacter* AEHGamePlayerController::GetEHCharacter() {
    return NULL;
}

void AEHGamePlayerController::Client_NotifyPossessImpossible_Implementation() {
}

void AEHGamePlayerController::Client_BarrierOxygenRefilled_Implementation() {
}

void AEHGamePlayerController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AEHGamePlayerController, Health);
    DOREPLIFETIME(AEHGamePlayerController, Oxygen);
}

AEHGamePlayerController::AEHGamePlayerController() {
    this->ControlMode = false;
    this->BoosterMode = false;
    this->IsRefillingOxygen = false;
    this->Health = 100.00f;
    this->Oxygen = 100.00f;
    this->UniverseIndex = 0;
    this->IsCharacterFarAway = false;
    this->HasOxygen = true;
    this->LosingHealth = true;
    this->ShouldUpdateWorldOrigin = true;
    this->EnableDebugMode = true;
    this->HasPlayerVisitedPlanet = false;
    this->DebugMode = EEHDebugMode::None;
    this->IsDebugTravelUniverse = false;
    this->ScenarioManager = NULL;
}

