#include "TGGridWidget.h"
#include "Templates/SubclassOf.h"

class UTGGridSlotWidget;

void UTGGridWidget::RemoveSlot(const int32 SlotIndex) {
}

void UTGGridWidget::InsertSlot(const int32 SlotIndex) {
}

void UTGGridWidget::HandleUserScrolled(float CurrentOffset) {
}

void UTGGridWidget::EnableSlot(const int32 SlotIndex) {
}

void UTGGridWidget::DisableSlot(const int32 SlotIndex) {
}

void UTGGridWidget::DeactivateSlot(const int32 SlotIndex) {
}

UTGGridSlotWidget* UTGGridWidget::AddSlot(TSubclassOf<UTGGridSlotWidget> TGGridSlotWidgetClass) {
    return NULL;
}

void UTGGridWidget::ActivateSlot(const int32 SlotIndex) {
}

UTGGridWidget::UTGGridWidget() {
    this->GridPanel = NULL;
    this->GridSizeBox = NULL;
    this->SizeBox = NULL;
    this->ScrollBox = NULL;
    this->SlotHorizontalAlignment = HAlign_Fill;
    this->SlotVerticalAlignment = VAlign_Fill;
    this->StartingSlotIndex = -1;
    this->Columns = 5;
    this->NumberOfPreviewSlot = 6;
    this->TGGridSlotWidgetTemplate = NULL;
    this->TGInvisibleSlotWidgetTemplate = NULL;
}

