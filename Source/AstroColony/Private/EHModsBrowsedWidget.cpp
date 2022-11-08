#include "EHModsBrowsedWidget.h"

void UEHModsBrowsedWidget::HandleUserScrolled(float CurrentOffset) {
}

void UEHModsBrowsedWidget::HandleModsSearchCompleted() {
}

UEHModsBrowsedWidget::UEHModsBrowsedWidget() {
    this->ModsOptionWidgetClass = NULL;
    this->HortizontalSlotAligment = HAlign_Fill;
    this->ScrollTimeThreshold = 0.20f;
    this->MouseMovementThreshold = 1.00f;
    this->VerticalModsList = NULL;
    this->ScrollBox = NULL;
    this->ModsBrowsedListViewModel = NULL;
    this->ScrollPadding = 0.00f;
    this->ShouldScrollAnimate = true;
    this->DescendantScrollDestination = EDescendantScrollDestination::IntoView;
}

