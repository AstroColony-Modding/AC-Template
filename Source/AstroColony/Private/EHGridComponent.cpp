#include "EHGridComponent.h"

class AEHGrid;
class UEHAsteroidsCatcher;
class UEHConnectorStationObject;
class UEHDeviceObject;
class UEHDockingStationObject;
class UEHInteractableObject;
class UEHItem;
class UEHOxygenGenerator;
class UEHSignalObject;
class UEHThrusterNetwork;

void UEHGridComponent::UpgradeCellObject() {
}

void UEHGridComponent::ToggleScanner(const bool IsScannerActive, const FVector ScanLocation) {
}

void UEHGridComponent::SwapCellObjectInputs() {
}

void UEHGridComponent::SpawnChunkTest(const FVector& position) {
}

void UEHGridComponent::Server_UpgradeCellObjects_Implementation(const TArray<FEHGridCellType>& SelectedCellItems) {
}

void UEHGridComponent::Server_UnregisterWatchedItem_Implementation(UEHItem* WatchedItem) {
}

void UEHGridComponent::Server_UndockStation_Implementation(AEHGrid* GridReference, UEHInteractableObject* OriginDockStation) {
}

void UEHGridComponent::Server_TraceHitAsteroid_Implementation(const FVector& HitLocation, const int32 HitIndex) {
}

void UEHGridComponent::Server_TraceCatchAsteroid_Implementation(UEHAsteroidsCatcher* AsteroidCatcher, const FVector& HitLocation, const int32 HitIndex) {
}

void UEHGridComponent::Server_StopDocking_Implementation(AEHGrid* GridReference) {
}

void UEHGridComponent::Server_StartSimulation_Implementation() {
}

void UEHGridComponent::Server_SetDesiredMovement_Implementation(UEHThrusterNetwork* ThrusterNetwork, const FVector& DesiredMovement) {
}

void UEHGridComponent::Server_RotateCellObject_Implementation(const EEHRotationDirection RotationDirection, const TArray<FEHGridCellType>& SelectedCellItems) {
}

void UEHGridComponent::Server_RequestDeviceData_Implementation(UEHDeviceObject* DeviceObject) {
}

void UEHGridComponent::Server_RequestAsteroidDatas_Implementation() {
}

void UEHGridComponent::Server_RemoveProcessedAsteroid_Implementation(UEHAsteroidsCatcher* AsteroidCatcher) {
}

void UEHGridComponent::Server_RemoveCellObjects_Implementation(const TArray<FEHGridCellType>& SelectedCellItems) {
}

void UEHGridComponent::Server_RemoveAttractedAsteroid_Implementation(UEHAsteroidsCatcher* AsteroidCatcher) {
}

void UEHGridComponent::Server_RemoveAstronautOrder_Implementation(UEHDockingStationObject* DockingStation) {
}

void UEHGridComponent::Server_RegisterWatchedItem_Implementation(UEHItem* WatchedItem) {
}

void UEHGridComponent::Server_RefillPlayerOxygen_Implementation(UEHOxygenGenerator* OxygenGenerator) {
}

void UEHGridComponent::Server_NotifyPlayerReady_Implementation() {
}

void UEHGridComponent::Server_LogicSelectDevice_Implementation(UEHSignalObject* SignalObject, UEHDeviceObject* Device) {
}

void UEHGridComponent::Server_InitGrid_Implementation(AEHGrid* NewGrid) {
}

void UEHGridComponent::Server_HitExtract_Implementation(AEHGrid* GridReference, const FIntVector& HitCoord, const FVector& HitLocation) {
}

void UEHGridComponent::Server_DockStation_Implementation(AEHGrid* GridReference, UEHInteractableObject* OriginDockStation) {
}

void UEHGridComponent::Server_DestructConveyorLine_Implementation(UEHConnectorStationObject* ConnectorObject, const uint8 LineNumber) {
}

void UEHGridComponent::Server_CreateStationOrigin_Implementation(const FString& StationName, const FVector& Location) {
}

void UEHGridComponent::Server_ConstructItems_Implementation(AEHGrid* GridReference, UEHItem* Item, const TArray<FIntVector>& ConstructCoords, EEHInstanceRotation Rotation) {
}

