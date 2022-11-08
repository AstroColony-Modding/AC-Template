#include "EHProductionDeviceItem.h"

class UEHItem;

TArray<UEHItem*> UEHProductionDeviceItem::GetOutputItemsFromRecipes() {
    return TArray<UEHItem*>();
}

TSet<EGlobalPointType> UEHProductionDeviceItem::GetOutputGeneratedPointsFromRecipes() {
    return TSet<EGlobalPointType>();
}

TArray<UEHItem*> UEHProductionDeviceItem::GetInputItemsFromRecipes() {
    return TArray<UEHItem*>();
}

UEHProductionDeviceItem::UEHProductionDeviceItem() {
    this->CanProduceItems = true;
    this->UseDefaultSelectedRecipes = false;
    this->HasDynamicRecipes = false;
}

