#include "EHAIHumanObject.h"
#include "Net/UnrealNetwork.h"

class UEHItem;

void UEHAIHumanObject::Multi_FoodReceived_Implementation(UEHItem* Food) {
}

void UEHAIHumanObject::Multi_EnableBillboard_Implementation(const EEHBillboardType BillboardType) {
}

void UEHAIHumanObject::Multi_DisableBillboard_Implementation(const EEHBillboardType BillboardType) {
}

void UEHAIHumanObject::InitCollectionData() {
}

FEHHumanNeed UEHAIHumanObject::GetHumanNeed(const EHHumanNeedID HumanNeedID) {
    return FEHHumanNeed{};
}

void UEHAIHumanObject::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UEHAIHumanObject, IsFemale);
    DOREPLIFETIME(UEHAIHumanObject, HumanName);
    DOREPLIFETIME(UEHAIHumanObject, HumanHeadID);
}

UEHAIHumanObject::UEHAIHumanObject() {
    this->IsFemale = false;
    this->HumanHeadID = 0;
}

