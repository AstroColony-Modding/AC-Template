#include "EHToastContainerWidget.h"

class UEHToastViewModel;
class UEHToastWidget;

void UEHToastContainerWidget::ShowNextToast(UEHToastViewModel* ToastViewModel) {
}

void UEHToastContainerWidget::OnToastFinished(UEHToastWidget* FinishedWidget) {
}

void UEHToastContainerWidget::OnToastDismissed(UEHToastWidget* FinishedWidget) {
}

UEHToastContainerWidget::UEHToastContainerWidget() {
    this->ToastImageWidgetClass = NULL;
    this->ToastTechnologyWidgetClass = NULL;
    this->TimeBetweenToasts = 0.30f;
    this->MaximumSimultaneousToasts = 7;
    this->WidgetContainer = NULL;
    this->ToastContainerViewModel = NULL;
}

