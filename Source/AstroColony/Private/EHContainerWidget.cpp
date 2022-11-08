#include "EHContainerWidget.h"

class UEHItem;

void UEHContainerWidget::UpdateSlotsSelectionForItem(UEHItem* Item) {
}

UEHContainerWidget::UEHContainerWidget() {
    this->GridPanel = NULL;
    this->ContainerSlotWidgetClass = NULL;
    this->SlotTooltipClass = NULL;
    this->ShowQuantity = true;
    this->TextAlwaysVisible = false;
    this->Columns = 6;
    this->Rows = 2;
    this->SlotsLimit = -1;
    this->SlotTooltipWidget = NULL;
}

