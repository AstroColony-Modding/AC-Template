#include "TechTreeWidget.h"

class UTechNodeArrowWidget;
class UTechNodeWidget;
class UTechnologyAsset;

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

