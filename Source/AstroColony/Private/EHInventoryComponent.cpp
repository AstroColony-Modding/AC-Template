#include "EHInventoryComponent.h"
#include "Net/UnrealNetwork.h"

class UEHItem;
class UEHProductionObject;
class UEHItemsContainer;
class UEHDeviceObject;
class UEHSchoolObject;
class UEHThrusterObject;
class UEHLogicObject;
class UEHFarmObject;
class UEHBarnObject;
class UEHMineObject;
class UEHAsteroidsCatcher;
class UEHSignalObject;
class UStaticMesh;
class UObject;

void UEHInventoryComponent::UpdatePlayerActions(const FEHPlayerActionSet& PlayerActionSet) {
}

void UEHInventoryComponent::SwapJobMode_SelectOrNone() {
}

void UEHInventoryComponent::SetVisibleResourcesCount(const int32 VisibleResourcesCountIn) {
}

void UEHInventoryComponent::SetDefaultNoInteractionPlayerActions(const FEHPlayerActionSet PlayerActionsIn) {
}

void UEHInventoryComponent::Server_UpdateAutoDeactivateCounts_Implementation(UEHProductionObject* ProductionObject, const FName Name, const int32 Counts) {
}

void UEHInventoryComponent::Server_TransferSlot_Implementation(UEHItemsContainer* ContainerFrom, const uint8 IndexFrom, UEHItemsContainer* ContainerTo, const uint8 IndexTo) {
}

void UEHInventoryComponent::Server_TransferItemsForRecipe_Implementation(UEHItemsContainer* ContainerTo, const FEHRecipe& Recipe, int32 DesiredCount) {
}

void UEHInventoryComponent::Server_TransferItem_Implementation(UEHItemsContainer* ContainerFrom, const uint8 IndexFrom, UEHItemsContainer* ContainerTo, const bool IsEntireStack) {
}

void UEHInventoryComponent::Server_TransferAllRecyclables_Implementation(UEHItemsContainer* ContainerTo) {
}

void UEHInventoryComponent::Server_TransferAllItems_Implementation(UEHItemsContainer* ContainerFrom) {
}

void UEHInventoryComponent::Server_TrainSpecialist_Implementation(UEHSchoolObject* SchoolObject, EAIProfession Specialization) {
}

void UEHInventoryComponent::Server_ToggleSwitchState_Implementation(UEHDeviceObject* DeviceObject) {
}

void UEHInventoryComponent::Server_TakeSingleItem_Implementation(UEHItemsContainer* Container, const UEHItem* Item) {
}

void UEHInventoryComponent::Server_TakeItems_Implementation(UEHItemsContainer* Container, const TArray<FEHItemInstance>& ItemInstances) {
}

void UEHInventoryComponent::Server_SwapContainerItems_Implementation(UEHItemsContainer* Container, const uint8 IndexFrom, const uint8 IndexTo) {
}

void UEHInventoryComponent::Server_SplitContainerItem_Implementation(UEHItemsContainer* Container, const uint8 ItemIndex, const int32 Quantity) {
}

void UEHInventoryComponent::Server_SetThrustPowerManual_Implementation(UEHThrusterObject* ThrusterObject, const float Power) {
}

void UEHInventoryComponent::Server_SetThrustDirectionManual_Implementation(UEHThrusterObject* ThrusterObject, const float AngleYAxis, const float AngleZAxis) {
}

void UEHInventoryComponent::Server_SetItem_Implementation(UEHItemsContainer* Container, const uint8 ItemIndex, const FEHItemInstance& ItemInstance) {
}

void UEHInventoryComponent::Server_RemoveSelectedRecipe_Implementation(UEHProductionObject* ProductionObject, const FName Name) {
}

void UEHInventoryComponent::Server_ProduceItems_Implementation(UEHProductionObject* ProductionObject, const TArray<FEHItemInstance>& ProducedItems) {
}

