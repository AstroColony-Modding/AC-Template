#include "EHModsListWidget.h"

void UEHModsListWidget::HandleUserScrolled(float CurrentOffset) {
}

UEHModsListWidget::UEHModsListWidget() {
    this->ModsOptionWidgetClass = NULL;
    this->HortizontalSlotAligment = HAlign_Fill;
    this->ScrollTimeThreshold = 0.20f;
    this->MouseMovementThreshold = 1.00f;
    this->VerticalModsList = NULL;
    this->ScrollBox = NULL;
    this->ModsListViewModel = NULL;
    this->ScrollPadding = 0.00f;
    this->ShouldScrollAnimate = true;
    this->DescendantScrollDestination = EDescendantScrollDestination::IntoView;
}

