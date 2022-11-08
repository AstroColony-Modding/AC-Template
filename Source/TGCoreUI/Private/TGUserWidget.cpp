#include "TGUserWidget.h"

class UTGWidgetAnimationsManager;



UTGWidgetAnimationsManager* UTGUserWidget::GetWidgetAnimationsManager() const {
    return NULL;
}

UTGUserWidget::UTGUserWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->NotifyFocusChanged = false;
    this->BCUIConfig = NULL;
    this->AnimationsManager = NULL;
    this->ViewModel = NULL;
}

