#include "EHBaseButtonWidget.h"

void UEHBaseButtonWidget::ReturnFocusAfterClick() {
}








void UEHBaseButtonWidget::HandleOnUnhovered() {
}

void UEHBaseButtonWidget::HandleOnUnfocused() {
}

void UEHBaseButtonWidget::HandleOnPressed() {
}

void UEHBaseButtonWidget::HandleOnHovered() {
}

void UEHBaseButtonWidget::HandleOnFocused() {
}

void UEHBaseButtonWidget::HandleOnClicked() {
}

UEHBaseButtonWidget::UEHBaseButtonWidget() {
    this->OnEnterAnimation = NULL;
    this->OnExitAnimation = NULL;
    this->OnFocusedAnimation = NULL;
    this->OnUnfocusedAnimation = NULL;
    this->OnHoveredAnimation = NULL;
    this->OnUnhoveredAnimation = NULL;
    this->OnClickedAnimation = NULL;
    this->OnPressedAnimation = NULL;
    this->ButtonText = NULL;
    this->ButtonShadowText = NULL;
    this->ContentContainer = NULL;
    this->ShadowContentContainer = NULL;
    this->ShadowBackgroundBlur = NULL;
    this->ButtonImage = NULL;
    this->FocusedImage = NULL;
    this->HatchingImage = NULL;
    this->ButtonTile = NULL;
    this->ButtonSizeBox = NULL;
    this->UseHatching = true;
    this->BaseButtonViewModel = NULL;
}

