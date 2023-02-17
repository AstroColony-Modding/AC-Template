#include "EHHUDGame.h"
#include "Templates/SubclassOf.h"

class UMenuWidget;
class UObject;

void AEHHUDGame::UnregisterScreenIndicator(UObject* IndicatedObject) {
}

UMenuWidget* AEHHUDGame::ToggleMenuByType(EEHHUDMenuType HUDMenuType) {
    return NULL;
}

void AEHHUDGame::RegisterScreenIndicator(UObject* IndicatedObject) {
}


UMenuWidget* AEHHUDGame::OpenMenuByType(EEHHUDMenuType HUDMenuType) {
    return NULL;
}


bool AEHHUDGame::IsScreenIndicatorRegistered(UObject* IndicatedObject) {
    return false;
}


EEHPopMenuType AEHHUDGame::GetPopMenuType(const TSubclassOf<UMenuWidget> Widget) {
    return EEHPopMenuType::None;
}

TSubclassOf<UMenuWidget> AEHHUDGame::GetPopMenuClass(const EEHPopMenuType Type) {
    return NULL;
}

void AEHHUDGame::CreateModularVehicleWidget() {
}

void AEHHUDGame::CreateMapWidget() {
}


AEHHUDGame::AEHHUDGame() {
    this->TechTreeScrollOffset = 0.00f;
    this->OpenedMenuInteractable = NULL;
    this->ShowBlackScreen = false;
    this->OpenedMenu = NULL;
    this->OpenedScreen = NULL;
    this->MapWidget = NULL;
    this->ModularVehicleWidget = NULL;
    this->HUDIndicators = NULL;
}

