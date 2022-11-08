#include "EHMineObject.h"

class UEHWorldItem;

UEHWorldItem* UEHMineObject::GetResourceToMine() {
    return NULL;
}

bool UEHMineObject::ChangeMiningResource(const EEHMiningResourceType InMiningResource) {
    return false;
}

UEHMineObject::UEHMineObject() {
}

