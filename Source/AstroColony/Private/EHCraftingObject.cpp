#include "EHCraftingObject.h"
#include "Net/UnrealNetwork.h"

class AActor;

void UEHCraftingObject::OnRep_ProducedWater() {
}

void UEHCraftingObject::OnRep_ProducedElectricity() {
}

bool UEHCraftingObject::HasPower() const {
    return false;
}

int32 UEHCraftingObject::GetProducedElectricity() {
    return 0;
}

bool UEHCraftingObject::GetIsWaterDevice() {
    return false;
}

int32 UEHCraftingObject::GetConsumedElectricity() {
    return 0;
}

AActor* UEHCraftingObject::GetChildActor() {
    return NULL;
}

void UEHCraftingObject::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UEHCraftingObject, ProducedElectricity);
    DOREPLIFETIME(UEHCraftingObject, ProducedWater);
}

UEHCraftingObject::UEHCraftingObject() {
    this->ElectricNetwork = NULL;
    this->ProducedElectricity = 0;
    this->ConsumedElectricity = 0;
    this->ConsumedWater = 0;
    this->ProducedWater = -1;
    this->WaterNetwork = NULL;
}

