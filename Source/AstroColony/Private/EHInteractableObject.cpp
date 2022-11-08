#include "EHInteractableObject.h"
#include "Net/UnrealNetwork.h"

class AEHGrid;
class UEHDeviceItem;

bool UEHInteractableObject::SupportsWater() {
    return false;
}

bool UEHInteractableObject::SupportsSignal() {
    return false;
}

bool UEHInteractableObject::SupportsElectricity() {
    return false;
}

void UEHInteractableObject::SetGrid(AEHGrid* GridIn) {
}

FVector UEHInteractableObject::GetWorldLocation() {
    return FVector{};
}

FVector UEHInteractableObject::GetWorldFloorLocation() {
    return FVector{};
}

int32 UEHInteractableObject::GetSize() {
    return 0;
}

AEHGrid* UEHInteractableObject::GetGridReference() {
    return NULL;
}

UEHDeviceItem* UEHInteractableObject::GetDeviceFormerItem() {
    return NULL;
}

void UEHInteractableObject::DebugDisableBillboard() {
}

void UEHInteractableObject::AddCustomMesh(const FGeneratedCustomMesh& CustomMesh) {
}

void UEHInteractableObject::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UEHInteractableObject, CachedCellCoord);
    DOREPLIFETIME(UEHInteractableObject, FormerItem);
}

UEHInteractableObject::UEHInteractableObject() {
    this->InstanceRotation = EEHInstanceRotation::Rot0;
    this->MeshIndex = 0;
    this->FormerItem = NULL;
}

