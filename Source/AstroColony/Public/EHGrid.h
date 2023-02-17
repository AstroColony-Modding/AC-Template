#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EAIProfession.h"
#include "EEHInstanceRotation.h"
#include "EEHRotationDirection.h"
#include "EHCellType.h"
#include "EHIndicationInterface.h"
#include "EHInstanceCellDefinition.h"
#include "EHMapTrackableInterface.h"
#include "EHPushOut.h"
#include "EHSaveGameInterface.h"
#include "EHSimpleCell.h"
#include "EInstanceCellType.h"
#include "InstancesContainer.h"
#include "IntVector16.h"
#include "EHGrid.generated.h"

class AEHBlackHole;
class AEHGrid;
class AEHMovableSpaceActor;
class UEHAIDirectorComponent;
class UEHAIObject;
class UEHBillboardsLineComponent;
class UEHBoxComponent;
class UEHConveyorObject;
class UEHDevicesComponent;
class UEHElectricNetwork;
class UEHFlareComponent;
class UEHGridComponent;
class UEHGridDataObject;
class UEHHISMComponent;
class UEHInteractableObject;
class UEHInventoryComponent;
class UEHItem;
class UEHItemsContainer;
class UEHPathfindingComponent;
class UEHReactiveMeshComponent;
class UEHThrusterNetwork;
class UHierarchicalInstancedStaticMeshComponent;
class UInstancedStaticMeshComponent;
class UMaterialInstanceDynamic;
class UPrimitiveComponent;
class USceneComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class ASTROCOLONY_API AEHGrid : public AActor, public IEHSaveGameInterface, public IEHMapTrackableInterface, public IEHIndicationInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDockedGridsChanged);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FString GridName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FName GridUniqueID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool ModifiedByPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SaveGridItemsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SaveNavPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FloorMiddlePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHDevicesComponent* DevicesComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHPathfindingComponent* PathfindingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHAIDirectorComponent* AIDirectorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ThrusterNetwork, meta=(AllowPrivateAccess=true))
    UEHThrusterNetwork* ThrusterNetwork;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AEHGrid*> DockedGrids;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDockedGridsChanged OnDockedGridsChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHierarchicalInstancedStaticMeshComponent* FloorMiddleEdges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHierarchicalInstancedStaticMeshComponent* FloorLeftEdges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHierarchicalInstancedStaticMeshComponent* FloorRightEdges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHierarchicalInstancedStaticMeshComponent* FloorDiagonalEdges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHierarchicalInstancedStaticMeshComponent* FloorCornerEdges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInstancedStaticMeshComponent* ValidationBaseConstruction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEHBoxComponent* CCWallComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEHBoxComponent* CCFloorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEHBoxComponent* SelectionBoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FIntVector> AerialPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FIntVector> FloorPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FIntVector> AIPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FIntVector> BlockPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FIntVector> PlanetoidAerialPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FIntVector> PlanetoidSurfacePoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FIntVector, EEHInstanceRotation> PlanetoidWalkableRamps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsReplicationReady, meta=(AllowPrivateAccess=true))
    bool IsReplicationReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsReplicationReady, meta=(AllowPrivateAccess=true))
    uint8 UniverseIndex;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UEHItem*, FInstancesContainer> ItemComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FInstancesContainer> CustomMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ShaderMovementRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UEHItem*, UMaterialInstanceDynamic*> DynamicMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> CustomHighlightMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<FIntVector, UEHFlareComponent*> FlaresMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<FIntVector, UEHBillboardsLineComponent*> BillboardsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<FIntVector, UEHReactiveMeshComponent*> ReactiveMeshMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FIntVector, FEHCellType> CellEmpty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AEHBlackHole* ActiveBlackHole;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ScreenIndicatorActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHGridDataObject* GridDataObjectCached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, ReplicatedUsing=OnRep_ReplicatedDevices, meta=(AllowPrivateAccess=true))
    TArray<UEHInteractableObject*> ReplicatedInteractables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FEHCellType, EEHInstanceRotation> PendingAddClientInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FEHCellType, EEHInstanceRotation> PendingUpgradeClientInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FIntVector, UEHConveyorObject*> PendingRemovedPushes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEHPushOut> PendingClientPushes;
    
