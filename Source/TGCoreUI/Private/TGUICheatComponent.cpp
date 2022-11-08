#include "TGUICheatComponent.h"

TArray<FString> UTGUICheatComponent::GetDebugDataToDraw() const {
    return TArray<FString>();
}

UTGUICheatComponent::UTGUICheatComponent() {
    this->LocalPlayerController = NULL;
}

