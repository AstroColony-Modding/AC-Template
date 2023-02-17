#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ContainersMap.h"
#include "EAIProfession.h"
#include "EEHInstanceRotation.h"
#include "EEHMiningResourceType.h"
#include "EEHRotationDirection.h"
#include "EHBreedAnimalTypes.h"
#include "EHGlobalPointInstance.h"
#include "EHHarvestPlantTypes.h"
#include "EHItemInstance.h"
#include "EHJobModeType.h"
#include "EHPlayerAction.h"
#include "EHPlayerActionSet.h"
#include "EHProductionReplicationData.h"
#include "EHRecipe.h"
#include "EHSaveGameInterface.h"
#include "EInstanceCellType.h"
#include "EPlayerActionType.h"
#include "ItemArray.h"
#include "EHInventoryComponent.generated.h"

class UEHAsteroidsCatcher;
class UEHBarnObject;
class UEHCraftingObject;
class UEHDeciderCombinatorObject;
class UEHDeviceObject;
class UEHFarmObject;
class UEHItem;
class UEHItemsContainer;
class UEHLogicObject;
class UEHLogicSplitterObject;
class UEHMineObject;
class UEHProductionObject;
class UEHResourceItem;
class UEHSchoolObject;
class UEHSignalObject;
class UEHThrusterObject;
class UObject;
class UStaticMesh;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASTROCOLONY_API UEHInventoryComponent : public UActorComponent, public IEHSaveGameInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnVisibleResourcesCountChanged);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnResourceItemPicked, FEHItemInstance, PickedItem);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPlayerActionsChanged);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInventoryItemChange);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGlobalPointPicked, FEHGlobalPointInstance, PickedPoint);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInventoryItemChange OnInventoryItemChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInventoryItemChange OnInventoryCategoryChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInventoryItemChange OnRotationItemChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInventoryItemChange OnJobModeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerActionsChanged OnPlayerActionsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnResourceItemPicked OnResourceItemPicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGlobalPointPicked OnGlobalPointPicked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnVisibleResourcesCountChanged OnVisibleResourcesCountChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEHItemInstance LiftedItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 currentSlotID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 currentInventoryID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentJobMode, meta=(AllowPrivateAccess=true))
    EHJobModeType CurrentJobMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentInventoryVariantIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHItem* CurrentInventoryItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEHPlayerActionSet CurrentPlayerActionSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEHPlayerActionSet DefaultNoInteractionPlayerActionSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InventorySlotNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEHPlayerAction> PlayerActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SlotActionMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CategoriesActionMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEHInstanceRotation UserConstructionRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEHItem* PlayerContainerItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    UEHCraftingObject* PlayerContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    UEHItemsContainer* GarbageContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<UEHItemsContainer*> HotbarContainers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FContainersMap> ModesItemContainers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, Transient, meta=(AllowPrivateAccess=true))
    UEHItemsContainer* OrderResourcesContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEHItemsContainer* LogicResourcesContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemArray> DefaultInvnetoryItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> ConstructCategories;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VisibleResourcesCount;
    
