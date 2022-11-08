#include "EHConveyorObject.h"

UEHConveyorObject::UEHConveyorObject() {
    this->CanConvey = false;
    this->ConveyorZOffset = 0.00f;
    this->ConveyorSlopeRotation = 0.00f;
    this->ConveyorSpeed = 1.00f;
    this->ShouldRotateItem = true;
    this->RotateInterpolationSpeedMultiplayer = 1.00f;
    this->UseMiddlePositionToConvey = false;
    this->StageOneMoveLengthPercentage = 0.00f;
    this->RampDirection = UEHRampDirection::None;
}

