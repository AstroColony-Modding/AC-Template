#include "EHConnectorStationObject.h"

void UEHConnectorStationObject::Multi_DestructConveyorLine_Implementation(const uint8 LineNumber) {
}

void UEHConnectorStationObject::Multi_ConstructConveyorLine_Implementation(const uint8 LineNumber, const bool ConveyorReverseDirection) {
}

void UEHConnectorStationObject::DestructConveyorLine(const uint8 LineNumber) {
}

void UEHConnectorStationObject::ConstructConveyorLine(const uint8 LineNumber, const bool ConveyorReverseDirection) {
}

UEHConnectorStationObject::UEHConnectorStationObject() {
    this->OrderedAstronautsCount = 0;
    this->DesiredDockTime = 0.00f;
    this->DockingState = EDockingState::Undocked;
}

