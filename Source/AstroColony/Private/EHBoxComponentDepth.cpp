#include "EHBoxComponentDepth.h"

void UEHBoxComponentDepth::SetBoxExtent(FVector InBoxExtent, bool bUpdateOverlaps) {
}

FVector UEHBoxComponentDepth::GetUnscaledBoxExtent() const {
    return FVector{};
}

FVector UEHBoxComponentDepth::GetScaledBoxExtent() const {
    return FVector{};
}

UEHBoxComponentDepth::UEHBoxComponentDepth() {
    this->LineThickness = 0.00f;
}

