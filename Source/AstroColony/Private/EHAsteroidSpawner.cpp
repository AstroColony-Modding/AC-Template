#include "EHAsteroidSpawner.h"
#include "EHHISMComponent.h"

class UEHAsteroidsCatcher;
class UEHGridComponent;
class UEHItem;
class UEHResourceItem;

int32 AEHAsteroidSpawner::UpdateColorFromAsteroidData(FEHAsteroidData& AsteroidData) {
    return 0;
}

void AEHAsteroidSpawner::ShrinkExtractedAsteroid(const int32 InstanceIndex) {
}

void AEHAsteroidSpawner::Server_HitAsteroid_Implementation(UEHGridComponent* GridComponent, const int32 InstanceIndex, const FVector& ImpactPoint) {
}

void AEHAsteroidSpawner::Server_AddAsteroid(const FTransform& Transform, const FEHAsteroidData& AsteroidData) {
}

void AEHAsteroidSpawner::RemoveAttractedAsteroid(const int32 InstanceIndex) {
}


void AEHAsteroidSpawner::Multi_RemoveProcessedAsteroid_Implementation(UEHAsteroidsCatcher* AsteroidCatcher) {
}

void AEHAsteroidSpawner::Multi_RemoveCatcherAttractedAsteroid_Implementation(UEHAsteroidsCatcher* AsteroidCatcher) {
}

void AEHAsteroidSpawner::Multi_RemoveAttractedAsteroid_Implementation(const int32 InstanceIndex) {
}

void AEHAsteroidSpawner::Multi_RemoveAsteroids_Implementation(const TArray<int32>& AsteroidsToRemove, const TArray<FVector_NetQuantize>& ImpactPoints) {
}

void AEHAsteroidSpawner::Multi_RemoveAsteroid_Implementation(const int32 InstanceIndex) {
}

void AEHAsteroidSpawner::Multi_NotifyExtractionDataChanged_Implementation(const int32 InstanceIndex, const FEHAsteroidData& AsteroidData, const FEHAsteroidExtraction& AsteroidExtraction, const FVector& ImpactPoint) {
}

void AEHAsteroidSpawner::Multi_NotifyAsteroidCatched_Implementation(UEHAsteroidsCatcher* AsteroidCatcher) {
}

void AEHAsteroidSpawner::Multi_HitAsteroid_Implementation(const int32 InstanceIndex) {
}

void AEHAsteroidSpawner::Multi_CancelAttractedAsteroid_Implementation(UEHAsteroidsCatcher* AsteroidCatcher) {
}

void AEHAsteroidSpawner::Multi_AddAttractedAsteroid_Implementation(UEHAsteroidsCatcher* AsteroidCatcher, const FTransform& Transform, const FEHAsteroidData& AsteroidData) {
}

void AEHAsteroidSpawner::Multi_AddAsteroid_Implementation(const FTransform& Transform, const FEHAsteroidData& AsteroidData, const FEHAsteroidExtraction& AsteroidExtraction) {
}

void AEHAsteroidSpawner::HandleAssetsLoaded() {
}

FEHAsteroidData AEHAsteroidSpawner::GenerateAsteroidData(UEHItem* ResourceItem) {
    return FEHAsteroidData{};
}

UEHResourceItem* AEHAsteroidSpawner::ExtractResource(const int32 InstanceIndex) {
    return NULL;
}


AEHAsteroidSpawner::AEHAsteroidSpawner() {
    this->HISMAsteroids = CreateDefaultSubobject<UEHHISMComponent>(TEXT("HISMAsteroids"));
    this->HISMAttracted_Asteroids = CreateDefaultSubobject<UEHHISMComponent>(TEXT("HISMAttracted_Asteroids"));
    this->HISMAttracted_Beams = CreateDefaultSubobject<UEHHISMComponent>(TEXT("HISMAttracted_Beams"));
    this->ShouldSpawnAsteroids = true;
    this->ShouldUpdateAsteroidsPositions = true;
    this->SpawnSecondChance = 0.20f;
    this->SpawningInterval = 0.20f;
    this->CloseAsteroidsCount = 30.00f;
    this->CloseSpawnRadius = 6000.00f;
    this->FarSpawnRadius = 10000.00f;
    this->VanishRadius = 15000.00f;
    this->ShouldDespawnCollidingAsteroids = true;
    this->DespawnLinetraceDistanceScale = 5.00f;
    this->SpharetraceRadius = 150.00f;
    this->VelocityCharacterOffsetScale = 2.00f;
    this->RandomCharacterPositionScale = 2000.00f;
    this->ShowDebugAsteroidVelocity = false;
    this->AsteroidVelocityScaleMin = 50.00f;
    this->AsteroidVelocityScaleMax = 150.00f;
    this->AsteroidSpinScale = 0.10f;
    this->AsteroidRandomizeScale = 0.50f;
    this->ResourceIncreaseSize = 0.10f;
    this->DistanceUpdateOften = 4000.00f;
    this->DistanceUpdateNormal = 8000.00f;
    this->DistanceUpdateRare = 16000.00f;
    this->DataProvider = NULL;
}

