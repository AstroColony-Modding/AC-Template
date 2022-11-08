#include "TGPanelWrapper.h"

UTGPanelWrapper::UTGPanelWrapper() {
    this->ChildHorizontalAlignment = HAlign_Fill;
    this->ChildVerticalAlignment = VAlign_Fill;
    this->ItemWidgetClass = NULL;
    this->UsePooling = false;
    this->PreviewItemsNumber = 4;
}

