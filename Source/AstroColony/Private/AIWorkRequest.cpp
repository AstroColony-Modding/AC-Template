#include "AIWorkRequest.h"

FAIWorkRequest::FAIWorkRequest() {
    this->RequestState = EAIWorkRequestState::None;
    this->ActionType = EAIWorkActionType::None;
    this->PrimaryDevice = NULL;
    this->SecondaryDevice = NULL;
    this->ResrouceToTransfer = NULL;
    this->DemandClass = NULL;
}

