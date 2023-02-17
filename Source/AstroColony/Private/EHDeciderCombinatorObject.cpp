#include "EHDeciderCombinatorObject.h"

void UEHDeciderCombinatorObject::HandleSelectedResourcesChanged() {
}

UEHDeciderCombinatorObject::UEHDeciderCombinatorObject() {
    this->ControlledDevice = NULL;
    this->MathConditionIndex = 0;
    this->ConditionValue = 1;
    this->Response = true;
}

