#include "PlanetoidGenerator_Spike.h"

UPlanetoidGenerator_Spike::UPlanetoidGenerator_Spike() {
    this->GroundSeed = 938;
    this->MainBlendMax = 0.60f;
    this->MainBlendMin = -0.20f;
    this->PrimaryResourceTH = 0.50f;
    this->SecondaryResourceTH = 0.50f;
    this->StepSteep = 1.00f;
    this->WavenessSeed = 21277;
    this->MiddleHeight = 40.00f;
    this->MiddleRadiusX = 30.00f;
    this->RadiusX = 120.00f;
    this->MiddleRadiusY = 30.00f;
    this->RadiusY = 120.00f;
    this->RadiusZ = 30.00f;
}

