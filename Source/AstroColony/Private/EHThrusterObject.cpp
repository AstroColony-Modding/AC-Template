#include "EHThrusterObject.h"

class UEHThrusterNetwork;

void UEHThrusterObject::SetThrustPowerManual(const float PowerIn) {
}

void UEHThrusterObject::SetThrustDirectionManual(const float AngleYAxis, const float AngleZAxis) {
}

bool UEHThrusterObject::IsThrusterActive() const {
    return false;
}

UEHThrusterNetwork* UEHThrusterObject::GetThrusterNetwork() {
    return NULL;
}

void UEHThrusterObject::DebugSetFlareDirection(const float AngleYAxis, const float AngleZAxis) {
}

void UEHThrusterObject::ApplyThrusterSetupToConnected() {
}

UEHThrusterObject::UEHThrusterObject() {
    this->ThrusterSize = EEHThrusterSize::Small;
    this->GeneratedThrust = 5.00f;
    this->Flare = NULL;
    this->ZPercentage = 0.00f;
    this->Power = 1.00f;
}

