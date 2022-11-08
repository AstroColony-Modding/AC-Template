#include "EHPlayerState.h"
#include "Net/UnrealNetwork.h"

void AEHPlayerState::UpdateReady(const bool ReadyIn) {
}

void AEHPlayerState::OnRep_Ready() {
}

void AEHPlayerState::OnRep_Name() {
}

void AEHPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AEHPlayerState, Name);
    DOREPLIFETIME(AEHPlayerState, Ready);
}

AEHPlayerState::AEHPlayerState() {
    this->Ready = false;
}

