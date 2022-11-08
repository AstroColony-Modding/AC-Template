#include "ClientSidePrediction_Component.h"

class UPrimitiveComponent;

void UClientSidePrediction_Component::SendServerTimeRequest_Implementation(float SentTime, UPrimitiveComponent* Comp) {
}
bool UClientSidePrediction_Component::SendServerTimeRequest_Validate(float SentTime, UPrimitiveComponent* Comp) {
    return true;
}

void UClientSidePrediction_Component::ClientReceiveTimeRequest_Implementation(float ReceivedServerTime, float SentTime, FHistoryBufferMinimum Correction) {
}

void UClientSidePrediction_Component::AllReceiveTimeRequest_Implementation(FHistoryBufferMinimum Correction) {
}

UClientSidePrediction_Component::UClientSidePrediction_Component() {
    this->BPMesh = NULL;
    this->WheelManager = NULL;
    this->EngineComponent = NULL;
    this->AverageContainerSize = 20;
    this->AverageErrorTolerance = 5;
    this->ErrorLimit = 5;
    this->NetUpdates = 100.00f;
    this->RoundTripMultiplier = 0.00f;
    this->AllowedError = 100.00f;
    this->ErrorCorrection = 0.10f;
    this->ErrorCorrectionHigh = 0.70f;
    this->AllowedError_Rotation = 20.00f;
    this->ErrorCorrection_Rotation = 0.10f;
    this->ErrorCorrectionHigh_Rotation = 0.70f;
    this->Wait = true;
    this->Debug = false;
    this->Draw = false;
    this->Persistent = false;
    this->Red = false;
    this->Green = false;
    this->Blue = false;
    this->Pawn = NULL;
    this->SuspensionTraceWorld = NULL;
}

