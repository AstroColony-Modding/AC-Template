#include "EHSaveGame.h"

UEHSaveGame::UEHSaveGame() {
    this->ProjectVersion = TEXT("0.0.0");
    this->SessionTimeInSeconds = 0.00f;
    this->TimeDilation = 1.00f;
    this->UniverseIndex = 0;
    this->JetpackOn = false;
}

