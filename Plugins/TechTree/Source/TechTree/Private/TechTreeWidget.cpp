#include "TechTreeWidget.h"

class UTechNodeWidget;
class UTechnologyAsset;
class UTechNodeArrowWidget;

TArray<UTechNodeWidget*> UTechTreeWidget::GetTechNodeWidgets() {
    return TArray<UTechNodeWidget*>();
}

UTechNodeWidget* UTechTreeWidget::GetTechNode(UTechnologyAsset* TechnologyAsset) {
    return NULL;
}

TArray<UTechNodeArrowWidget*> UTechTreeWidget::GetArrowWidgets() {
    return TArray<UTechNodeArrowWidget*>();
}

UTechTreeWidget::UTechTreeWidget() {
    this->TechTree = NULL;
}

