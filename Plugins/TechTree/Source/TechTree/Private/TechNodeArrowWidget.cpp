#include "TechNodeArrowWidget.h"


UTechNodeArrowWidget::UTechNodeArrowWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->PinType = ETechNodePinType::Input;
    this->ConnectionAngle = 0.00f;
    this->ParentTechnology = NULL;
    this->ChildTechnology = NULL;
}

