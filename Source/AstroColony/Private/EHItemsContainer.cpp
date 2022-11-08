#include "EHItemsContainer.h"
#include "Net/UnrealNetwork.h"

class UEHItem;

void UEHItemsContainer::ResetRequestedItems() {
}

void UEHItemsContainer::RemoveRequestedItem(UEHItem* Item) {
}

void UEHItemsContainer::PickItem(UEHItem* Item) {
}

void UEHItemsContainer::NotifyItemsChanged() {
}

void UEHItemsContainer::Multi_TakeSingleItem_Implementation(const UEHItem* Item) {
}

void UEHItemsContainer::MoveSingleItemToInventory(UEHItem* Item) {
}

void UEHItemsContainer::InvertPushDefinitions() {
}

bool UEHItemsContainer::HasPushDefinitions() {
    return false;
}

bool UEHItemsContainer::HasItem(const FEHItemInstance& ItemInstance) {
    return false;
}

bool UEHItemsContainer::CheckTakingItems(const TArray<FEHItemInstance>& ItemInstances) {
    return false;
}

bool UEHItemsContainer::AddRequestedItem(UEHItem* Item, const uint8 MaxWorkersAssigned, const uint8 MaxResources) {
    return false;
}

void UEHItemsContainer::AddItems(const TArray<FEHItemInstance>& ItemInstences) {
}

void UEHItemsContainer::AddItem(const FEHItemInstance& ItemInstance) {
}

void UEHItemsContainer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UEHItemsContainer, Items);
}

UEHItemsContainer::UEHItemsContainer() {
    this->IsPreviewContainer = false;
    this->IsRemovable = true;
    this->SlotDragType = EEHSlotDragType::Items;
    this->HasInvertedPushDefinitions = false;
}

