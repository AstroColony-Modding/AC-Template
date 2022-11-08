#include "TGGridWidgetFocus.h"

FTGGridWidgetFocus::FTGGridWidgetFocus() {
    this->UseCustomCellWhenEnteringGrid = false;
    this->CustomCellGridIndex = 0;
    this->HoveringTimeToFocus = 0.00f;
    this->HoveringTimeToActivate = 0.00f;
}

