#include "EHGrid.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "EHAIDirectorComponent.h"
#include "EHDevicesComponent.h"
#include "EHPathfindingComponent.h"
#include "Net/UnrealNetwork.h"

class AEHBlackHole;
class AEHMovableSpaceActor;
class UEHAIObject;
class UEHElectricNetwork;
class UEHGridComponent;
class UEHHISMComponent;
class UEHInteractableObject;
class UEHInventoryComponent;
class UEHItem;
class UEHItemsContainer;
class UPrimitiveComponent;

void AEHGrid::UpdateProfession(const FIntVector& CellCoords, const EAIProfession Profression) {
}

void AEHGrid::UpdateGridShaderPosition(const FVector& PreviousShaderPosition, const FVector& ShaderPosition) {
}

void AEHGrid::UpdateCollisions(const bool InCollisionEnabled) {
}

void AEHGrid::RotateInstance(const FIntVector& CellCoords, const EEHRotationDirection RotationDirection, EInstanceCellType InstanceCellType, const EEHInstanceRotation Rotation) {
}

bool AEHGrid::RemoveInstance(EInstanceCellType InstanceCellType, const FIntVector& CellCoords, const EEHInstanceRotation Rotation) {
    return false;
}

void AEHGrid::OnRep_ThrusterNetwork() {
}

void AEHGrid::OnRep_ReplicatedDevices() {
}

void AEHGrid::OnRep_IsReplicationReady() {
}

void AEHGrid::Multi_UpgradePendingInstance_Implementation(UEHItem* Item, const FIntVector& CellCoords, UEHInteractableObject* InteractableObject, const EEHInstanceRotation Rotation) {
}

void AEHGrid::Multi_UpgradeInstance_Implementation(const EInstanceCellType InstanceCellType, const FIntVector& CellCoords, UEHInteractableObject* InteractableObject, const EEHInstanceRotation Rotation) {
}

void AEHGrid::Multi_TransferResourceCell_Implementation(const FIntVector& ResourceCoord, const FIntVector& Direction) {
}

void AEHGrid::Multi_TransferAICell_Implementation(const FIntVector16& AICoord, uint8 DirectionPacked) {
}

void AEHGrid::Multi_SwapAIChain_Implementation(const TArray<UEHAIObject*>& ChainAIs, const TArray<FIntVector>& AICoords, const TArray<uint8>& PathIndexes) {
}

void AEHGrid::Multi_StopAnimationBlending_Implementation(const FIntVector& CellCoords) {
}

void AEHGrid::Multi_StartSimulation_Implementation() {
}

void AEHGrid::Multi_RotateInstance_Implementation(const FIntVector& CellCoords, const EEHRotationDirection RotationDirection, EInstanceCellType InstanceCellType, const EEHInstanceRotation Rotation) {
}

void AEHGrid::Multi_RemoveResource_Implementation(const FIntVector16& ResourceCoord) {
}

void AEHGrid::Multi_RemoveInstanceBulk_Implementation(const TArray<FEHSimpleCell>& Cells) {
}

void AEHGrid::Multi_RemoveInstance_Implementation(const EInstanceCellType InstanceCellType, const FIntVector& CellCoords, const EEHInstanceRotation Rotation) {
}

void AEHGrid::Multi_RemoveAI_Implementation(UEHAIObject* AIObject) {
}

void AEHGrid::Multi_PushOutResource_Implementation(UEHItemsContainer* PushContainer, UEHItem* Resource, const uint8& PushIndex) {
}

void AEHGrid::Multi_PushOutAI_Implementation(UEHItemsContainer* PushContainer, UEHItem* AIItemToPush, const FIntVector& AISpawnCoord, const FIntVector& PushCoords) {
}

void AEHGrid::Multi_OnAILeft_Implementation(const FIntVector& DeviceCoord, UEHAIObject* AIObject) {
}

void AEHGrid::Multi_OnAIEntered_Implementation(UEHInteractableObject* InteractableObject, UEHAIObject* AIObject) {
}

void AEHGrid::Multi_NotifyTransferedResourceRemoved_Implementation(const FIntVector& ResourceCoord, const FIntVector& Direction) {
}

void AEHGrid::Multi_NotifyPossiblyTransferedResourceRemoved_Implementation(const FIntVector& ResourceCoord) {
}

void AEHGrid::Multi_HitExtract_Implementation(UEHInventoryComponent* PlayerInventoryComponent, const FIntVector& HitCoord, const FVector& HitLocation) {
}

void AEHGrid::Multi_FarmerEntered_Implementation(const FIntVector& FarmCoord, UEHAIObject* NewFarmer) {
}

void AEHGrid::Multi_ExtractResource_Implementation(const FIntVector& ResourceCoord) {
}

void AEHGrid::Multi_EnsureResourceRemoved_Implementation(const FIntVector& ResourceCoord, const FIntVector& DirectionFrom) {
}

void AEHGrid::Multi_EnsureResourcePushed_Implementation(const FIntVector& ResourceCoord, const FIntVector& Direction) {
}

void AEHGrid::Multi_BreederEntered_Implementation(const FIntVector& PastureCoord, UEHAIObject* NewBreeder) {
}

void AEHGrid::Multi_AddPendingInstance_Implementation(UEHItem* Item, const FIntVector& CellCoords, UEHInteractableObject* InteractableObject, const EEHInstanceRotation Rotation) {
}

void AEHGrid::Multi_AddInstanceBulk_Implementation(const TArray<FEHSimpleCell>& Cells, const TArray<UEHInteractableObject*>& InteractableObjects, UEHGridComponent* ClientGridComponent) {
}

