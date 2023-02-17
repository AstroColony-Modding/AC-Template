#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "VoxelCompressedWorldSave.h"
#include "EEHInstanceRotation.h"
#include "EEHRotationDirection.h"
#include "EGlobalPointType.h"
#include "EHAsteroidData.h"
#include "EHAsteroidExtraction.h"
#include "EHDeviceReplicationData.h"
#include "EHGridCellType.h"
#include "EHInterpolateCellParams.h"
#include "EHItemInstance.h"
#include "EHRecipe.h"
#include "EHSaveGameInterface.h"
#include "Templates/SubclassOf.h"
#include "EHGridComponent.generated.h"

class AActor;
class AEHChunk;
class AEHGrid;
class UEHAsteroidsCatcher;
class UEHBillboardsLineComponent;
class UEHBoxComponent;
class UEHConnectorStationObject;
class UEHDeviceObject;
class UEHDockingStationObject;
class UEHHISMComponent;
class UEHInstancedStaticMeshComponent;
class UEHInteractableObject;
class UEHItem;
class UEHOxygenGenerator;
class UEHSignalObject;
class UEHThrusterNetwork;
class UMaterialInterface;
class UPrimitiveComponent;
class UTexture2D;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASTROCOLONY_API UEHGridComponent : public UActorComponent, public IEHSaveGameInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnWarehouseItemsChange);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerScannerActiveStateChanged, bool, ScannerActive);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlanetoidLoaded, FName, PlanetoidName);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMultiplayerRebaseWorldOrigin);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMapRadarActiveStateChanged);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLastStreamingLevelLoaded);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnItemConstructed, UEHItem*, ConstructedItem, FIntVector, Coords);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInstanceRotated);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGridTransitioned, AEHGrid*, Grid);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGameStarted);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnConstructionPreviewChanged, int32, PreviewsCount);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCollectiveColliderStateChanged, bool, ColliderActive);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCellSelectionChanged);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAssetsLoaded);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BlockingHitPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector BlockingHitCoords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform OverlapISMHitTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector OverlapISMHitCoords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform OverlapBoxHitTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector OverlapBoxHitCoords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector CollectiveBoxHitCoords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CollectiveHitLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEHInstancedStaticMeshComponent* TraceBoxComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEHHISMComponent* TraceOverlapISMComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TraceWorldInteractiveActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* TraceOverlapPrimitveComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TraceHitItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DestructibleHitPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* DestructibleHitActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SweepLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SweepHitActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BarrierHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor SelectionBoxSelectColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor SelectionBoxDeselectColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor SelectionBoxConstructColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ValidationBaseIgnoredColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ValidationBaseValidColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ValidationBaseInvalidColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VoxelTerrainHitZOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ComponentHitOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CollectiveHitWallsOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreviewItemMaterialSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultBlockingHitOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AddingRemovingOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DestructibleHitOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PlayerPawnPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector PlayerChunkCoords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector ActorCoordinates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FIntVector> ConstructionPreviewCoords;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FIntVector, AEHChunk*> Chunks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FIntVector, AEHChunk*> InactiveU1Chunks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FIntVector, AEHChunk*> InactiveU2Chunks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FIntVector, AEHChunk*> InactiveU3Chunks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FIntVector, AEHChunk*> InactiveU4Chunks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEHInterpolateCellParams InterpolateCellParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloorThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallThickness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RenderRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DestroyRenderRangeOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AEHChunk> ChunkTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SpawnCosmicEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AEHGrid> GridTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEHThrusterNetwork> ThrusterNetworkTemplate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlanetoidDetailsDefaultSpawnChances[19];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> PlanetoidDetailDefaultSpawnChanceIndexes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector PlanetoidSizeMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector PlanetoidRandomGrowthSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHItem* ExtractPreviewItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> TerrainTypeSpawnChances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TerrainTypeSpawnChanceSum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> ShapeTypeSpawnChances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShapeTypeSpawnChanceSum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraLineTraceLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnderLineTraceLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPlayerReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClientSimulationSyncTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* HighlightPreviewMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ValidConstructPreviewMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* InvalidConstructPreviewMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* BGConstructPreviewMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* BGConstructPreviewsMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* SelectPreviewMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* DisabledPreviewMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* PreselectPreviewMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* DeselectPreviewMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* VertexCollapseMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollapseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollapseSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CollapseTargetRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IntensivityDivider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* DissolveMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* DisintegrationMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DissolveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DissolveScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetDissolve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisolveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DissolveShiftOne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DissolveShiftTwo;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEHBillboardsLineComponent> BillboardLineTemplates[4];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* BillboardTextures[14];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEHBoxComponent> CollectiveColliderWallTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEHBoxComponent> CollectiveColliderFloorTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEHBoxComponent> SelectionBoxTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LockGridActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool CollectiveColliderActive;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAssetsLoaded OnAssetsLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameStarted OnGameStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameStarted OnGameSimulationStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWarehouseItemsChange OnWarehouseItemsChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInstanceRotated OnInstanceRotated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCellSelectionChanged OnCellSelectionChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnConstructionPreviewChanged OnConstructionPreviewChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnItemConstructed OnItemConstructed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCollectiveColliderStateChanged OnCollectiveColliderStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGridTransitioned OnPlayerLeftGrid;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGridTransitioned OnPlayerEnteredGrid;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerScannerActiveStateChanged OnPlayerScannerActiveStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMapRadarActiveStateChanged OnMapRadarActiveStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlanetoidLoaded OnPlanetoidLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLastStreamingLevelLoaded OnLastStreamingLevelLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMultiplayerRebaseWorldOrigin OnMultiplayerRebaseWorldOrigin;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UEHItem*, int32> GlobalWarehouseItemsCounts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEHInstancedStaticMeshComponent> DiagonalWallBoxColliderTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEHInstancedStaticMeshComponent> WallBoxColliderTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEHInstancedStaticMeshComponent> FloorBoxColliderTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEHInstancedStaticMeshComponent> BlockBoxColliderTemplate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FEHGridCellType> SelectedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRemoveActionUnlocked;
    
