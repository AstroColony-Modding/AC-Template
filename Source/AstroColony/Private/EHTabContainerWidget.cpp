#include "EHTabContainerWidget.h"

void UEHTabContainerWidget::SelectTab(uint8 TabIndex) {
}

void UEHTabContainerWidget::SelectPreviousTab() {
}

void UEHTabContainerWidget::SelectNextTab() {
}



UEHTabContainerWidget::UEHTabContainerWidget() {
    this->HorizontalTabOptions = NULL;
    this->TabOptionsWidgetClass = NULL;
    this->TabsFocusable = false;
    this->InputActionLeft = NULL;
    this->InputActionRight = NULL;
    this->CurrentTabTextBlock = NULL;
    this->TabCategoryViewModel = NULL;
}

