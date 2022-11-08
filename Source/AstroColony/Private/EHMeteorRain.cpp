#include "EHMeteorRain.h"
#include "GameFramework/ProjectileMovementComponent.h"

AEHMeteorRain::AEHMeteorRain() {
    this->ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
}

