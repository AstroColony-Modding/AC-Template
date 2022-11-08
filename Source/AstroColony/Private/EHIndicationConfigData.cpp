#include "EHIndicationConfigData.h"

FEHIndicationConfigData::FEHIndicationConfigData() {
    this->WidgetIndicatorType = EEHWidgetIndicatorType::Icon;
    this->Icon = NULL;
    this->ShouldShowOffScreen = false;
    this->ShouldHideCloseDistance = false;
    this->CloseDistance = 0.00f;
}

