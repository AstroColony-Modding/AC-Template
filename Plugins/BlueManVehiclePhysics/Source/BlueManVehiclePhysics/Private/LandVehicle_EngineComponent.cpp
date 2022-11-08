#include "LandVehicle_EngineComponent.h"
#include "Net/UnrealNetwork.h"

void ULandVehicle_EngineComponent::SetGearNumber(int32 GearNumber) {
}

void ULandVehicle_EngineComponent::SetEngineThrottleInput(float ThrottleInput) {
}

void ULandVehicle_EngineComponent::GearUp() {
}

void ULandVehicle_EngineComponent::GearDown() {
}

void ULandVehicle_EngineComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ULandVehicle_EngineComponent, CurrentGear);
}

ULandVehicle_EngineComponent::ULandVehicle_EngineComponent() {
    this->Mesh = NULL;
    this->TorqueCurve = NULL;
    this->AutomaticGearbox = true;
    this->ReverseSpeed = 10.00f;
    this->MaxSpeedInReverse = 50.00f;
    this->MaxForwardSpeed = 250.00f;
    this->MaxRPM = 15000.00f;
    this->RPMMultiplier = 0.50f;
    this->EngineNeutralRevTime = 0.50f;
    this->TransmissionEfficiency = 0.70f;
    this->DifferentialRatio = 2.10f;
    this->EngineShaft_SlowdownMultiplier = 0.40f;
    this->GearChangeTime = 1.00f;
    this->ThrottleSensitivity = 1.00f;
    this->RPM = 0.00f;
    this->Speed = 0.00f;
    this->SpeedKPH = 0.00f;
}

