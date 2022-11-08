#include "EHDataProvider.h"

FEHTrackableInfo UEHDataProvider::GetTrackableInfo(const EEHTrackableType Type) {
    return FEHTrackableInfo{};
}

TArray<FEHStartingStation> UEHDataProvider::GetStartingStations(const EEHStartingStationSize Size) {
    return TArray<FEHStartingStation>();
}

FDecalInfo UEHDataProvider::GetOutletInfo(const EEHDecalType Type) {
    return FDecalInfo{};
}

UEHDataProvider::UEHDataProvider() {
    this->ConnectionLineMesh = NULL;
    this->PlanetoidResourceItems[0] = NULL;
    this->PlanetoidResourceItems[1] = NULL;
    this->PlanetoidResourceItems[2] = NULL;
    this->PlanetoidResourceItems[3] = NULL;
    this->PlanetoidResourceItems[4] = NULL;
    this->PlanetoidResourceItems[5] = NULL;
    this->PlanetoidResourceItems[6] = NULL;
    this->PlanetoidResourceItems[7] = NULL;
    this->PlanetoidResourceItems[8] = NULL;
    this->PlanetoidResourceItems[9] = NULL;
    this->PlanetoidResourceItems[10] = NULL;
    this->PlanetoidResourceItems[11] = NULL;
    this->DirtResource = NULL;
    this->QuartzResource = NULL;
    this->FloorRecyclable = NULL;
    this->WallRecyclable = NULL;
    this->DestructibleSpawnChances.AddDefaulted(8);
    this->VisualSpawnChances.AddDefaulted(9);
    this->DestructionGameplayEffect = NULL;
    this->BillboardTextures[0] = NULL;
    this->BillboardTextures[1] = NULL;
    this->BillboardTextures[2] = NULL;
    this->BillboardTextures[3] = NULL;
    this->BillboardTextures[4] = NULL;
    this->BillboardTextures[5] = NULL;
    this->BillboardTextures[6] = NULL;
    this->BillboardTextures[7] = NULL;
    this->BillboardTextures[8] = NULL;
    this->BillboardTextures[9] = NULL;
    this->BillboardTextures[10] = NULL;
    this->BillboardTextures[11] = NULL;
    this->BillboardTextures[12] = NULL;
    this->BillboardTextures[13] = NULL;
    this->SandboxIcon = NULL;
}

