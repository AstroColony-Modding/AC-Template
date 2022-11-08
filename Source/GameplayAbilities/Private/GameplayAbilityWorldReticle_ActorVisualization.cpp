#include "GameplayAbilityWorldReticle_ActorVisualization.h"
#include "Components/CapsuleComponent.h"

AGameplayAbilityWorldReticle_ActorVisualization::AGameplayAbilityWorldReticle_ActorVisualization() {
    this->CollisionComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionCapsule0"));
}

