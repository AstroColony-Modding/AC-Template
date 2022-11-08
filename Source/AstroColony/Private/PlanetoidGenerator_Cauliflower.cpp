#include "PlanetoidGenerator_Cauliflower.h"

UPlanetoidGenerator_Cauliflower::UPlanetoidGenerator_Cauliflower() {
    this->GroundSeed = 938;
    this->MainBlendMax = 0.60f;
    this->MainBlendMin = -0.20f;
    this->PrimaryResourceTH = 0.50f;
    this->SecondaryResourceTH = 0.50f;
    this->SeedRange = 1443;
    this->SeedSimplex3d = 1443;
    this->StepSteep = 1.00f;
    this->WavenessSeed = 21277;
    this->RadiusX = 120.00f;
    this->RadiusY = 120.00f;
    this->RadiusZ = 30.00f;
}

