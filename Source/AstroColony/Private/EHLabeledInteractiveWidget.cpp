#include "EHLabeledInteractiveWidget.h"

class UTGViewModel;

void UEHLabeledInteractiveWidget::SetBPDataContext(UTGViewModel* InViewModel) {
}

void UEHLabeledInteractiveWidget::HandleClicked() {
}

UEHLabeledInteractiveWidget::UEHLabeledInteractiveWidget() {
    this->DefaultLabeledWidgetViewModel = NULL;
    this->ConfigurableLabel = NULL;
    this->InputPrompt = NULL;
    this->InteractiveArea = NULL;
    this->LabeledWidgetViewModel = NULL;
}

