#include "EHThrusterNetwork.h"
#include "Net/UnrealNetwork.h"

class AEHGrid;
class AEHMovableSpaceActor;
class UEHConnectorStationObject;
class UEHInteractableObject;
class UEHThrusterObject;

void UEHThrusterNetwork::UpdateTotalVelocity() {
}

void UEHThrusterNetwork::UndockStation(UEHInteractableObject* OriginDockStation) {
}

void UEHThrusterNetwork::StopMovement() {
}

void UEHThrusterNetwork::StopDocking() {
}

void UEHThrusterNetwork::SetDesiredMovement(const FVector& InDesiredMovement) {
}

void UEHThrusterNetwork::SetAutopilot(const bool IsActive) {
}

void UEHThrusterNetwork::Multi_UndockDockingStations_Implementation(UEHConnectorStationObject* OriginDockingStationObject, UEHConnectorStationObject* TargetDockingStationObject) {
}

void UEHThrusterNetwork::Multi_SetDesiredMovement_Implementation(const FVector& InDesiredMovement) {
}

void UEHThrusterNetwork::Multi_ConnectDockingStations_Implementation(UEHConnectorStationObject* OriginDockingStationObject, UEHConnectorStationObject* TargetDockingStationObject) {
}

void UEHThrusterNetwork::MoveToDestination(const FVector& InDestinationPosition, const FVector& DockingStationOffset, const FVector& DestinationDirectionOffset) {
}

void UEHThrusterNetwork::HandleMovableSpaceActorLocationChanged() {
}

void UEHThrusterNetwork::HandleMovableDestinationReached(const bool IsMovingToDestination) {
}

FVector UEHThrusterNetwork::GetVelocity() {
    return FVector{};
}

AEHMovableSpaceActor* UEHThrusterNetwork::GetMovableSpaceActor() {
    return NULL;
}

AEHGrid* UEHThrusterNetwork::GetGrid() {
    return NULL;
}

TArray<UEHThrusterObject*> UEHThrusterNetwork::GetAllThrustersRot90() {
    return TArray<UEHThrusterObject*>();
}

TArray<UEHThrusterObject*> UEHThrusterNetwork::GetAllThrustersRot270() {
    return TArray<UEHThrusterObject*>();
}

TArray<UEHThrusterObject*> UEHThrusterNetwork::GetAllThrustersRot180() {
    return TArray<UEHThrusterObject*>();
}

TArray<UEHThrusterObject*> UEHThrusterNetwork::GetAllThrustersRot0() {
    return TArray<UEHThrusterObject*>();
}

void UEHThrusterNetwork::AddVelocity(const FVector VelocityChange) {
}

void UEHThrusterNetwork::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UEHThrusterNetwork, MovableSpaceActor);
}

UEHThrusterNetwork::UEHThrusterNetwork() {
    this->MovableSpaceActorTemplate = NULL;
    this->MaxDockingDistance = 2000.00f;
    this->AutopilotActive = false;
    this->MovableSpaceActor = NULL;
    this->Grid = NULL;
}

