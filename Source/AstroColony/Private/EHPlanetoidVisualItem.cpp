#include "EHPlanetoidVisualItem.h"

UEHPlanetoidVisualItem::UEHPlanetoidVisualItem() {
    this->VisualSpawnChance[0] = 10;
    this->VisualSpawnChance[1] = 10;
    this->VisualSpawnChance[2] = 10;
    this->VisualSpawnChance[3] = 10;
    this->VisualSpawnChance[4] = 10;
    this->VisualSpawnChance[5] = 10;
    this->SpawnDensity[0] = 1.00f;
    this->SpawnDensity[1] = 1.00f;
    this->SpawnDensity[2] = 1.00f;
    this->SpawnDensity[3] = 1.00f;
    this->SpawnDensity[4] = 1.00f;
    this->SpawnDensity[5] = 1.00f;
    this->StartNoiseRange = 0.20f;
    this->MapOutNoiseRangeChance = 0.20f;
    this->MinChanceToSpawn = 0.90f;
    this->RandomizeSwappingChance = 0.50f;
}

