#include "EHAnimalMeshAsset.h"

UEHAnimalMeshAsset::UEHAnimalMeshAsset() {
    this->BreedAnimalType = EHBreedAnimalTypes::None;
    this->AnimalSize = EHAnimalSize::Small;
    this->GrowingPhaseTime = 2.00f;
    this->ConsumedPhaseWater = 5;
    this->ConsumedPhaseGrain = 1;
    this->ProducedResource = NULL;
}