void UEHInventoryComponent::Server_PickWorldItem_Implementation(const FEHItemInstance& ItemInstance) {
}

void UEHInventoryComponent::Server_PickTransferredItem_Implementation(UEHItemsContainer* Container, UEHItem* Item) {
}

void UEHInventoryComponent::Server_PickSingleItem_Implementation(UEHItem* Item) {
}

void UEHInventoryComponent::Server_PickItems_Implementation(UEHItemsContainer* Container, const TArray<FEHItemInstance>& PickedItems) {
}

void UEHInventoryComponent::Server_PickItemInstance_Implementation(UEHItemsContainer* Container, const FEHItemInstance& PickedItem) {
}

void UEHInventoryComponent::Server_PickGlobalPointByChance_Implementation(const FEHGlobalPointInstance& PointInstance, const float PickChance) {
}

void UEHInventoryComponent::Server_PickGlobalPoint_Implementation(const FEHGlobalPointInstance& PointInstance) {
}

void UEHInventoryComponent::Server_OrderContainer_Implementation(UEHItemsContainer* Container) {
}

void UEHInventoryComponent::Server_MergeContainerItems_Implementation(UEHItemsContainer* Container, const uint8 IndexFrom, const uint8 IndexTo) {
}

void UEHInventoryComponent::Server_MergeContainerAllStacks_Implementation(UEHItemsContainer* Container) {
}

void UEHInventoryComponent::Server_LogicRemoveSelectedResource_Implementation(UEHLogicObject* LogicObject, UEHItem* Item) {
}

void UEHInventoryComponent::Server_LogicClearSelectedResources_Implementation(UEHLogicObject* LogicObject) {
}

void UEHInventoryComponent::Server_LogicAddSelectedResource_Implementation(UEHLogicObject* LogicObject, UEHItem* Item) {
}

void UEHInventoryComponent::Server_InvertPushDefinitions_Implementation(UEHItemsContainer* Container) {
}

void UEHInventoryComponent::Server_IncreaseDedicatedWorkplaceAI_Implementation(UEHProductionObject* ProductionObject) {
}

void UEHInventoryComponent::Server_DecreaseDedicatedWorkplaceAI_Implementation(UEHProductionObject* ProductionObject) {
}

void UEHInventoryComponent::Server_ChangeSelectedRecipe_Implementation(UEHProductionObject* ProductionObject, const FName Name, const bool ShouldSelect) {
}

void UEHInventoryComponent::Server_ChangePlant_Implementation(UEHFarmObject* FarmObject, const EHHarvestPlantTypes Plant) {
}

void UEHInventoryComponent::Server_ChangeMiningResource_Implementation(UEHMineObject* MineObject, EEHMiningResourceType MiningResource) {
}

void UEHInventoryComponent::Server_ChangeJobMode_Implementation(const EHJobModeType JobModeType) {
}

void UEHInventoryComponent::Server_ChangeItemOrder_Implementation(UEHItemsContainer* Container, const uint8 IndexFrom, const uint8 IndexTo) {
}

void UEHInventoryComponent::Server_ChangeAnimal_Implementation(UEHBarnObject* BarnObject, const EHBreedAnimalTypes Animal) {
}

void UEHInventoryComponent::Server_CancelTrainedSpecialist_Implementation(UEHSchoolObject* SchoolObject, const uint8 AwaitingSpecialistIndex) {
}

void UEHInventoryComponent::Server_ApplyThrusterSetupToConnected_Implementation(UEHThrusterObject* ThrusterObject) {
}

void UEHInventoryComponent::Server_AddSelectedRecipe_Implementation(UEHProductionObject* ProductionObject, const FName& Name, const FEHRecipe& Recipe) {
}

void UEHInventoryComponent::SelectSlot(int32 IndexToSelect) {
}

void UEHInventoryComponent::SelectCategory(const int32 InventoryID) {
}

void UEHInventoryComponent::RemovePlayerAction(const EPlayerActionType PlayerAction, const bool AddToNoInteractionSet) {
}

