#include "EHHUD.h"
#include "TGWidgetPredefinedAnimationsComponent.h"
#include "EHBackgroundComponent.h"

class UEHHUDWidget;

void AEHHUD::UpdateHUDVisibility(const bool ShowHUDIn) {
}


void AEHHUD::OpenPauseScreen() {
}

void AEHHUD::OpenInGameScreen(const EEHUIScreenID ScreenID) {
}



void AEHHUD::HandleKeyAction(const FKey& InKey) {
}

void AEHHUD::HandleGamePreStarted() {
}

UEHHUDWidget* AEHHUD::GetEHHUDWidget() {
    return NULL;
}

void AEHHUD::CloseInGameScreen() {
}

AEHHUD::AEHHUD() {
    this->DraggableItemWidgetClass = NULL;
    this->EHConfig = NULL;
    this->HasBackground = true;
    this->ShowFrontendByDefault = true;
    this->FirstScreenToOpen = EEHUIScreenID::MainMenu;
    this->EHCheatComponent = NULL;
    this->EHBackgroundComponent = CreateDefaultSubobject<UEHBackgroundComponent>(TEXT("EHBackgroundComponent"));
    this->TGWidgetAnimationsManager = CreateDefaultSubobject<UTGWidgetPredefinedAnimationsComponent>(TEXT("TGWidgetAnimationsManager"));
}

