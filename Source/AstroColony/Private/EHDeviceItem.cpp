#include "EHDeviceItem.h"

UEHDeviceItem::UEHDeviceItem() {
    this->DeviceTypeFlags = 0;
    this->SpawnActorOnlyForInteraction = false;
    this->ShouldCreateColliderBlocks = false;
    this->CreateCollidersForAllDirections = false;
    this->ColliderCheckOccupiedCoord = true;
    this->CreatedDeviceRegisteredAsVacant = false;
    this->ShowDisabledStatePreview = true;
}

