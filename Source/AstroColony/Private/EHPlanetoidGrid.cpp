#include "EHPlanetoidGrid.h"
#include "Net/UnrealNetwork.h"

class AEHVoxelWorld;

void AEHPlanetoidGrid::UpdateMPCorrectionPosition() {
}


void AEHPlanetoidGrid::TestingValue(const FIntVector& Coord) {
}


void AEHPlanetoidGrid::SetSeed(int32 SeedLow) {
}

void AEHPlanetoidGrid::SetInterpolation(EVoxelNoiseInterpolation Interp) {
}

void AEHPlanetoidGrid::RemoveBox(const FIntVector& Coord) {
}

void AEHPlanetoidGrid::OnRep_VoxelWorld() {
}

void AEHPlanetoidGrid::OnRep_CorrectionLocation() {
}



void AEHPlanetoidGrid::NotifyStreamingPlanetoidLoaded() {
}

void AEHPlanetoidGrid::Multi_RemoveBox_Implementation(const FIntVector& Coord) {
}

void AEHPlanetoidGrid::ModifyBox(const FIntVector BoxMin, const FIntVector BoxMax, bool IsAdding) {
}

bool AEHPlanetoidGrid::IsProcedurallyGenerated() {
    return false;
}

void AEHPlanetoidGrid::HadleCollectiveColliderStateChanged(bool ColliderActive) {
}

FInteractableObjectArray AEHPlanetoidGrid::GetWorldItems(const EEHMiningResourceType ResrouceType) {
    return FInteractableObjectArray{};
}

AEHVoxelWorld* AEHPlanetoidGrid::GetVoxelWorld() {
    return NULL;
}

float AEHPlanetoidGrid::GetTestNoiseValue(float X, float Y, float NoiseFrequency, bool UseSimplexNoise) {
    return 0.0f;
}

FVector AEHPlanetoidGrid::GetPlanetoidSize() {
    return FVector{};
}

TArray<FIntVector> AEHPlanetoidGrid::GetForbiddenVoxelCoordsForBox(const FVoxelIntBox& Box) {
    return TArray<FIntVector>();
}

TArray<FIntVector> AEHPlanetoidGrid::GetCoordsFromTraceImpactPoints() {
    return TArray<FIntVector>();
}

bool AEHPlanetoidGrid::DoesVoxelContainRock(const FIntVector& Coord) {
    return false;
}

void AEHPlanetoidGrid::DebugRegenerateForSeed(const int32 NewPrimarySeed) {
}

void AEHPlanetoidGrid::DebugGeneratePlanetoid(const FIntPoint& Size) {
}

void AEHPlanetoidGrid::AsyncTraceTest() {
}

void AEHPlanetoidGrid::AddBox(const FIntVector& Coord) {
}

void AEHPlanetoidGrid::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AEHPlanetoidGrid, VoxelWorld);
    DOREPLIFETIME(AEHPlanetoidGrid, CorrectionLocation);
    DOREPLIFETIME(AEHPlanetoidGrid, PlanetIndex);
}

AEHPlanetoidGrid::AEHPlanetoidGrid() {
    this->IsPlanet = true;
    this->PrimarySeed = 123;
    this->SecondarySeed = 421;
    this->GroundSpawnDepth = 10;
    this->GroundSpawnChance = 0.12f;
    this->GroundSpawnFrequency = 0.05f;
    this->GroundTypeFrequency = 0.01f;
    this->GenerationDensity = 1.00f;
    this->GenerateTracePointsTime = 0.80f;
    this->SpawnSurfaceDestructibles = true;
    this->SpawnSurfaceVisuals = true;
    this->SpawnGroundResources = true;
    this->ResourcesGenerationSize = 32;
    this->Frequency = 0.00f;
    this->HigherNoise = 0.00f;
    this->LowerNoise = 0.00f;
    this->PlanetoidSurfaceDetailSpawnChanceSum = 0.00f;
    this->PlanetoidMapRotation = 0.00f;
    this->PlanetoidDepositItem = NULL;
    this->PlanetoidGeneratorCompleted = false;
    this->VoxelWorld = NULL;
    this->PlanetIndex = 0;
    this->PlanetoidTerrainID = 0;
}

