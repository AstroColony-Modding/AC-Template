#include "TGGridWidgetScroll.h"

FTGGridWidgetScroll::FTGGridWidgetScroll() {
    this->IsScrollSupported = false;
    this->ScrollOrientation = Orient_Horizontal;
    this->ShouldScrollAnimate = false;
    this->AlwaysShowScrollbar = false;
    this->ScrollVisibleRows = 0;
    this->ScrollVisibleRowsBuffer = 0;
}

