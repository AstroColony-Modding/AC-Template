#include "EHAsteroidsCatcher.h"

bool UEHAsteroidsCatcher::RemoveProcessedAsteroid() {
    return false;
}

bool UEHAsteroidsCatcher::RemoveAttractedAsteroid() {
    return false;
}

void UEHAsteroidsCatcher::NotifyAsteroidCatched() {
}

void UEHAsteroidsCatcher::NotifyAsteroidAttraceted(const FEHAsteroidData& AsteroidData, const FTransform& Transform) {
}

bool UEHAsteroidsCatcher::IsProcessingAsteroid() {
    return false;
}

bool UEHAsteroidsCatcher::IsAttractingAsteroid() {
    return false;
}

void UEHAsteroidsCatcher::HandleGameStarted() {
}

UEHAsteroidsCatcher::UEHAsteroidsCatcher() {
    this->AttractedAsteroidIndex = -1;
    this->LaserBeamParticle = NULL;
    this->ProcessingParticle = NULL;
    this->AsteroidScale = 0.50f;
    this->AsteroidProcessingTime = 5.00f;
}

