#include "EHRecyclingMachine.h"
#include "Net/UnrealNetwork.h"

void UEHRecyclingMachine::OnRep_GarbageContainer() {
}

void UEHRecyclingMachine::HandleItemChanged() {
}

void UEHRecyclingMachine::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UEHRecyclingMachine, GarbageContainer);
}

UEHRecyclingMachine::UEHRecyclingMachine() {
    this->GarbageContainer = NULL;
    this->RecyclingProcessingTime = 5.00f;
}

