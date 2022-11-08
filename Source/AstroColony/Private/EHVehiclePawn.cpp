#include "EHVehiclePawn.h"

class AEHGrid;

bool AEHVehiclePawn::IsPossesed() {
    return false;
}

void AEHVehiclePawn::HandlePlayerLeftGrid(AEHGrid* Grid) {
}

void AEHVehiclePawn::HandlePlayerEnteredGrid(AEHGrid* Grid) {
}

AEHVehiclePawn::AEHVehiclePawn() {
    this->GamePlayerController = NULL;
}