public:
    AEHGrid();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UpdateProfession(const FIntVector& CellCoords, const EAIProfession Profression);
    
    UFUNCTION(BlueprintCallable)
    void UpdateGridShaderPosition(const FVector& PreviousShaderPosition, const FVector& ShaderPosition);
    
    UFUNCTION(BlueprintCallable)
    void UpdateCollisions(const bool InCollisionEnabled);
    
    UFUNCTION(BlueprintCallable)
    void RotateInstance(const FIntVector& CellCoords, const EEHRotationDirection RotationDirection, EInstanceCellType InstanceCellType, const EEHInstanceRotation Rotation);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveInstance(EInstanceCellType InstanceCellType, const FIntVector& CellCoords, const EEHInstanceRotation Rotation);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ThrusterNetwork();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedDevices();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsReplicationReady();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_UpgradePendingInstance(UEHItem* Item, const FIntVector& CellCoords, UEHInteractableObject* InteractableObject, const EEHInstanceRotation Rotation);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_UpgradeInstance(const EInstanceCellType InstanceCellType, const FIntVector& CellCoords, UEHInteractableObject* InteractableObject, const EEHInstanceRotation Rotation);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_TransferResourceCell(const FIntVector& ResourceCoord, const FIntVector& Direction);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_TransferAICell(const FIntVector16& AICoord, uint8 DirectionPacked);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_SwapAIChain(const TArray<UEHAIObject*>& ChainAIs, const TArray<FIntVector>& AICoords, const TArray<uint8>& PathIndexes);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multi_StopAnimationBlending(const FIntVector& CellCoords);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_StartSimulation();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_RotateInstance(const FIntVector& CellCoords, const EEHRotationDirection RotationDirection, EInstanceCellType InstanceCellType, const EEHInstanceRotation Rotation);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_RemoveResource(const FIntVector16& ResourceCoord);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_RemoveInstanceBulk(const TArray<FEHSimpleCell>& Cells);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_RemoveInstance(const EInstanceCellType InstanceCellType, const FIntVector& CellCoords, const EEHInstanceRotation Rotation);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_RemoveAI(UEHAIObject* AIObject);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_PushOutResource(UEHItemsContainer* PushContainer, UEHItem* Resource, const uint8& PushIndex);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_PushOutAI(UEHItemsContainer* PushContainer, UEHItem* AIItemToPush, const FIntVector& AISpawnCoord, const FIntVector& PushCoords);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_OnAILeft(const FIntVector& DeviceCoord, UEHAIObject* AIObject);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_OnAIEntered(UEHInteractableObject* InteractableObject, UEHAIObject* AIObject);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_NotifyTransferedResourceRemoved(const FIntVector& ResourceCoord, const FIntVector& Direction);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_NotifyPossiblyTransferedResourceRemoved(const FIntVector& ResourceCoord);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_HitExtract(UEHInventoryComponent* PlayerInventoryComponent, const FIntVector& HitCoord, const FVector& HitLocation);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_FarmerEntered(const FIntVector& FarmCoord, UEHAIObject* NewFarmer);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_ExtractResource(const FIntVector& ResourceCoord);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_EnsureResourceRemoved(const FIntVector& ResourceCoord, const FIntVector& DirectionFrom);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_EnsureResourcePushed(const FIntVector& ResourceCoord, const FIntVector& Direction);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_BreederEntered(const FIntVector& PastureCoord, UEHAIObject* NewBreeder);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_AddPendingInstance(UEHItem* Item, const FIntVector& CellCoords, UEHInteractableObject* InteractableObject, const EEHInstanceRotation Rotation);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_AddInstanceBulk(const TArray<FEHSimpleCell>& Cells, const TArray<UEHInteractableObject*>& InteractableObjects, UEHGridComponent* ClientGridComponent);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_AddInstanceAndTransfer(UEHItem* Item, const FIntVector& CellCoords, const FIntVector& Direction);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_AddInstance(UEHItem* Item, const FIntVector& CellCoords, const EEHInstanceRotation Rotation);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleRotationChange();
    
    UFUNCTION(BlueprintCallable)
    void HandleJobModeChange();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleItemChange();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleGameStarted();
    
    UFUNCTION(BlueprintCallable)
    void HandleGameSimulationStarted();
    
    UFUNCTION(BlueprintCallable)
    void HandleAssetsLoaded();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetWorldPositionFromLocalPosition(const FVector& LocalPosition);
    
    UFUNCTION(BlueprintCallable)
    FIntVector GetPointForImpact(bool& Found);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AEHMovableSpaceActor* GetMovableSpaceActor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLocalPositionFromWorldPosition(const FVector& WorldPosition);
    
    UFUNCTION(BlueprintCallable)
    FEHCellType GetInstance(const FIntVector& CellCoords, EInstanceCellType CellType, EEHInstanceRotation InstanceRotation);
    
    UFUNCTION(BlueprintCallable)
    UEHHISMComponent* GetHISMComponentBP(UEHItem* Item, int32 InstanceIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCubeWorldPosition(const FIntVector& CellCoords);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCubeBottomWorldPosition(const FIntVector& CellCoords);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIntVector GetCellCoords(const FVector& LocalPosition);
    
    UFUNCTION(BlueprintCallable)
    void ForceAddInsideGridInstance(UEHItem* Item, const FIntVector& CellCoords, const FIntVector& ParentDeviceCoord, const EEHInstanceRotation Rotation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEHInteractableObject* FindHitInteractable(UPrimitiveComponent* HitComponent, const int32 HitItem);
    
    UFUNCTION(BlueprintCallable)
    void FinalizeGridGeneration();
    
    UFUNCTION(BlueprintCallable)
    TSet<UEHElectricNetwork*> ElectromagneticFieldBlackout(const TSet<FIntVector>& PointsForBlackout);
    
    UFUNCTION(BlueprintCallable)
    void DebugDestroyInteractable(UEHInteractableObject* Interactable);
    
    UFUNCTION(BlueprintCallable)
    void DebugClearReplcatedDevices();
    
    UFUNCTION(BlueprintCallable)
    void BlackHoleDestroyInstances(AEHBlackHole* BlackHoleActor, const TSet<FEHInstanceCellDefinition>& InstancesToDestroy);
    
    UFUNCTION(BlueprintCallable)
    void BeginGridGeneration();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AssetsLoaded();
    
    UFUNCTION(BlueprintCallable)
    bool AddInstance(UEHItem* Item, const FIntVector& CellCoords, UEHInteractableObject* InteractableObjectToRestore, const EEHInstanceRotation Rotation, const uint8 MeshID);
    
    UFUNCTION(BlueprintCallable)
    void AddGridInstance(UEHItem* Item, const FIntVector& CellCoords, UEHInteractableObject* InteractableObjectToRestore, const EEHInstanceRotation Rotation, const uint8 MeshID, const bool ForceRemoveExisting);
    
    
    // Fix for true pure virtual functions not being implemented
};

