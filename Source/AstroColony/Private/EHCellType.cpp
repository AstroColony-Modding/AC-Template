#include "EHCellType.h"

FEHCellType::FEHCellType() {
    this->Item = NULL;
    this->InteractableObject = NULL;
    this->CellRotation = EEHInstanceRotation::Rot0;
    this->CellState = 0;
}

