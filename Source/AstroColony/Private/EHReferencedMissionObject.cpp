#include "EHReferencedMissionObject.h"

class AEHGrid;
class UEHDevicesComponent;
class UEHInventoryComponent;
class UEHMissionsComponent;

UEHMissionsComponent* UEHReferencedMissionObject::GetMissionManagerRef() {
    return NULL;
}

UEHInventoryComponent* UEHReferencedMissionObject::GetInventoryComponentRef() {
    return NULL;
}

AEHGrid* UEHReferencedMissionObject::GetGrid() {
    return NULL;
}

UEHDevicesComponent* UEHReferencedMissionObject::GetDevicesComponent() {
    return NULL;
}

void UEHReferencedMissionObject::CompleteObjective(const bool Condition, const FName ObjectiveName, uint8 RepetitionsCount) {
}

UEHReferencedMissionObject::UEHReferencedMissionObject() {
    this->GridComponent = NULL;
    this->PlayerController = NULL;
}

