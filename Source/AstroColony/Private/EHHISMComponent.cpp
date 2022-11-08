#include "EHHISMComponent.h"

void UEHHISMComponent::ResetRenderState() {
}

void UEHHISMComponent::HISMMarkRenderStateDirty() {
}

UEHHISMComponent::UEHHISMComponent() {
    this->InstanceType = EInstanceCellType::None;
    this->Item = NULL;
}

