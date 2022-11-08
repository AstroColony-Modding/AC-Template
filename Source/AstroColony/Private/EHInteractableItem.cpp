#include "EHInteractableItem.h"

class UEHInteractableObject;
class AActor;

UEHInteractableObject* UEHInteractableItem::GetInteractableTemplate() {
    return NULL;
}

UEHInteractableObject* UEHInteractableItem::GetDefaultInteractableObject(AActor* GridActor) {
    return NULL;
}

UEHInteractableItem::UEHInteractableItem() {
    this->BillboardTemplateType = EEHBillboardTemplateType::Device;
    this->SSEInitializerTemplate = NULL;
    this->InteractableObjectTemplate = NULL;
}

