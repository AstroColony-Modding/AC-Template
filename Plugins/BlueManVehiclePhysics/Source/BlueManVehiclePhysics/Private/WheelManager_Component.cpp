#include "WheelManager_Component.h"

class USuspensionPhysics_Component;

void UWheelManager_Component::SetSteering(float SteeringInput) {
}

void UWheelManager_Component::SetHandbrake(bool HandbrakeInput) {
}

USuspensionPhysics_Component* UWheelManager_Component::AddWheel(FWheelDataStruct WheelData) {
    return NULL;
}

UWheelManager_Component::UWheelManager_Component() {
    this->StickyTiresMultiplier = 1.00f;
    this->StickyTiresActivationSpeed = 10.00f;
    this->StickyTiresHandbrakeMultiplier = 2.20f;
    this->LockdownActivationSpeed = 8.00f;
    this->LockdownMultiplier = 1.00f;
    this->Mesh = NULL;
}