void UEHInventoryComponent::PreviousSelectedItem() {
}




void UEHInventoryComponent::NextSelectedItem() {
}

void UEHInventoryComponent::Multi_TrainSpecialist_Implementation(UEHSchoolObject* SchoolObject, EAIProfession Specialization) {
}

void UEHInventoryComponent::Multi_ToggleSwitchState_Implementation(UEHDeviceObject* DeviceObject) {
}

void UEHInventoryComponent::Multi_TakePoints_Implementation(UEHProductionObject* ProductionObject, const TArray<FEHGlobalPointInstance>& PointInstances) {
}

void UEHInventoryComponent::Multi_SetThrustPowerManual_Implementation(UEHThrusterObject* ThrusterObject, const float Power) {
}

void UEHInventoryComponent::Multi_SetThrustDirectionManual_Implementation(UEHThrusterObject* ThrusterObject, const float AngleYAxis, const float AngleZAxis) {
}

void UEHInventoryComponent::Multi_ProduceGlobalPoints_Implementation(UEHProductionObject* ProductionObject, const TArray<FEHGlobalPointInstance>& GeneratedPoints) {
}

void UEHInventoryComponent::Multi_NotifyTrancheChanged_Implementation(UEHAsteroidsCatcher* AsteroidCatcher) {
}

void UEHInventoryComponent::Multi_NotifyProductionStateChanged_Implementation(UEHProductionObject* ProductionObject, const bool IsProducing) {
}

void UEHInventoryComponent::Multi_LogicSelectDevice_Implementation(UEHSignalObject* SignalObject, UEHDeviceObject* Device) {
}

void UEHInventoryComponent::Multi_LogicRemoveSelectedResource_Implementation(UEHLogicObject* LogicObject, UEHItem* Item) {
}

void UEHInventoryComponent::Multi_LogicClearSelectedResources_Implementation(UEHLogicObject* LogicObject) {
}

void UEHInventoryComponent::Multi_LogicAddSelectedResource_Implementation(UEHLogicObject* LogicObject, UEHItem* Item) {
}

void UEHInventoryComponent::Multi_InvertPushDefinitions_Implementation(UEHItemsContainer* Container) {
}

void UEHInventoryComponent::Multi_ChangePlant_Implementation(UEHFarmObject* FarmObject, const EHHarvestPlantTypes Plant) {
}

void UEHInventoryComponent::Multi_ChangeMiningResource_Implementation(UEHMineObject* MineObject, EEHMiningResourceType MiningResource) {
}

void UEHInventoryComponent::Multi_ChangeAnimal_Implementation(UEHBarnObject* BarnObject, const EHBreedAnimalTypes Animal) {
}

void UEHInventoryComponent::Multi_CancelTrainedSpecialist_Implementation(UEHSchoolObject* SchoolObject, const uint8 AwaitingSpecialistIndex) {
}

void UEHInventoryComponent::Multi_ApplyThrusterSetupToConnected_Implementation(UEHThrusterObject* ThrusterObject) {
}

void UEHInventoryComponent::InitStartingTool() {
}

int32 UEHInventoryComponent::GetSlotsCount() {
    return 0;
}

int32 UEHInventoryComponent::GetRecyclablesCount(UEHItem* Item) {
    return 0;
}

FEHPlayerAction UEHInventoryComponent::GetPlayerAction(const EPlayerActionType PlayerActionType) {
    return FEHPlayerAction{};
}

UStaticMesh* UEHInventoryComponent::GetMeshSelectedMesh() {
    return NULL;
}

UEHItem* UEHInventoryComponent::GetCurrentVariantInventoryItem() {
    return NULL;
}

UEHItemsContainer* UEHInventoryComponent::GetCurrentContainer() {
    return NULL;
}

EInstanceCellType UEHInventoryComponent::GetCurrentBuildingMode() {
    return EInstanceCellType::None;
}