void AEHGrid::Multi_AddInstanceAndTransfer_Implementation(UEHItem* Item, const FIntVector& CellCoords, const FIntVector& Direction) {
}

void AEHGrid::Multi_AddInstance_Implementation(UEHItem* Item, const FIntVector& CellCoords, const EEHInstanceRotation Rotation) {
}

void AEHGrid::HandleRotationChange() {
}

void AEHGrid::HandleJobModeChange() {
}

void AEHGrid::HandleItemChange() {
}

void AEHGrid::HandleGameStarted() {
}

void AEHGrid::HandleGameSimulationStarted() {
}

void AEHGrid::HandleAssetsLoaded() {
}

FVector AEHGrid::GetWorldPositionFromLocalPosition(const FVector& LocalPosition) {
    return FVector{};
}

FIntVector AEHGrid::GetPointForImpact(bool& Found) {
    return FIntVector{};
}

AEHMovableSpaceActor* AEHGrid::GetMovableSpaceActor() {
    return NULL;
}

FVector AEHGrid::GetLocalPositionFromWorldPosition(const FVector& WorldPosition) {
    return FVector{};
}

FEHCellType AEHGrid::GetInstance(const FIntVector& CellCoords, EInstanceCellType CellType, EEHInstanceRotation InstanceRotation) {
    return FEHCellType{};
}

UEHHISMComponent* AEHGrid::GetHISMComponentBP(UEHItem* Item, int32 InstanceIndex) {
    return NULL;
}

FVector AEHGrid::GetCubeWorldPosition(const FIntVector& CellCoords) {
    return FVector{};
}

FVector AEHGrid::GetCubeBottomWorldPosition(const FIntVector& CellCoords) {
    return FVector{};
}

FIntVector AEHGrid::GetCellCoords(const FVector& LocalPosition) {
    return FIntVector{};
}

void AEHGrid::ForceAddInsideGridInstance(UEHItem* Item, const FIntVector& CellCoords, const FIntVector& ParentDeviceCoord, const EEHInstanceRotation Rotation) {
}

UEHInteractableObject* AEHGrid::FindHitInteractable(UPrimitiveComponent* HitComponent, const int32 HitItem) {
    return NULL;
}

void AEHGrid::FinalizeGridGeneration() {
}

TSet<UEHElectricNetwork*> AEHGrid::ElectromagneticFieldBlackout(const TSet<FIntVector>& PointsForBlackout) {
    return TSet<UEHElectricNetwork*>();
}

void AEHGrid::DebugDestroyInteractable(UEHInteractableObject* Interactable) {
}

void AEHGrid::DebugClearReplcatedDevices() {
}

void AEHGrid::BlackHoleDestroyInstances(AEHBlackHole* BlackHoleActor, const TSet<FEHInstanceCellDefinition>& InstancesToDestroy) {
}

void AEHGrid::BeginGridGeneration() {
}


bool AEHGrid::AddInstance(UEHItem* Item, const FIntVector& CellCoords, UEHInteractableObject* InteractableObjectToRestore, const EEHInstanceRotation Rotation, const uint8 MeshID) {
    return false;
}

void AEHGrid::AddGridInstance(UEHItem* Item, const FIntVector& CellCoords, UEHInteractableObject* InteractableObjectToRestore, const EEHInstanceRotation Rotation, const uint8 MeshID, const bool ForceRemoveExisting) {
}

void AEHGrid::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AEHGrid, GridName);
    DOREPLIFETIME(AEHGrid, GridUniqueID);
    DOREPLIFETIME(AEHGrid, ModifiedByPlayer);
    DOREPLIFETIME(AEHGrid, ThrusterNetwork);
    DOREPLIFETIME(AEHGrid, IsReplicationReady);
    DOREPLIFETIME(AEHGrid, UniverseIndex);
    DOREPLIFETIME(AEHGrid, ReplicatedInteractables);
}

AEHGrid::AEHGrid() {
    this->ModifiedByPlayer = true;
    this->SaveGridItemsData = true;
    this->SaveNavPoints = true;
    this->DevicesComponent = CreateDefaultSubobject<UEHDevicesComponent>(TEXT("DevicesComponent"));
    this->PathfindingComponent = CreateDefaultSubobject<UEHPathfindingComponent>(TEXT("PathfindingComponent"));
    this->AIDirectorComponent = CreateDefaultSubobject<UEHAIDirectorComponent>(TEXT("AIDirectorComponent"));
    this->ThrusterNetwork = NULL;
    this->FloorMiddleEdges = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("FloorMiddleEdges"));
    this->FloorLeftEdges = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("FloorLeftEdges"));
    this->FloorRightEdges = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("FloorRightEdges"));
    this->FloorDiagonalEdges = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("FloorDiagonalEdges"));
    this->FloorCornerEdges = CreateDefaultSubobject<UHierarchicalInstancedStaticMeshComponent>(TEXT("FloorCornerEdges"));
    this->ValidationBaseConstruction = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("ValidationBaseConstruction"));
    this->CCWallComponent = NULL;
    this->CCFloorComponent = NULL;
    this->SelectionBoxComponent = NULL;
    this->IsReplicationReady = false;
    this->UniverseIndex = 0;
    this->SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->ShaderMovementRoot = CreateDefaultSubobject<USceneComponent>(TEXT("ShaderMovementRoot"));
    this->ActiveBlackHole = NULL;
    this->ScreenIndicatorActive = false;
    this->GridDataObjectCached = NULL;
}

