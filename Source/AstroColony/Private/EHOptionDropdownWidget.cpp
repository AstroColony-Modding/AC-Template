#include "EHOptionDropdownWidget.h"

void UEHOptionDropdownWidget::HandleSelectionOpened() {
}

void UEHOptionDropdownWidget::HandleSelectionChanged(const FString& SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType) {
}

UEHOptionDropdownWidget::UEHOptionDropdownWidget() {
    this->ComboBox = NULL;
    this->DropdownViewModel = NULL;
}

