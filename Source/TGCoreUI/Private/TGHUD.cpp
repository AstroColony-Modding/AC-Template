#include "TGHUD.h"

void ATGHUD::ShowHUDWidget() {
}


void ATGHUD::HideHUDWidget() {
}


ATGHUD::ATGHUD() {
    this->EnableBootingSequence = true;
    this->ShouldCinematicHideInGameWidgets = false;
    this->EnableCustomSlateNavigationConfig = true;
    this->HUDWidgetInstance = NULL;
}