void UEHGridComponent::Server_ConstructConveyorLine_Implementation(UEHConnectorStationObject* ConnectorObject, const uint8 LineNumber, const bool ConveyorReverseDirection) {
}

void UEHGridComponent::Server_CellOpened_Implementation(UEHInteractableObject* InteractableObject) {
}

void UEHGridComponent::Server_CellClosed_Implementation() {
}

void UEHGridComponent::Server_AddChildActorForInteraction_Implementation(UEHDeviceObject* DeviceObject) {
}

void UEHGridComponent::Server_AddAstronautOrder_Implementation(UEHDockingStationObject* DockingStation) {
}

void UEHGridComponent::Server_AddAsteroid_Implementation(const FTransform& Transform, const FEHAsteroidData& AsteroidData) {
}

void UEHGridComponent::SelectCellObject() {
}

void UEHGridComponent::RotateCellObject(const EEHRotationDirection RotationDirection) {
}

void UEHGridComponent::ResetUnderGrid() {
}

void UEHGridComponent::PerformRotateAction(const EEHRotationDirection RotationDirection) {
}

void UEHGridComponent::PerformRemoveSelectedAction() {
}

void UEHGridComponent::PerformRemoveAction() {
}

void UEHGridComponent::PerformHitAction() {
}

void UEHGridComponent::PerformFirstGridAction() {
}

void UEHGridComponent::PerformCancelAction() {
}

void UEHGridComponent::OpenCellObject() {
}












void UEHGridComponent::NudgeAICellObject() {
}

void UEHGridComponent::ModifyVoxelBoxDelayed(const FIntVector& BoxMin, const FIntVector& BoxMax, const bool IsAdding, const float Delay) {
}


bool UEHGridComponent::IsRadarActive() {
    return false;
}

void UEHGridComponent::InteractWithInteractableObject(UEHInteractableObject* InteractableObject) {
}

void UEHGridComponent::InteractCellObject() {
}

void UEHGridComponent::InitGrid(AEHGrid* GridReference) {
}

void UEHGridComponent::HandleUniverseChanged(uint8 PreviousIndex, uint8 NewIndex) {
}

void UEHGridComponent::HandleRotationItemChange() {
}

void UEHGridComponent::HandleLoadGameFinished(bool IsLoadedFromSavegame) {
}

void UEHGridComponent::HandleJobModeChanged() {
}

void UEHGridComponent::HandleItemChange() {
}

void UEHGridComponent::HandleInventoryActionChange() {
}

void UEHGridComponent::HandleGameplayEffectUnlocked() {
}

void UEHGridComponent::HandleControlModeChanged() {
}

TArray<FEHItemInstance> UEHGridComponent::GetWarehouseItems() {
    return TArray<FEHItemInstance>();
}

TArray<UEHItem*> UEHGridComponent::GetUsedToConstructResources(UEHItem* ResourceItem) {
    return TArray<UEHItem*>();
}

TArray<UEHItem*> UEHGridComponent::GetUsedByResources(UEHItem* ResourceItem) {
    return TArray<UEHItem*>();
}

UEHInteractableObject* UEHGridComponent::GetTracedInteractable() {
    return NULL;
}

UEHItem* UEHGridComponent::GetSelectedItemType() {
    return NULL;
}

int32 UEHGridComponent::GetSelectedItemsCount() {
    return 0;
}

FEHRecipe UEHGridComponent::GetRecipeForItem(UEHItem* Item, bool& Found) {
    return FEHRecipe{};
}

FEHRecipe UEHGridComponent::GetRecipeForGlobalPoint(const EGlobalPointType GlobalPoint, bool& Found) {
    return FEHRecipe{};
}

TArray<UEHItem*> UEHGridComponent::GetProducedByResources(UEHItem* ResourceItem) {
    return TArray<UEHItem*>();
}

FIntVector UEHGridComponent::GetPreviewCoord() {
    return FIntVector{};
}

AEHGrid* UEHGridComponent::GetGridReference() {
    return NULL;
}

TArray<UEHItem*> UEHGridComponent::GetCraftedToResources(UEHItem* ResourceItem) {
    return TArray<UEHItem*>();
}

