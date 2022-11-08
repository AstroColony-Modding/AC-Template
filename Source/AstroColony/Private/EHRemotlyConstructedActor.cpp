#include "EHRemotlyConstructedActor.h"






AEHRemotlyConstructedActor::AEHRemotlyConstructedActor() {
    this->CompletedExpeditionsCount = 0;
    this->CurrentlyConstructedPart = -1;
    this->AccumulatedEnergy = 0.00f;
    this->IsConstructionDone = false;
    this->IsPowerActivated = false;
}

