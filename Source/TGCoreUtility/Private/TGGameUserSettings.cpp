#include "TGGameUserSettings.h"

UTGGameUserSettings::UTGGameUserSettings() {
    this->Gamma = 50.00f;
    this->Contrast = 50.00f;
    this->UserInterfaceScale = 100.00f;
    this->FieldOfView = 100.00f;
    this->MouseVerticalSensitivity = 100.00f;
    this->MouseVerticalInverted = false;
    this->MouseHorizontalSensitivity = 100.00f;
    this->MouseHorizontalInverted = false;
    this->AutosaveInterval = 5.00f;
    this->AutosaveMaxCount = 5;
    this->RecoverysaveMaxCount = 5;
    this->MasterVolume = 100.00f;
    this->EffectsVolume = 100.00f;
    this->GameMusicVolume = 100.00f;
    this->MenuMusicVolume = 100.00f;
    this->UserInterfaceVolume = 100.00f;
}

