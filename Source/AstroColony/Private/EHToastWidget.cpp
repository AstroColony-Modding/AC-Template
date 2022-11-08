#include "EHToastWidget.h"

void UEHToastWidget::PlayNextAnimation() {
}

void UEHToastWidget::PlayFadeOutAnimation() {
}

void UEHToastWidget::OnToastDismissed() {
}

UEHToastWidget::UEHToastWidget() {
    this->SlideDownAnimation = NULL;
    this->FadeInAnimation = NULL;
    this->FadeOutAnimation = NULL;
    this->ToastViewModel = NULL;
    this->AnimationEndStep = 0;
    this->CurrentAnimationStep = 0;
    this->TimeBetweenEachSlide = 0.30f;
    this->LastAnimationPosition = 6;
}

