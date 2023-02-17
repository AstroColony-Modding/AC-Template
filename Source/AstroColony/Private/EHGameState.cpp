#include "EHGameState.h"
#include "Net/UnrealNetwork.h"

void AEHGameState::OnRep_GlobalPoints() {
}

void AEHGameState::Multi_SetGlobalTimeDilation_Implementation(float GlobalTimeDilation) {
}

int32 AEHGameState::GetPointByType(const EGlobalPointType GlobalPointType) {
    return 0;
}

void AEHGameState::AddGlobalPoints(const TArray<FEHGlobalPointInstance>& GlobalPointInstances) {
}

void AEHGameState::AddGlobalPoint(const FEHGlobalPointInstance& GlobalPointInstance) {
}

void AEHGameState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AEHGameState, NumberOfReplicatedLoadActors);
    DOREPLIFETIME(AEHGameState, GlobalPoints);
}

AEHGameState::AEHGameState() {
    this->NumberOfReplicatedLoadActors = 0;
}

