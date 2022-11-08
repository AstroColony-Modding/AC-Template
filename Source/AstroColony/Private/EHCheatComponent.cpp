#include "EHCheatComponent.h"

void UEHCheatComponent::UIToggleDebugWidget() {
}

void UEHCheatComponent::UIToggleAuthenticationPrompt() {
}

void UEHCheatComponent::UIShowMockNotificationDialog() {
}


void UEHCheatComponent::UIOpenScreen(uint8 ScreenID) {
}


void UEHCheatComponent::UIDebugTestPopupQueue() {
}

void UEHCheatComponent::UIDebugShowPopup(const FString& Title, const FString& Body) {
}

void UEHCheatComponent::UIDebugClosePopup() {
}

void UEHCheatComponent::SetResScale(uint8 resscale) {
}

TArray<FEHItemInstance> UEHCheatComponent::GetAllResources(int32 Quantity) {
    return TArray<FEHItemInstance>();
}






UEHCheatComponent::UEHCheatComponent() {
    this->DebugWidgetClass = NULL;
    this->EHHUD = NULL;
    this->UISystem = NULL;
    this->LayerManager = NULL;
    this->GameInstance = NULL;
}

