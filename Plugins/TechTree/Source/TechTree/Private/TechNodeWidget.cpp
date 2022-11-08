#include "TechNodeWidget.h"

class UTechnologyAsset;


void UTechNodeWidget::Init(UTechnologyAsset* InTechnologyAsset) {
}

UTechNodeWidget::UTechNodeWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->TechnologyAsset = NULL;
}

