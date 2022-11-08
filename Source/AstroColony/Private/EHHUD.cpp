#include "EHHUD.h"
#include "EHBackgroundComponent.h"
#include "TGWidgetPredefinedAnimationsComponent.h"

class UEHHUDWidget;

void AEHHUD::UpdateHUDVisibility(const bool ShowHUDIn) {
}


void AEHHUD::OpenPauseScreen() {
}

void AEHHUD::OpenInGameScreen(const EEHUIScreenID ScreenID) {
}


void AEHHUD::HandleKeyAction(const FKey& InKey) {
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

