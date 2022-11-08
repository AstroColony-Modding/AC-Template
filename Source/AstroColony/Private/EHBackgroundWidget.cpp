#include "EHBackgroundWidget.h"




void UEHBackgroundWidget::HandleMediaOpened(const FString& OpenedUrl) {
}

void UEHBackgroundWidget::HandleMediaFailed(const FString& FailedUrl) {
}

void UEHBackgroundWidget::HandleBinkMediaOpened(const FString& OpenedUrl) {
}

UEHBackgroundWidget::UEHBackgroundWidget() {
    this->BackgroundViewModel = NULL;
    this->MediaPlayer = NULL;
    this->BinkMediaPlayer = NULL;
}

