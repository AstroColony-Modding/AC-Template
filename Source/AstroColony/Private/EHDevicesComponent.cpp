#include "EHDevicesComponent.h"
#include "Templates/SubclassOf.h"

class UEHInteractableObject;
class UEHItem;
class UEHItemsContainer;

void UEHDevicesComponent::MarkWaterNetworkStateDirty() {
}

void UEHDevicesComponent::HandleLoadGameFinished(bool IsLoadedFromSavegame) {
}

void UEHDevicesComponent::HandleContainerItemChange(UEHItem* Item, UEHItemsContainer* ItemsContainer, bool IsAdding) {
}

TArray<UEHInteractableObject*> UEHDevicesComponent::GetInteractableObjectsWithTag(TSubclassOf<UEHInteractableObject> InteractableClass, const FName InteractableTag) {
    return TArray<UEHInteractableObject*>();
}

TArray<UEHInteractableObject*> UEHDevicesComponent::GetInteractableObjectsByType(TSubclassOf<UEHInteractableObject> InteractableClass) {
    return TArray<UEHInteractableObject*>();
}

TArray<UEHInteractableObject*> UEHDevicesComponent::GetInteractableObjectsByItem(UEHItem* Item) {
    return TArray<UEHInteractableObject*>();
}

UEHDevicesComponent::UEHDevicesComponent() {
    this->BarrierNetwork = NULL;
    this->Grid = NULL;
}

