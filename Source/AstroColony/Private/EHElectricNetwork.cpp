#include "EHElectricNetwork.h"

void UEHElectricNetwork::UpdateBlackout(bool HasBlackout) {
}

UEHElectricNetwork::UEHElectricNetwork() {
    this->ProducedElectricity = 0;
    this->ConsumedElectricity = 0;
    this->HasPowerBlockout = false;
    this->PowerEfficiency = 0.00f;
    this->GenerationEfficiency = 0.00f;
}

