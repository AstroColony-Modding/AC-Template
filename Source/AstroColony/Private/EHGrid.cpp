#include "EHGrid.h"
#include "Net/UnrealNetwork.h"
#include "Components/SceneComponent.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "EHDevicesComponent.h"
#include "EHPathfindingComponent.h"
#include "EHAIDirectorComponent.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"

class AEHBlackHole;
class UPrimitiveComponent;
class UEHItem;
class UEHInteractableObject;
class UEHAIObject;
class UEHItemsContainer;
class UEHInventoryComponent;
class UEHHISMComponent;
class UEHElectricNetwork;

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

void AEHGrid::Multi_UpgradeInstance_Implementation(const EInstanceCellType InstanceCellType, const FIntVector& CellCoords, const EEHInstanceRotation Rotation) {
}

void AEHGrid::Multi_TransferResourceCell_Implementation(const FIntVector& ResourceCoord, const FIntVector& Direction) {
}

void AEHGrid::Multi_TransferAICell_Implementation(const FIntVector& AICoord, const FIntVector& Direction) {
}

void AEHGrid::Multi_SwapAIChain_Implementation(const TArray<UEHAIObject*>& ChainAIs) {
}

void AEHGrid::Multi_StopAnimationBlending_Implementation(const FIntVector& CellCoords) {
}

void AEHGrid::Multi_RotateInstance_Implementation(const FIntVector& CellCoords, const EEHRotationDirection RotationDirection, EInstanceCellType InstanceCellType, const EEHInstanceRotation Rotation) {
}

void AEHGrid::Multi_RemoveInstance_Implementation(const EInstanceCellType InstanceCellType, const FIntVector& CellCoords, const EEHInstanceRotation Rotation) {
}

void AEHGrid::Multi_PushOutResource_Implementation(UEHItemsContainer* PushContainer, UEHItem* ResourceToPush, const FIntVector& PushCoords, const FIntVector& PushDirection, const FVector& TransferOffset) {
}

void AEHGrid::Multi_PushOutAI_Implementation(UEHItemsContainer* PushContainer, UEHItem* AIItemToPush, const FIntVector& AISpawnCoord, const FIntVector& PushCoords) {
}

void AEHGrid::Multi_OnAILeft_Implementation(UEHInteractableObject* InteractableObject, UEHAIObject* AIObject) {
}

void AEHGrid::Multi_OnAIEntered_Implementation(UEHInteractableObject* InteractableObject, UEHAIObject* AIObject) {
}

void AEHGrid::Multi_HitExtract_Implementation(UEHInventoryComponent* PlayerInventoryComponent, const FIntVector& HitCoord, const FVector& HitLocation) {
}

void AEHGrid::Multi_ExtractResource_Implementation(const FIntVector& ResourceCoord) {
}

void AEHGrid::Multi_AddPendingInstance_Implementation(UEHItem* Item, const FIntVector& CellCoords, UEHInteractableObject* InteractableObject, const EEHInstanceRotation Rotation) {
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

void AEHGrid::HandleAssetsLoaded() {
}

FVector AEHGrid::GetWorldPositionFromLocalPosition(const FVector& LocalPosition) {
    return FVector{};
}

FIntVector AEHGrid::GetPointForImpact(bool& Found) {
    return FIntVector{};
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
    this->SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->ShaderMovementRoot = CreateDefaultSubobject<USceneComponent>(TEXT("ShaderMovementRoot"));
    this->ActiveBlackHole = NULL;
    this->ScreenIndicatorActive = false;
    this->GridDataObjectCached = NULL;
}