TArray<UEHItem*> UEHGridComponent::GetCraftedFromResources(UEHItem* ResourceItem) {
    return TArray<UEHItem*>();
}

FIntVector UEHGridComponent::GetCollectivePreviewCoord() {
    return FIntVector{};
}

FIntVector UEHGridComponent::GetCellCoords(const FVector LocalPosition) {
    return FIntVector{};
}

void UEHGridComponent::ForcePlayerReadyTest() {
}

void UEHGridComponent::FirstGridActionReleased() {
}

void UEHGridComponent::FirstGridActionPressed(bool& Interrupted) {
}

void UEHGridComponent::FinishInteractionCellObject() {
}

void UEHGridComponent::DebugRemoveAllChunks() {
}

void UEHGridComponent::ClientCheckSimulationReady() {
}

void UEHGridComponent::Client_StartSimulation_Implementation() {
}

void UEHGridComponent::Client_Start_Implementation() {
}

void UEHGridComponent::Client_PayWarehouseItemCost_Implementation(const TArray<FEHItemInstance>& Cost, UEHItem* RecyclableItem) {
}

void UEHGridComponent::Client_OxygenRefilled_Implementation(const bool OxygenRefillSuccessful) {
}

void UEHGridComponent::Client_OnEnteredGrid_Implementation(AEHGrid* NewGridUnder) {
}

void UEHGridComponent::Client_NotifyDockingFailed_Implementation(const bool DockWasTooFar) {
}

void UEHGridComponent::Client_NotifyAstronautOrderFailed_Implementation(const bool ShuttleIsHere) {
}

void UEHGridComponent::Client_ItemConstructed_Implementation(UEHItem* Item, const FIntVector& Coord, EEHInstanceRotation Rotation) {
}

void UEHGridComponent::Client_InteractChildActor_Implementation(UEHDeviceObject* DeviceObject) {
}

void UEHGridComponent::Client_InitDeviceData_Implementation(UEHDeviceObject* DeviceObject, const FEHDeviceReplicationData& DeviceReplicationData) {
}

void UEHGridComponent::Client_InitAsteroidDatas_Implementation(const TArray<FTransform>& Transforms, const TArray<FEHAsteroidData>& AsteroidDatas, const TArray<FEHAsteroidExtraction>& Extractions) {
}

void UEHGridComponent::Client_CellObjectsUpgraded_Implementation(const bool UpgradeSuccessful, const TArray<FEHItemInstance>& FailedCost) {
}

void UEHGridComponent::Client_CellObjectsRotated_Implementation() {
}

void UEHGridComponent::Client_CellObjectsRemoved_Implementation(const bool RemoveSuccessful) {
}

void UEHGridComponent::ClearSelection() {
}

bool UEHGridComponent::CheckVoxelHitInteractionDistance() {
    return false;
}

void UEHGridComponent::CheckPlayerReadyState() {
}

bool UEHGridComponent::CheckBlockingHitInteractionDistance() {
    return false;
}

bool UEHGridComponent::CanPayWarehouseItemCost(const TArray<FEHItemInstance>& Cost, int32 Count, UEHItem* RecyclableItem) {
    return false;
}

void UEHGridComponent::CacheDestroyedVoxelSave(const FName VoxelWorldName, const FVoxelCompressedWorldSave& VoxelSave) {
}

void UEHGridComponent::AssetsLoaded() {
}

void UEHGridComponent::AddInstanceDelayed(UEHItem* Item, const FIntVector& CellCoords, const float Delay, UEHInteractableObject* InteractableObjectToRestore, const EEHInstanceRotation Rotation) {
}

void UEHGridComponent::AddCellObjects() {
}

