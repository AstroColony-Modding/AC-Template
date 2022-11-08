#include "VehiclePhysicsActor.h"
#include "Net/UnrealNetwork.h"

class ULandVehicle_EngineComponent;
class UWheelManager_Component;

void AVehiclePhysicsActor::UpdateComponents_Implementation(ULandVehicle_EngineComponent* Engine, UWheelManager_Component* Manager) {
}
bool AVehiclePhysicsActor::UpdateComponents_Validate(ULandVehicle_EngineComponent* Engine, UWheelManager_Component* Manager) {
    return true;
}

void AVehiclePhysicsActor::SetSteering(float Steering) {
}

void AVehiclePhysicsActor::SetHandbrake(bool Handbrake) {
}

void AVehiclePhysicsActor::SetEngineThrottle(float ThrottleInput) {
}

void AVehiclePhysicsActor::SendMovementDataToServer_Implementation(FInputInfo Data) {
}
bool AVehiclePhysicsActor::SendMovementDataToServer_Validate(FInputInfo Data) {
    return true;
}

void AVehiclePhysicsActor::SendMovementDataToAll_Implementation(FInputInfo Data) {
}

void AVehiclePhysicsActor::ReplicateThrottleToServer_Implementation(float ThrottleToReplicate) {
}
bool AVehiclePhysicsActor::ReplicateThrottleToServer_Validate(float ThrottleToReplicate) {
    return true;
}

void AVehiclePhysicsActor::ReplicateSteeringToServer_Implementation(float SteeringToReplicate) {
}
bool AVehiclePhysicsActor::ReplicateSteeringToServer_Validate(float SteeringToReplicate) {
    return true;
}

void AVehiclePhysicsActor::ReplicateHandbrakeToServer_Implementation(bool HandbrakeToReplicate) {
}
bool AVehiclePhysicsActor::ReplicateHandbrakeToServer_Validate(bool HandbrakeToReplicate) {
    return true;
}

void AVehiclePhysicsActor::InitializeAllSystems() {
}

void AVehiclePhysicsActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AVehiclePhysicsActor, ServerThrottle);
    DOREPLIFETIME(AVehiclePhysicsActor, ServerHandbrake);
    DOREPLIFETIME(AVehiclePhysicsActor, ServerSteering);
    DOREPLIFETIME(AVehiclePhysicsActor, ServerEngineComponent);
    DOREPLIFETIME(AVehiclePhysicsActor, ServerWheelManager);
}

AVehiclePhysicsActor::AVehiclePhysicsActor() {
    this->InputNetUpdates = 30;
    this->ServerThrottle = 0.00f;
    this->ServerHandbrake = false;
    this->ServerSteering = 0.00f;
    this->ServerEngineComponent = NULL;
    this->ServerWheelManager = NULL;
    this->EngineComponent = NULL;
    this->MovementReplicationMethod = EMovementReplicationMethod::ServerSideReplication;
    this->StoredPredictionComponent = NULL;
    this->StoredDragComponent = NULL;
    this->MeshComponent = NULL;
    this->StoredWheelManager = NULL;
    this->StoredEngineComponent = NULL;
}

