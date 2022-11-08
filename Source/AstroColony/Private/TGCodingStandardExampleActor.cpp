#include "TGCodingStandardExampleActor.h"
#include "Net/UnrealNetwork.h"

void ATGCodingStandardExampleActor::OnRep_WantsToSprint() {
}

void ATGCodingStandardExampleActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ATGCodingStandardExampleActor, WantsToSprint);
}

ATGCodingStandardExampleActor::ATGCodingStandardExampleActor() {
    this->MyMesh = NULL;
    this->WantsToSprint = false;
}

