#include "EHAIFarmerObject.h"
#include "Net/UnrealNetwork.h"

void UEHAIFarmerObject::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UEHAIFarmerObject, CarriedItem);
    DOREPLIFETIME(UEHAIFarmerObject, CarriedWater);
    DOREPLIFETIME(UEHAIFarmerObject, CurrentPlant);
}

UEHAIFarmerObject::UEHAIFarmerObject() {
    this->CarriedItem = NULL;
    this->CarriedWater = 0;
    this->CurrentPlant = EHHarvestPlantTypes::None;
}

