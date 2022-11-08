#include "EHVehiclePartTypeData.h"

FEHVehiclePartTypeData::FEHVehiclePartTypeData() {
    this->Icon = NULL;
    this->ProductionTime = 0.00f;
    this->UseXforMultipleScales = EEHVehiclePartScale::None;
    this->CanBeRemoved = false;
    this->NumberOfUses = 0;
}

