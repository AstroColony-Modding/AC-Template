#include "EHBaseButtonProperties.h"

FEHBaseButtonProperties::FEHBaseButtonProperties() {
    this->BaseButtonHorizontalAlignment = HAlign_Fill;
    this->BaseButtonVerticalAlignment = VAlign_Fill;
    this->ShowShadowText = false;
    this->ShouldSpecifySize = false;
    this->Width = 0.00f;
    this->Height = 0.00f;
    this->CanReceiveFocus = false;
    this->CanBeNavigatedTo = false;
    this->TreatHoverAsFocus = false;
    this->ShouldSpecifyContentPadding = false;
    this->ContentHorizontalAlignment = HAlign_Fill;
    this->ContentVerticalAlignment = VAlign_Fill;
}