UEHItemsContainer* UEHInventoryComponent::GetContainerForMode(const int32 ModeID, const FName& Subcategory) {
    return NULL;
}

UEHItemsContainer* UEHInventoryComponent::GetContainerForItem(const UEHItem* Item) {
    return NULL;
}

EEHInstanceRotation UEHInventoryComponent::GetConstructionRotation() {
    return EEHInstanceRotation::Rot0;
}

int32 UEHInventoryComponent::GetCategoriesCount() {
    return 0;
}

UObject* UEHInventoryComponent::GetActionAnyInteractable() {
    return NULL;
}

int32 UEHInventoryComponent::FindModeID(const FName& Subcategory) {
    return 0;
}

void UEHInventoryComponent::CollectedDirtToast() {
}

void UEHInventoryComponent::Client_WorldItemPicked_Implementation(const FEHItemInstance& ItemInstance) {
}

void UEHInventoryComponent::Client_UpdateProductionReplicationState_Implementation(UEHProductionObject* ProductionObject, const FEHProductionReplicationData& ProductionReplicationData) {
}

void UEHInventoryComponent::Client_UpdateItems_Implementation(UEHItemsContainer* Container, const TArray<FEHItemInstance>& Items) {
}

void UEHInventoryComponent::Client_UpdateAutoDeactivateCounts_Implementation(UEHProductionObject* ProductionObject, const FName Name, const int32 Counts) {
}

void UEHInventoryComponent::Client_TransferSlot_Implementation(UEHItemsContainer* ContainerFrom, const uint8 IndexFrom, UEHItemsContainer* ContainerTo, const uint8 IndexTo) {
}

void UEHInventoryComponent::Client_TransferItemsForRecipe_Implementation(UEHItemsContainer* PlayerContainerFrom, UEHItemsContainer* ContainerTo, const FEHRecipe& Recipe, int32 DesiredCount) {
}

void UEHInventoryComponent::Client_TransferItem_Implementation(UEHItemsContainer* ContainerFrom, const uint8 IndexFrom, UEHItemsContainer* ContainerTo, const bool IsEntireStack) {
}

void UEHInventoryComponent::Client_TransferAllItems_Implementation(UEHItemsContainer* ContainerFrom, UEHItemsContainer* ContainerTo) {
}

void UEHInventoryComponent::Client_TakeSingleItem_Implementation(UEHItemsContainer* Container, const UEHItem* Item) {
}

void UEHInventoryComponent::Client_TakeItems_Implementation(UEHItemsContainer* Container, const TArray<FEHItemInstance>& ItemInstances) {
}

void UEHInventoryComponent::Client_SwapContainerItems_Implementation(UEHItemsContainer* Container, const uint8 IndexFrom, const uint8 IndexTo) {
}

void UEHInventoryComponent::Client_SplitContainerItem_Implementation(UEHItemsContainer* Container, const uint8 ItemIndex, const int32 Quantity) {
}

void UEHInventoryComponent::Client_RemoveSelectedRecipe_Implementation(UEHProductionObject* ProductionObject, const FName Name) {
}

void UEHInventoryComponent::Client_ProduceItems_Implementation(UEHProductionObject* ProductionObject, const TArray<FEHItemInstance>& ProducedItems) {
}

void UEHInventoryComponent::Client_PickTransferredItem_Implementation(UEHItemsContainer* Container, UEHItem* Item) {
}

void UEHInventoryComponent::Client_PickSingleItem_Implementation(UEHItem* Item) {
}

void UEHInventoryComponent::Client_PickItems_Implementation(UEHItemsContainer* Container, const TArray<FEHItemInstance>& PickedItems) {
}

void UEHInventoryComponent::Client_PickItemInstance_Implementation(UEHItemsContainer* Container, const FEHItemInstance& PickedItem) {
}

void UEHInventoryComponent::Client_OrderContainer_Implementation(UEHItemsContainer* Container) {
}

void UEHInventoryComponent::Client_NotifyLogicAddSelectedResource_Implementation(const bool Successful) {
}

