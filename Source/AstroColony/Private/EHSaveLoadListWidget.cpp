#include "EHSaveLoadListWidget.h"

void UEHSaveLoadListWidget::HandleUserScrolled(float CurrentOffset) {
}

UEHSaveLoadListWidget::UEHSaveLoadListWidget() {
    this->SaveLoadOptionWidgetClass = NULL;
    this->HortizontalSlotAligment = HAlign_Fill;
    this->ScrollTimeThreshold = 0.20f;
    this->MouseMovementThreshold = 1.00f;
    this->VerticalSavegamesList = NULL;
    this->ScrollBox = NULL;
    this->SaveLoadListViewModel = NULL;
    this->ScrollPadding = 0.00f;
    this->ShouldScrollAnimate = true;
    this->DescendantScrollDestination = EDescendantScrollDestination::IntoView;
}

