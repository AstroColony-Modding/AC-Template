#include "InteractBaseWidget.h"

class UEHInteractableObject;


void UInteractBaseWidget::Init(UEHInteractableObject* InInteractableObject) {
}

UInteractBaseWidget::UInteractBaseWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->InteractableObject = NULL;
}

