#include "EHInteractivePawn.h"

class UEHInteractableObject;

UEHInteractableObject* AEHInteractivePawn::GetInteractableObject() {
    return NULL;
}

AEHInteractivePawn::AEHInteractivePawn() {
    this->PossesedFlags = 0;
}

