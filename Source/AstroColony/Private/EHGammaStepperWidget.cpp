#include "EHGammaStepperWidget.h"

void UEHGammaStepperWidget::HandleGammaValueChanged() {
}

UEHGammaStepperWidget::UEHGammaStepperWidget() {
    this->StepperTilesScale = 1.00f;
    this->StepperTileSize = 32.00f;
    this->StepperTilesHorizontalBox = NULL;
    this->Previous = NULL;
    this->Next = NULL;
    this->Selector = NULL;
    this->GammaStepperViewModel = NULL;
}

