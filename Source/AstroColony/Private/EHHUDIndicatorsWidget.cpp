#include "EHHUDIndicatorsWidget.h"

class UObject;

void UEHHUDIndicatorsWidget::RemoveIndicator(UObject* IndicatedObject) {
}

void UEHHUDIndicatorsWidget::AddIndicator(UObject* IndicatedObject) {
}

UEHHUDIndicatorsWidget::UEHHUDIndicatorsWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ScreenMarkerWidgetsClasses[0] = NULL;
    this->ScreenMarkerWidgetsClasses[1] = NULL;
    this->ScreenMarkerWidgetsClasses[2] = NULL;
    this->OffScreenIndicatorsRadial = NULL;
    this->OnScreenIndicatorsOverlay = NULL;
}

