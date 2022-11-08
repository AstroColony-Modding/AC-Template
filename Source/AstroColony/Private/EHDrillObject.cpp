#include "EHDrillObject.h"

void UEHDrillObject::StartDrilling() {
}

void UEHDrillObject::Multi_NotifyDrillMoved_Implementation(const FIntVector& Coord) {
}

TArray<FEHItemInstance> UEHDrillObject::GetProcessedItems() {
    return TArray<FEHItemInstance>();
}

UEHDrillObject::UEHDrillObject() {
    this->IsBigDrill = false;
    this->ResourceToMine = NULL;
    this->IsDrilling = false;
}

