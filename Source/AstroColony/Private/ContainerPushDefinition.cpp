#include "ContainerPushDefinition.h"

FContainerPushDefinition::FContainerPushDefinition() {
    this->GateRotation = EEHInstanceRotation::Rot0;
    this->InsidePushOffset = 0.00f;
    this->PushDirection = EPushDirection::Both;
    this->RestrictedType = EInstanceCellType::None;
    this->ConveyorPushType = NULL;
}

