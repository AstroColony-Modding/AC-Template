#include "EHAsteroidsCatcher.h"

class UEHResourceItem;

bool UEHAsteroidsCatcher::RemoveProcessedAsteroid() {
    return false;
}

bool UEHAsteroidsCatcher::RemoveAttractedAsteroid() {
    return false;
}

bool UEHAsteroidsCatcher::IsProcessingAsteroid() {
    return false;
}

bool UEHAsteroidsCatcher::IsAttractingAsteroid() {
    return false;
}

bool UEHAsteroidsCatcher::ChangeCatchedResource(UEHResourceItem* Resource) {
    return false;
}

UEHAsteroidsCatcher::UEHAsteroidsCatcher() {
    this->AttractedAsteroidIndex = -1;
    this->LaserBeamParticle = NULL;
    this->ProcessingParticle = NULL;
    this->AsteroidScale = 0.50f;
    this->CatchResourceType = NULL;
    this->AsteroidProcessingTime = 5.00f;
}

