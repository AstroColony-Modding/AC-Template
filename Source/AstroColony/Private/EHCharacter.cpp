#include "EHCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Net/UnrealNetwork.h"

class AActor;
class AEHGrid;
class AEHMovableSpaceActor;
class UEHCharacterMovementComponent;


void AEHCharacter::Server_UpdateStationaryJetpack_Implementation(bool IsOn) {
}

void AEHCharacter::Server_UpdateBooster_Implementation(bool IsOn) {
}

void AEHCharacter::Server_ToggleStationaryJetpack_Implementation() {
}

void AEHCharacter::Server_LaunchCharacter_ZOverride_Implementation(const FVector& LaunchVelocity) {
}

void AEHCharacter::Server_LaunchCharacter_Implementation(const FVector& LaunchVelocity) {
}

void AEHCharacter::Server_DetachCharacter_Implementation() {
}

void AEHCharacter::Server_AttachCharacterToActor_Implementation(AActor* ParentActor) {
}


void AEHCharacter::SC_LaunchCharacter_ZOverride(const FVector& LaunchVelocity) {
}

void AEHCharacter::SC_LaunchCharacter(const FVector& LaunchVelocity) {
}

void AEHCharacter::OnRep_StationaryJetpack() {
}

void AEHCharacter::Multi_UpdateHidden_Implementation(const bool NewHidden) {
}

void AEHCharacter::Multi_Teleport_Implementation(const FVector& Location, const FRotator& Rotation) {
}

void AEHCharacter::Multi_DetachActor_Implementation() {
}

void AEHCharacter::Multi_AttachActor_Implementation(AActor* ParentActor) {
}

void AEHCharacter::HandlePlayerLeftGrid(AEHGrid* Grid) {
}

void AEHCharacter::HandlePlayerEnteredGrid(AEHGrid* Grid) {
}

void AEHCharacter::HandleMovingChanged(bool IsMoving) {
}


float AEHCharacter::GetInteractionDistance(const FVector& Location) {
    return 0.0f;
}

FVector AEHCharacter::GetInteractionDirection(const FVector& Location) {
    return FVector{};
}


UEHCharacterMovementComponent* AEHCharacter::GetEHMovementComponent() {
    return NULL;
}

FVector AEHCharacter::GetCharacterVelocity() {
    return FVector{};
}


void AEHCharacter::Deactivate() {
}

void AEHCharacter::Client_UpdateBaseComponent_Implementation(AEHMovableSpaceActor* MovableSpaceActor) {
}

void AEHCharacter::Client_NotifyStationaryJetpackChanged_Implementation(bool JetpackOn) {
}

void AEHCharacter::Client_NotifyClientMovingChanged_Implementation(bool IsMoving) {
}

void AEHCharacter::Client_NotifyBoosterChanged_Implementation(bool IsOn) {
}

void AEHCharacter::Activate() {
}

void AEHCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AEHCharacter, StationaryJetpack);
}

AEHCharacter::AEHCharacter() {
    this->FirstPersonCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
    this->CameraSpring = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraSpring"));
    this->TraceCameraPoint = CreateDefaultSubobject<USpringArmComponent>(TEXT("TraceCameraPoint"));
    this->MouseVerticalSensitivity = 1.00f;
    this->MouseHorizontalSensitivity = 1.00f;
    this->InventoryComponent = NULL;
    this->GamePlayerController = NULL;
    this->StationaryJetpack = false;
    this->Booster = false;
    this->BaseComponent = NULL;
    this->SphereGridDetectorComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereGridDetectorComponent"));
}