UEHGridComponent::UEHGridComponent() {
    this->TraceBoxComponent = NULL;
    this->TraceOverlapISMComponent = NULL;
    this->TraceWorldInteractiveActor = NULL;
    this->TraceOverlapPrimitveComponent = NULL;
    this->TraceHitItem = 0;
    this->DestructibleHitActor = NULL;
    this->SweepHitActor = NULL;
    this->BarrierHeight = 10;
    this->VoxelTerrainHitZOffset = 5.00f;
    this->PreviewItemMaterialSlots = 1;
    this->DefaultBlockingHitOffset = 3.00f;
    this->AddingRemovingOffset = 6.00f;
    this->DestructibleHitOffset = -4.00f;
    this->FloorThickness = 2.00f;
    this->WallThickness = 10.00f;
    this->RenderRange = 2;
    this->DestroyRenderRangeOffset = -250.00f;
    this->ChunkTemplate = NULL;
    this->SpawnCosmicEvents = true;
    this->GridTemplate = NULL;
    this->ThrusterNetworkTemplate = NULL;
    this->PlanetoidDetailsDefaultSpawnChances[0] = 0;
    this->PlanetoidDetailsDefaultSpawnChances[1] = 0;
    this->PlanetoidDetailsDefaultSpawnChances[2] = 0;
    this->PlanetoidDetailsDefaultSpawnChances[3] = 0;
    this->PlanetoidDetailsDefaultSpawnChances[4] = 0;
    this->PlanetoidDetailsDefaultSpawnChances[5] = 0;
    this->PlanetoidDetailsDefaultSpawnChances[6] = 0;
    this->PlanetoidDetailsDefaultSpawnChances[7] = 0;
    this->PlanetoidDetailsDefaultSpawnChances[8] = 0;
    this->PlanetoidDetailsDefaultSpawnChances[9] = 0;
    this->PlanetoidDetailsDefaultSpawnChances[10] = 0;
    this->PlanetoidDetailsDefaultSpawnChances[11] = 0;
    this->PlanetoidDetailsDefaultSpawnChances[12] = 0;
    this->PlanetoidDetailsDefaultSpawnChances[13] = 0;
    this->PlanetoidDetailsDefaultSpawnChances[14] = 0;
    this->PlanetoidDetailsDefaultSpawnChances[15] = 0;
    this->PlanetoidDetailsDefaultSpawnChances[16] = 0;
    this->PlanetoidDetailsDefaultSpawnChances[17] = 0;
    this->PlanetoidDetailsDefaultSpawnChances[18] = 0;
    this->ExtractPreviewItem = NULL;
    this->TerrainTypeSpawnChanceSum = 0.00f;
    this->ShapeTypeSpawnChanceSum = 0.00f;
    this->CameraLineTraceLength = 12000.00f;
    this->UnderLineTraceLength = -5000.00f;
    this->IsPlayerReady = false;
    this->ClientSimulationSyncTime = 6.00f;
    this->HighlightPreviewMaterial = NULL;
    this->ValidConstructPreviewMaterial = NULL;
    this->InvalidConstructPreviewMaterial = NULL;
    this->BGConstructPreviewMaterial = NULL;
    this->BGConstructPreviewsMaterial = NULL;
    this->SelectPreviewMaterial = NULL;
    this->DisabledPreviewMaterial = NULL;
    this->PreselectPreviewMaterial = NULL;
    this->DeselectPreviewMaterial = NULL;
    this->VertexCollapseMaterial = NULL;
    this->CollapseTime = 4.00f;
    this->CollapseSpeed = 500.00f;
    this->CollapseTargetRadius = 8000.00f;
    this->IntensivityDivider = 1200.00f;
    this->DissolveMaterial = NULL;
    this->DisintegrationMaterial = NULL;
    this->DissolveTime = 2.00f;
    this->DissolveScale = 1.00f;
    this->TargetDissolve = 500.00f;
    this->DisolveSpeed = 500.00f;
    this->BillboardLineTemplates[0] = NULL;
    this->BillboardLineTemplates[1] = NULL;
    this->BillboardLineTemplates[2] = NULL;
    this->BillboardLineTemplates[3] = NULL;
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
    this->CollectiveColliderWallTemplate = NULL;
    this->CollectiveColliderFloorTemplate = NULL;
    this->SelectionBoxTemplate = NULL;
    this->LockGridActions = false;
    this->CollectiveColliderActive = false;
    this->DiagonalWallBoxColliderTemplate = NULL;
    this->WallBoxColliderTemplate = NULL;
    this->FloorBoxColliderTemplate = NULL;
    this->BlockBoxColliderTemplate = NULL;
    this->IsRemoveActionUnlocked = false;
}

