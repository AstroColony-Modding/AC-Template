#include "EHSpaceCarryComponent.h"

class AEHGrid;
class AEHSpaceShuttleActor;
class UEHDockingStationObject;

void UEHSpaceCarryComponent::HandleGameStarted() {
}

AEHSpaceShuttleActor* UEHSpaceCarryComponent::GetSpaceShuttleActor() {
    return NULL;
}

FIntVector UEHSpaceCarryComponent::GetShuttleDirection() {
    return FIntVector{};
}

AEHGrid* UEHSpaceCarryComponent::GetGridReference() {
    return NULL;
}

FVector UEHSpaceCarryComponent::GetDockingPosition() {
    return FVector{};
}

UEHDockingStationObject* UEHSpaceCarryComponent::GetArrivalDockingStation() {
    return NULL;
}

void UEHSpaceCarryComponent::DockSpaceShuttle() {
}

void UEHSpaceCarryComponent::DockedFinished() {
}

void UEHSpaceCarryComponent::Client_ShuttleUndocked_Implementation() {
}

void UEHSpaceCarryComponent::Client_AstronautsArrived_Implementation() {
}

UEHSpaceCarryComponent::UEHSpaceCarryComponent() {
    this->SpaceCarryShuttleOrderTime = 180.00f;
    this->UndockRetryTime = 5.00f;
    this->HumanSpawnOffset = 5;
    this->HumanEnterOffset = 1;
    this->HumanExitOffset = -2;
    this->SpaceShuttleActorCached = NULL;
}