public:
    UEHGridComponent();
    UFUNCTION(BlueprintCallable)
    void UpgradeCellObject();
    
    UFUNCTION(BlueprintCallable)
    void ToggleScanner(const bool IsScannerActive, const FVector ScanLocation);
    
    UFUNCTION(BlueprintCallable)
    void SwapCellObjectInputs();
    
    UFUNCTION(BlueprintCallable)
    void SpawnChunkTest(const FVector& position);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_UpgradeCellObjects(const TArray<FEHGridCellType>& SelectedCellItems);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_UnregisterWatchedItem(UEHItem* WatchedItem);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_UndockStation(AEHGrid* GridReference, UEHInteractableObject* OriginDockStation);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_TraceHitAsteroid(const FVector& HitLocation, const int32 HitIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_TraceCatchAsteroid(UEHAsteroidsCatcher* AsteroidCatcher, const FVector& HitLocation, const int32 HitIndex);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Server_StopDocking(AEHGrid* GridReference);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_StartSimulation();
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetDesiredMovement(UEHThrusterNetwork* ThrusterNetwork, const FVector& DesiredMovement);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RotateCellObject(const EEHRotationDirection RotationDirection, const TArray<FEHGridCellType>& SelectedCellItems);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RequestDeviceData(UEHDeviceObject* DeviceObject);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RequestAsteroidDatas();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RemoveProcessedAsteroid(UEHAsteroidsCatcher* AsteroidCatcher);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RemoveCellObjects(const TArray<FEHGridCellType>& SelectedCellItems);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RemoveAttractedAsteroid(UEHAsteroidsCatcher* AsteroidCatcher);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RemoveAstronautOrder(UEHDockingStationObject* DockingStation);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RegisterWatchedItem(UEHItem* WatchedItem);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RefillPlayerOxygen(UEHOxygenGenerator* OxygenGenerator);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_NotifyPlayerReady();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_LogicSelectDevice(UEHSignalObject* SignalObject, UEHDeviceObject* Device);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_InitGrid(AEHGrid* NewGrid);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_HitExtract(AEHGrid* GridReference, const FIntVector& HitCoord, const FVector& HitLocation);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_DockStation(AEHGrid* GridReference, UEHInteractableObject* OriginDockStation);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_DestructConveyorLine(UEHConnectorStationObject* ConnectorObject, const uint8 LineNumber);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_CreateStationOrigin(const FString& StationName, const FVector& Location);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ConstructItems(AEHGrid* GridReference, UEHItem* Item, const TArray<FIntVector>& ConstructCoords, EEHInstanceRotation Rotation);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ConstructConveyorLine(UEHConnectorStationObject* ConnectorObject, const uint8 LineNumber, const bool ConveyorReverseDirection);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_CellOpened(UEHInteractableObject* InteractableObject);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_CellClosed();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_AddChildActorForInteraction(UEHDeviceObject* DeviceObject);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_AddAstronautOrder(UEHDockingStationObject* DockingStation);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_AddAsteroid(const FTransform& Transform, const FEHAsteroidData& AsteroidData);
    
    UFUNCTION(BlueprintCallable)
    void SelectCellObject();
    
    UFUNCTION(BlueprintCallable)
    void RotateCellObject(const EEHRotationDirection RotationDirection);
    
    UFUNCTION(BlueprintCallable)
    void ResetUnderGrid();
    
    UFUNCTION(BlueprintCallable)
    void PerformRotateAction(const EEHRotationDirection RotationDirection);
    
    UFUNCTION(BlueprintCallable)
    void PerformRemoveSelectedAction();
    
    UFUNCTION(BlueprintCallable)
    void PerformRemoveAction();
    
    UFUNCTION(BlueprintCallable)
    void PerformHitAction();
    
    UFUNCTION(BlueprintCallable)
    void PerformFirstGridAction();
    
    UFUNCTION(BlueprintCallable)
    void PerformCancelAction();
    
    UFUNCTION(BlueprintCallable)
    void OpenCellObject();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelectionPerformed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRemovalPerformed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOxygenRefilled(const bool OxygenRefillSuccessful);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemConstructionPerformed(const bool WasConstructionSuccessful);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInvalidItemPick();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDockingFailed(const bool DockWasTooFar);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCellsUpgraded(const bool UpgradeSuccessful, const TArray<FEHItemInstance>& FailedCost);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCellsRemoved(const bool RemoveSuccessful);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCellOpened(UEHInteractableObject* InteractableObject);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAstronautOrderFailed(const bool ShuttleIsHere);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAINudge(UEHInteractableObject* InteractableObject, const FIntVector& CellCoords);
    
    UFUNCTION(BlueprintCallable)
    void NudgeAICellObject();
    
    UFUNCTION(BlueprintCallable)
    void ModifyVoxelBoxDelayed(const FIntVector& BoxMin, const FIntVector& BoxMax, const bool IsAdding, const float Delay);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoadStreamingLevel(AEHGrid* StreamingGrid, const FName StreamingGridName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRadarActive();
    
    UFUNCTION(BlueprintCallable)
    void InteractWithInteractableObject(UEHInteractableObject* InteractableObject);
    
    UFUNCTION(BlueprintCallable)
    void InteractCellObject();
    
    UFUNCTION(BlueprintCallable)
    void InitGrid(AEHGrid* GridReference);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleUniverseChanged(uint8 PreviousIndex, uint8 NewIndex);
    
    UFUNCTION(BlueprintCallable)
    void HandleRotationItemChange();
    
    UFUNCTION(BlueprintCallable)
    void HandleLoadGameFinished(bool IsLoadedFromSavegame);
    
    UFUNCTION(BlueprintCallable)
    void HandleJobModeChanged();
    
    UFUNCTION(BlueprintCallable)
    void HandleItemChange();
    
    UFUNCTION(BlueprintCallable)
    void HandleInventoryActionChange();
    
    UFUNCTION(BlueprintCallable)
    void HandleGameplayEffectUnlocked();
    
    UFUNCTION(BlueprintCallable)
    void HandleControlModeChanged();
    
public:
    UFUNCTION(BlueprintCallable)
    TArray<FEHItemInstance> GetWarehouseItems();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UEHItem*> GetUsedToConstructResources(UEHItem* ResourceItem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UEHItem*> GetUsedByResources(UEHItem* ResourceItem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEHInteractableObject* GetTracedInteractable();
    
    UFUNCTION(BlueprintCallable)
    UEHItem* GetSelectedItemType();
    
    UFUNCTION(BlueprintCallable)
    int32 GetSelectedItemsCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FEHRecipe GetRecipeForItem(UEHItem* Item, bool& Found);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FEHRecipe GetRecipeForGlobalPoint(const EGlobalPointType GlobalPoint, bool& Found);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UEHItem*> GetProducedByResources(UEHItem* ResourceItem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIntVector GetPreviewCoord();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AEHGrid* GetGridReference();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UEHItem*> GetCraftedToResources(UEHItem* ResourceItem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UEHItem*> GetCraftedFromResources(UEHItem* ResourceItem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIntVector GetCollectivePreviewCoord();
    
    UFUNCTION(BlueprintCallable)
    FIntVector GetCellCoords(const FVector LocalPosition);
    
    UFUNCTION(BlueprintCallable)
    void ForcePlayerReadyTest();
    
    UFUNCTION(BlueprintCallable)
    void FirstGridActionReleased();
    
    UFUNCTION(BlueprintCallable)
    void FirstGridActionPressed(bool& Interrupted);
    
    UFUNCTION(BlueprintCallable)
    void FinishInteractionCellObject();
    
    UFUNCTION(BlueprintCallable)
    void DebugRemoveAllChunks();
    
private:
    UFUNCTION(BlueprintCallable)
    void ClientCheckSimulationReady();
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_StartSimulation();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_Start();
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_PayWarehouseItemCost(const TArray<FEHItemInstance>& Cost, UEHItem* RecyclableItem);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_OxygenRefilled(const bool OxygenRefillSuccessful);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_OnEnteredGrid(AEHGrid* NewGridUnder);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_NotifyDockingFailed(const bool DockWasTooFar);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_NotifyAstronautOrderFailed(const bool ShuttleIsHere);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ItemConstructed(UEHItem* Item, const FIntVector& Coord, EEHInstanceRotation Rotation);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_InteractChildActor(UEHDeviceObject* DeviceObject);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_InitDeviceData(UEHDeviceObject* DeviceObject, const FEHDeviceReplicationData& DeviceReplicationData);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_InitAsteroidDatas(const TArray<FTransform>& Transforms, const TArray<FEHAsteroidData>& AsteroidDatas, const TArray<FEHAsteroidExtraction>& Extractions);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_CellObjectsUpgraded(const bool UpgradeSuccessful, const TArray<FEHItemInstance>& FailedCost);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_CellObjectsRotated();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_CellObjectsRemoved(const bool RemoveSuccessful);
    
    UFUNCTION(BlueprintCallable)
    void ClearSelection();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckVoxelHitInteractionDistance();
    
    UFUNCTION(BlueprintCallable)
    void CheckPlayerReadyState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckBlockingHitInteractionDistance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPayWarehouseItemCost(const TArray<FEHItemInstance>& Cost, int32 Count, UEHItem* RecyclableItem);
    
    UFUNCTION(BlueprintCallable)
    void CacheDestroyedVoxelSave(const FName VoxelWorldName, const FVoxelCompressedWorldSave& VoxelSave);
    
private:
    UFUNCTION(BlueprintCallable)
    void AssetsLoaded();
    
public:
    UFUNCTION(BlueprintCallable)
    void AddInstanceDelayed(UEHItem* Item, const FIntVector& CellCoords, const float Delay, UEHInteractableObject* InteractableObjectToRestore, const EEHInstanceRotation Rotation);
    
    UFUNCTION(BlueprintCallable)
    void AddCellObjects();
    
    
    // Fix for true pure virtual functions not being implemented
};

