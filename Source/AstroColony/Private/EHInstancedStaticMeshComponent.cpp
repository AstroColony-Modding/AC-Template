#include "EHInstancedStaticMeshComponent.h"

UEHInstancedStaticMeshComponent::UEHInstancedStaticMeshComponent() {
    this->IsBlockingHit = false;
    this->HitUseInstanceLocation = false;
    this->ForceConstructionRotation = false;
}

