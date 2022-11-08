#include "EHPlantMeshAsset.h"

UEHPlantMeshAsset::UEHPlantMeshAsset() {
    this->HarvestPlantType = EHHarvestPlantTypes::None;
    this->IsPlantBig = false;
    this->GrowingPhaseTime = 2.00f;
    this->ConsumedPhaseWater = 5;
    this->ProducedResource = NULL;
}