public:
    UEHInventoryComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UpdatePlayerActions(const FEHPlayerActionSet& PlayerActionSet);
    
    UFUNCTION(BlueprintCallable)
    void SwapJobMode_SelectOrNone();
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleResourcesCount(const int32 VisibleResourcesCountIn);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultNoInteractionPlayerActions(const FEHPlayerActionSet PlayerActionsIn);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_UpdateMathCondition(UEHDeciderCombinatorObject* DeciderObject, uint8 MathConditionIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_UpdateConditionValue(UEHDeciderCombinatorObject* DeciderObject, int32 ConditionValue);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_UpdateAutoDeactivateCounts(UEHProductionObject* ProductionObject, const FName Name, const int32 Counts);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_TransferSlot(UEHItemsContainer* ContainerFrom, const uint8 IndexFrom, UEHItemsContainer* ContainerTo, const uint8 IndexTo);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_TransferItemsForRecipe(UEHItemsContainer* ContainerTo, const FEHRecipe& Recipe, int32 DesiredCount);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_TransferItem(UEHItemsContainer* ContainerFrom, const uint8 IndexFrom, UEHItemsContainer* ContainerTo, const bool IsEntireStack);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_TransferAllRecyclablesToInventory(UEHItemsContainer* ContainerFrom);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_TransferAllRecyclables(UEHItemsContainer* ContainerTo);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_TransferAllItems(UEHItemsContainer* ContainerFrom);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_TrainSpecialist(UEHSchoolObject* SchoolObject, EAIProfession Specialization);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ToggleSwitchState(UEHDeviceObject* DeviceObject);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_TakeSingleItem(UEHItemsContainer* Container, const UEHItem* Item);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_TakeItems(UEHItemsContainer* Container, const TArray<FEHItemInstance>& ItemInstances);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SwapContainerItems(UEHItemsContainer* Container, const uint8 IndexFrom, const uint8 IndexTo);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SplitterUpdateSplittingRatios(UEHLogicSplitterObject* SplitterObject, const TArray<int32>& SplittingRatios);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SplitContainerItem(UEHItemsContainer* Container, const uint8 ItemIndex, const int32 Quantity);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetThrustPowerManual(UEHThrusterObject* ThrusterObject, const float Power);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetThrustDirectionManual(UEHThrusterObject* ThrusterObject, const float AngleYAxis, const float AngleZAxis);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetItem(UEHItemsContainer* Container, const uint8 ItemIndex, const FEHItemInstance& ItemInstance);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ResetRequestedItems(UEHItemsContainer* Container);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RemoveSelectedRecipe(UEHProductionObject* ProductionObject, const FName Name);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_RemoveRequestedItem(UEHItemsContainer* Container, UEHItem* Item);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ProduceItems(UEHProductionObject* ProductionObject, const TArray<FEHItemInstance>& ProducedItems);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_PickWorldItem(const FEHItemInstance& ItemInstance);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_PickTransferredItem(UEHItemsContainer* Container, UEHItem* Item);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_PickSingleItem(UEHItem* Item);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_PickItems(UEHItemsContainer* Container, const TArray<FEHItemInstance>& PickedItems);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_PickItemInstance(UEHItemsContainer* Container, const FEHItemInstance& PickedItem);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_PickGlobalPointByChance(const FEHGlobalPointInstance& PointInstance, const float PickChance);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_PickGlobalPoint(const FEHGlobalPointInstance& PointInstance);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_OrderContainer(UEHItemsContainer* Container);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_MergeContainerItems(UEHItemsContainer* Container, const uint8 IndexFrom, const uint8 IndexTo);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_MergeContainerAllStacks(UEHItemsContainer* Container);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_LogicRemoveSelectedResource(UEHLogicObject* LogicObject, UEHItem* Item);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_LogicClearSelectedResources(UEHLogicObject* LogicObject);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_LogicAddSelectedResource(UEHLogicObject* LogicObject, UEHItem* Item);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_InvertPushDefinitions(UEHItemsContainer* Container);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_IncreaseDedicatedWorkplaceAI(UEHProductionObject* ProductionObject);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_DecreaseDedicatedWorkplaceAI(UEHProductionObject* ProductionObject);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ChangeSelectedRecipe(UEHProductionObject* ProductionObject, const FName Name, const bool ShouldSelect);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ChangeResource(UEHAsteroidsCatcher* AsteroidCatcher, UEHResourceItem* Item);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ChangePlant(UEHFarmObject* FarmObject, const EHHarvestPlantTypes Plant);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ChangeMiningResource(UEHMineObject* MineObject, EEHMiningResourceType MiningResource);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ChangeJobMode(const EHJobModeType JobModeType);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ChangeItemOrder(UEHItemsContainer* Container, const uint8 IndexFrom, const uint8 IndexTo);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ChangeAnimal(UEHBarnObject* BarnObject, const EHBreedAnimalTypes Animal);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_CancelTrainedSpecialist(UEHSchoolObject* SchoolObject, const uint8 AwaitingSpecialistIndex);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ApplyThrusterSetupToConnected(UEHThrusterObject* ThrusterObject);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_AddSelectedRecipe(UEHProductionObject* ProductionObject, const FName& Name, const FEHRecipe& Recipe);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_AddRequestedItem(UEHItemsContainer* Container, UEHItem* Item, const uint8 MaxWorkersAssigned, const int32 MaxResources);
    
    UFUNCTION(BlueprintCallable)
    void Server_AddItems(UEHItemsContainer* Container, const TArray<FEHItemInstance>& Items);
    
    UFUNCTION(BlueprintCallable)
    void SelectSlot(int32 IndexToSelect);
    
    UFUNCTION(BlueprintCallable)
    void SelectCategory(const int32 InventoryID);
    
    UFUNCTION(BlueprintCallable)
    void RemovePlayerAction(const EPlayerActionType PlayerAction, const bool AddToNoInteractionSet);
    
    UFUNCTION(BlueprintCallable)
    void PreviousSelectedItem();
    
    UFUNCTION(BlueprintCallable)
    void PickTracedItem();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRep_CurrentJobMode();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLogicAddSelectedResource(const bool Successful);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnContainerAddRequestedResource(const bool Successful);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NoItemsLeft();
    
    UFUNCTION(BlueprintCallable)
    void NextSelectedItem();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_UpdateMathCondition(UEHDeciderCombinatorObject* DeciderObject, uint8 MathConditionIndex);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_UpdateConditionValue(UEHDeciderCombinatorObject* DeciderObject, int32 ConditionValue);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_TrainSpecialist(UEHSchoolObject* SchoolObject, EAIProfession Specialization);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_ToggleSwitchState(UEHDeviceObject* DeviceObject);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_TakePoints(UEHProductionObject* ProductionObject, const TArray<FEHGlobalPointInstance>& PointInstances);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_SplitterUpdateSplittingRatios(UEHLogicSplitterObject* SplitterObject, const TArray<int32>& SplittingRatios);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_SetThrustPowerManual(UEHThrusterObject* ThrusterObject, const float Power);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_SetThrustDirectionManual(UEHThrusterObject* ThrusterObject, const float AngleYAxis, const float AngleZAxis);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_ResetRequestedItems(UEHItemsContainer* Container);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_RemoveRequestedItem(UEHItemsContainer* Container, UEHItem* Item);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_ProduceGlobalPoints(UEHProductionObject* ProductionObject, const TArray<FEHGlobalPointInstance>& GeneratedPoints);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_NotifyTrancheChanged(UEHAsteroidsCatcher* AsteroidCatcher);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_LogicSelectDevice(UEHSignalObject* SignalObject, UEHDeviceObject* Device);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_LogicRemoveSelectedResource(UEHLogicObject* LogicObject, UEHItem* Item);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_LogicClearSelectedResources(UEHLogicObject* LogicObject);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_LogicAddSelectedResource(UEHLogicObject* LogicObject, UEHItem* Item);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_InvertPushDefinitions(UEHItemsContainer* Container);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_ChangeResource(UEHAsteroidsCatcher* AsteroidCatcher, UEHResourceItem* Item);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_ChangePlant(UEHFarmObject* FarmObject, const EHHarvestPlantTypes Plant);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_ChangeMiningResource(UEHMineObject* MineObject, EEHMiningResourceType MiningResource);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_ChangeAnimal(UEHBarnObject* BarnObject, const EHBreedAnimalTypes Animal);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_CancelTrainedSpecialist(UEHSchoolObject* SchoolObject, const uint8 AwaitingSpecialistIndex);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_ApplyThrusterSetupToConnected(UEHThrusterObject* ThrusterObject);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_AddRequestedItem(UEHItemsContainer* Container, UEHItem* Item, const uint8 MaxWorkersAssigned, const int32 MaxResources);
    
    UFUNCTION(BlueprintCallable)
    void InitStartingTool();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSlotsCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRecyclablesCount(UEHItem* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FEHPlayerAction GetPlayerAction(const EPlayerActionType PlayerActionType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStaticMesh* GetMeshSelectedMesh();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEHItem* GetCurrentVariantInventoryItem();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEHItemsContainer* GetCurrentContainer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EInstanceCellType GetCurrentBuildingMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEHItemsContainer* GetContainerForMode(const int32 ModeID, const FName& Subcategory);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEHItemsContainer* GetContainerForItem(const UEHItem* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEHInstanceRotation GetConstructionRotation();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCategoriesCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetActionAnyInteractable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 FindModeID(const FName& Subcategory);
    
private:
    UFUNCTION(BlueprintCallable)
    void CollectedDirtToast();
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_WorldItemPicked(const FEHItemInstance& ItemInstance);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_UpdateProductionReplicationState(UEHProductionObject* ProductionObject, const FEHProductionReplicationData& ProductionReplicationData);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_UpdateItems(UEHItemsContainer* Container, const TArray<FEHItemInstance>& Items);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_UpdateAutoDeactivateCounts(UEHProductionObject* ProductionObject, const FName Name, const int32 Counts);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_TransferSlot(UEHItemsContainer* ContainerFrom, const uint8 IndexFrom, UEHItemsContainer* ContainerTo, const uint8 IndexTo);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_TransferItemsForRecipe(UEHItemsContainer* PlayerContainerFrom, UEHItemsContainer* ContainerTo, const FEHRecipe& Recipe, int32 DesiredCount);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_TransferItem(UEHItemsContainer* ContainerFrom, const uint8 IndexFrom, UEHItemsContainer* ContainerTo, const bool IsEntireStack);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_TransferAllItems(UEHItemsContainer* ContainerFrom, UEHItemsContainer* ContainerTo, const TArray<FEHItemInstance>& Items);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_TakeSingleItem(UEHItemsContainer* Container, const UEHItem* Item);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_TakeItems(UEHItemsContainer* Container, const TArray<FEHItemInstance>& ItemInstances);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SwapContainerItems(UEHItemsContainer* Container, const uint8 IndexFrom, const uint8 IndexTo);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SplitContainerItem(UEHItemsContainer* Container, const uint8 ItemIndex, const int32 Quantity);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_RemoveSelectedRecipe(UEHProductionObject* ProductionObject, const FName Name);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ProduceItems(UEHProductionObject* ProductionObject, const TArray<FEHItemInstance>& ProducedItems);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_PickTransferredItem(UEHItemsContainer* Container, UEHItem* Item);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_PickSingleItemBulk(const TArray<UEHItem*>& Items);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_PickSingleItem(UEHItem* Item);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_PickItems(UEHItemsContainer* Container, const TArray<FEHItemInstance>& PickedItems);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_PickItemInstance(UEHItemsContainer* Container, const FEHItemInstance& PickedItem);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_OrderContainer(UEHItemsContainer* Container);
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void Client_NotifyLogicAddSelectedResource(const bool Successful);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_NotifyItemTaken(UEHItemsContainer* Container, const FEHItemInstance& ItemInstance);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_NotifyItemAdded(UEHItemsContainer* Container, const FEHItemInstance& ItemInstance);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_NotifyCraftingStateChanged(UEHProductionObject* ProductionObject, const FName Name, bool IsEnabled, const float Ratio, const float PreviouslyCompletedProgress);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_NotifyAssignedWorplaceAIChanged(UEHProductionObject* ProductionObject, uint8 AssignedAICount);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_NotifyAllItemsCleared(UEHItemsContainer* Container);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_MergeContainerItems(UEHItemsContainer* Container, const uint8 IndexFrom, const uint8 IndexTo);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_MergeContainerAllStacks(UEHItemsContainer* Container);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_IncreaseDedicatedWorkplaceAI(UEHProductionObject* ProductionObject);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_GlobalPointPicked(const FEHGlobalPointInstance& PointInstance);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_DecreaseDedicatedWorkplaceAI(UEHProductionObject* ProductionObject);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_AddSelectedRecipe(UEHProductionObject* ProductionObject, const FName& Name, const FEHRecipe& Recipe);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_AddItems(UEHItemsContainer* Container, const TArray<FEHItemInstance>& Items);
    
    UFUNCTION(BlueprintCallable)
    void ClickTransferItem(UEHItemsContainer* ContainerFrom, const uint8 IndexFrom, UEHItemsContainer* ContainerTo);
    
    UFUNCTION(BlueprintCallable)
    void ClearToolbarItem();
    
    UFUNCTION(BlueprintCallable)
    void ClearPlayerActions();
    
    UFUNCTION(BlueprintCallable)
    void ChangeVariant(const bool IsNext);
    
    UFUNCTION(BlueprintCallable)
    void ChangeToolbarItemDirectly(UEHItem* NewItem, const int32 VariantIndex);
    
    UFUNCTION(BlueprintCallable)
    void ChangeRotation(const EEHRotationDirection RotationDirection);
    
    UFUNCTION(BlueprintCallable)
    bool ChangeJobMode(const EHJobModeType JobModeType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeInventoryItem();
    
    UFUNCTION(BlueprintCallable)
    void ButtonItemPressed(const int32 Index, UEHItemsContainer* PressedContainer);
    
    UFUNCTION(BlueprintCallable)
    void AddPlayerAction(const EPlayerActionType PlayerAction, const bool AddToNoInteractionSet);
    
    
    // Fix for true pure virtual functions not being implemented
};

