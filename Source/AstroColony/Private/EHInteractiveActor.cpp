#include "EHInteractiveActor.h"
#include "Net/UnrealNetwork.h"

class UEHInteractableObject;

UEHInteractableObject* AEHInteractiveActor::GetInteractableObject() {
    return NULL;
}

void AEHInteractiveActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AEHInteractiveActor, InteractableObject);
}

AEHInteractiveActor::AEHInteractiveActor() {
    this->InteractableObject = NULL;
}

