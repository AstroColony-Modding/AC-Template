#include "ContainerSlotWidget.h"

class UDraggableItemPayload;

void UContainerSlotWidget::UpdateSlotState() {
}

void UContainerSlotWidget::UpdateCustomText(const FText& InCustomText) {
}

void UContainerSlotWidget::Refresh() {
}




void UContainerSlotWidget::HandleItemDragEnd() {
}

void UContainerSlotWidget::HandleItemDragBegin(UDraggableItemPayload* DraggableItemPayload) {
}

UContainerSlotWidget::UContainerSlotWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->Index = 0;
    this->ItemsContainer = NULL;
    this->VariantsWidgetClass = NULL;
    this->IsConstructionItemUnlocked = true;
    this->IsTextAlwaysVisible = false;
    this->ItemImage = NULL;
    this->TextBorder = NULL;
    this->NumberText = NULL;
    this->ItemName = NULL;
    this->Border = NULL;
    this->VariantsOverlay = NULL;
}

