#include "EHLogicSplitterObject.h"

void UEHLogicSplitterObject::UpdateSplittingRatios(const TArray<int32>& NewSplittingRatios) {
}

TArray<float> UEHLogicSplitterObject::GetPercentageRatios() {
    return TArray<float>();
}

UEHLogicSplitterObject::UEHLogicSplitterObject() {
    this->DirectionIndex = 2;
    this->DirectionValues.AddDefaulted(3);
    this->SplittingRatios.AddDefaulted(3);
}

