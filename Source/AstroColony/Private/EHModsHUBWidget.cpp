#include "EHModsHUBWidget.h"

void UEHModsHUBWidget::SelectTabByName(const FString& TabName) {
}


UEHModsHUBWidget::UEHModsHUBWidget() {
    this->ModsOptionWidgetClass = NULL;
    this->VerticalModsHUB = NULL;
    this->ScrollBox = NULL;
    this->ModsListViewModel = NULL;
    this->DescendantScrollDestination = EDescendantScrollDestination::IntoView;
}