void UEHInventoryComponent::Client_NotifyItemTaken_Implementation(UEHItemsContainer* Container, const FEHItemInstance& ItemInstance) {
}

void UEHInventoryComponent::Client_NotifyItemAdded_Implementation(UEHItemsContainer* Container, const FEHItemInstance& ItemInstance) {
}

void UEHInventoryComponent::Client_NotifyCraftingStateChanged_Implementation(UEHProductionObject* ProductionObject, const FName Name, bool IsEnabled, const float Ratio, const float PreviouslyCompletedProgress) {
}

void UEHInventoryComponent::Client_NotifyAssignedWorplaceAIChanged_Implementation(UEHProductionObject* ProductionObject, uint8 AssignedAICount) {
}

void UEHInventoryComponent::Client_NotifyAllItemsCleared_Implementation(UEHItemsContainer* Container) {
}

void UEHInventoryComponent::Client_MergeContainerItems_Implementation(UEHItemsContainer* Container, const uint8 IndexFrom, const uint8 IndexTo) {
}

void UEHInventoryComponent::Client_MergeContainerAllStacks_Implementation(UEHItemsContainer* Container) {
}

void UEHInventoryComponent::Client_IncreaseDedicatedWorkplaceAI_Implementation(UEHProductionObject* ProductionObject) {
}

void UEHInventoryComponent::Client_GlobalPointPicked_Implementation(const FEHGlobalPointInstance& PointInstance) {
}

void UEHInventoryComponent::Client_DecreaseDedicatedWorkplaceAI_Implementation(UEHProductionObject* ProductionObject) {
}

void UEHInventoryComponent::Client_AddSelectedRecipe_Implementation(UEHProductionObject* ProductionObject, const FName& Name, const FEHRecipe& Recipe) {
}

void UEHInventoryComponent::ClickTransferItem(UEHItemsContainer* ContainerFrom, const uint8 IndexFrom, UEHItemsContainer* ContainerTo) {
}

void UEHInventoryComponent::ClearToolbarItem() {
}

void UEHInventoryComponent::ClearPlayerActions() {
}

void UEHInventoryComponent::ChangeVariant(const bool IsNext) {
}

void UEHInventoryComponent::ChangeToolbarItemDirectly(UEHItem* NewItem, const int32 VariantIndex) {
}

void UEHInventoryComponent::ChangeRotation(const EEHRotationDirection RotationDirection) {
}

bool UEHInventoryComponent::ChangeJobMode(const EHJobModeType JobModeType) {
    return false;
}


void UEHInventoryComponent::ButtonItemPressed(const int32 Index, UEHItemsContainer* PressedContainer) {
}

void UEHInventoryComponent::AddPlayerAction(const EPlayerActionType PlayerAction, const bool AddToNoInteractionSet) {
}

void UEHInventoryComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UEHInventoryComponent, CurrentJobMode);
    DOREPLIFETIME(UEHInventoryComponent, PlayerContainer);
    DOREPLIFETIME(UEHInventoryComponent, GarbageContainer);
    DOREPLIFETIME(UEHInventoryComponent, HotbarContainers);
    DOREPLIFETIME(UEHInventoryComponent, OrderResourcesContainer);
}

UEHInventoryComponent::UEHInventoryComponent() {
    this->currentSlotID = -1;
    this->currentInventoryID = 0;
    this->CurrentJobMode = EHJobModeType::None;
    this->CurrentInventoryVariantIndex = 0;
    this->CurrentInventoryItem = NULL;
    this->InventorySlotNumber = 9;
    this->UserConstructionRotation = EEHInstanceRotation::Rot0;
    this->PlayerContainerItem = NULL;
    this->PlayerContainer = NULL;
    this->GarbageContainer = NULL;
    this->OrderResourcesContainer = NULL;
    this->LogicResourcesContainer = NULL;
    this->VisibleResourcesCount = 8;
}

