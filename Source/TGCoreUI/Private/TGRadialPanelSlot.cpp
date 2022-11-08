#include "TGRadialPanelSlot.h"

void UTGRadialPanelSlot::SetZOrder(int32 InZOrder) {
}

void UTGRadialPanelSlot::SetSlotSize(const FVector2D& InSlotSize) {
}

void UTGRadialPanelSlot::SetSlotOffset(const FVector2D& InSlotOffset) {
}

void UTGRadialPanelSlot::SetRadialPosition(float InRadialPosition) {
}

void UTGRadialPanelSlot::SetAutoSize(bool InbAutoSize) {
}

void UTGRadialPanelSlot::SetAlignment(const FVector2D& InAlignment) {
}

int32 UTGRadialPanelSlot::GetZOrder() const {
    return 0;
}

FVector2D UTGRadialPanelSlot::GetSlotSize() const {
    return FVector2D{};
}

FVector2D UTGRadialPanelSlot::GetSlotOffset() const {
    return FVector2D{};
}

float UTGRadialPanelSlot::GetRadialPosition() const {
    return 0.0f;
}

bool UTGRadialPanelSlot::GetAutoSize() const {
    return false;
}

FVector2D UTGRadialPanelSlot::GetAlignment() const {
    return FVector2D{};
}

UTGRadialPanelSlot::UTGRadialPanelSlot() {
    this->RadialPosition = 0.00f;
    this->bAutoSize = false;
    this->ZOrder = 0;
}

