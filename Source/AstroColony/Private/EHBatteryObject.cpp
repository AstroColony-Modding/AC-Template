#include "EHBatteryObject.h"

void UEHBatteryObject::ChageBatteryChargingState(const bool IsBatteryChargingIn) {
}

UEHBatteryObject::UEHBatteryObject() {
    this->IsBatteryCharging = true;
    this->StoredEnergy = 0;
}

