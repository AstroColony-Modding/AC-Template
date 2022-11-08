#include "EHEnergyTransmitterObject.h"

class UObject;

void UEHEnergyTransmitterObject::SetTransmittedEnergy(const float TransmittedEnergyIn) {
}

void UEHEnergyTransmitterObject::SelectEnergyReceiver(UObject* InEnergyReceiver) {
}

void UEHEnergyTransmitterObject::CancelEnergyReceiver() {
}

UEHEnergyTransmitterObject::UEHEnergyTransmitterObject() {
    this->EnergyReceiver = NULL;
    this->TransmittedEnergy = 100.00f;
}

