#include "EHMovableSpaceActor.h"
#include "Components/StaticMeshComponent.h"
#include "EHPrimitiveComponent.h"

class AActor;

void AEHMovableSpaceActor::StopMovement() {
}

void AEHMovableSpaceActor::SetVelocity(const FVector Velocity) {
}



void AEHMovableSpaceActor::Multi_VelocityChanged_Implementation(const FVector& NewSpaceVelocity) {
}

void AEHMovableSpaceActor::Multi_AttachActor_Implementation(AActor* ChildActor) {
}

void AEHMovableSpaceActor::MoveToDestination(const FVector& InDestinationPosition) {
}

FVector AEHMovableSpaceActor::GetSpaceVelocity() {
    return FVector{};
}

FVector AEHMovableSpaceActor::CalculateVelocityForPoints(const FVector& StartPosition, const FVector& EndPosition) {
    return FVector{};
}

void AEHMovableSpaceActor::AddVelocity(const FVector VelocityChange) {
}

AEHMovableSpaceActor::AEHMovableSpaceActor() {
    this->DockingPreview = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DockingPreview"));
    this->MovementDisabled = false;
    this->RealPositionUpdateTime = 1.00f;
    this->SceneRoot = CreateDefaultSubobject<UEHPrimitiveComponent>(TEXT("SceneRoot"));
    this->SpaceSpeed = 4.00f;
    this->IsMovingToDestination = false;
}

