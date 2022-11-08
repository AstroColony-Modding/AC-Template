#include "EHAIBreederObject.h"
#include "Net/UnrealNetwork.h"

void UEHAIBreederObject::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UEHAIBreederObject, CarriedItem);
    DOREPLIFETIME(UEHAIBreederObject, CarriedWater);
    DOREPLIFETIME(UEHAIBreederObject, CurrentAnimal);
}

UEHAIBreederObject::UEHAIBreederObject() {
    this->CarriedWater = 0;
    this->CurrentAnimal = EHBreedAnimalTypes::None;
}

