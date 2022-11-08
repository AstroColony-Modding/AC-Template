#include "EHElectromagneticField.h"
#include "GameFramework/ProjectileMovementComponent.h"

AEHElectromagneticField::AEHElectromagneticField() {
    this->ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
}

