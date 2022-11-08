#include "EHElectricNetwork.h"

class AEHGrid;

void UEHElectricNetwork::UpdateBlackout(AEHGrid* Grid, bool HasBlackout) {
}

UEHElectricNetwork::UEHElectricNetwork() {
    this->ProducedElectricity = 0;
    this->ConsumedElectricity = 0;
    this->HasPowerBlockout = false;
    this->PowerEfficiency = 0.00f;
    this->GenerationEfficiency = 0.00f;
}

