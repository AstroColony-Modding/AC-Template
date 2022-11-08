#include "EHDeciderCombinatorObject.h"

void UEHDeciderCombinatorObject::UpdateMathCondition(uint8 NewMathConditionIndex) {
}

void UEHDeciderCombinatorObject::UpdateConditionValue(int32 NewConditionValue) {
}

void UEHDeciderCombinatorObject::HandleSelectedResourcesChanged() {
}

UEHDeciderCombinatorObject::UEHDeciderCombinatorObject() {
    this->ControlledDevice = NULL;
    this->MathConditionIndex = 0;
    this->ConditionValue = 1;
    this->Response = true;
}

