#include "SuspensionPhysics_Component.h"

class UPrimitiveComponent;

void USuspensionPhysics_Component::SetWheelData(FWheelDataStruct Data) {
}

void USuspensionPhysics_Component::SetSteering(float Steering) {
}

void USuspensionPhysics_Component::SetMesh(UPrimitiveComponent* Mesh_Input) {
}

void USuspensionPhysics_Component::SetHandbrake(bool HandbrakeInput) {
}

void USuspensionPhysics_Component::SetDriveForce(float ForceInput) {
}

void USuspensionPhysics_Component::SetBrakingForce(float ForceInput) {
}

float USuspensionPhysics_Component::GetWheelSuspensionOffset() {
    return 0.0f;
}

UPrimitiveComponent* USuspensionPhysics_Component::GetWheelMesh() {
    return NULL;
}

FVector USuspensionPhysics_Component::GetWheelLocation() {
    return FVector{};
}

FWheelDataStruct USuspensionPhysics_Component::GetWheelData() {
    return FWheelDataStruct{};
}

void USuspensionPhysics_Component::DestroyWheel() {
}

void USuspensionPhysics_Component::CreateConstraint() {
}

USuspensionPhysics_Component::USuspensionPhysics_Component() {
    this->SuspensionTraceChannel = ECC_Visibility;
    this->Debug = false;
    this->SphereTrace = true;
    this->AffectedByHandbrake = false;
    this->WheelMeshComponent = NULL;
    this->WheelTemplate = NULL;
    this->CollisionMesh = NULL;
    this->FlipWheelRotation = false;
    this->Scale = 1.00f;
    this->IsDriveWheel = false;
    this->InAirWheelRotationMultiplier = 0.05f;
    this->AckermanRatio = 0.50f;
    this->InvertAckermanSteering = false;
    this->DoNotUseRestPositionAsCamberNeautralPosition = false;
    this->CamberNeautralPosition = 0.40f;
    this->CamberPositiveAngle = 7.00f;
    this->CamberNegativeAngle = -4.00f;
    this->NormalSteeringAngle = 40.00f;
    this->SteeringCurve = NULL;
    this->GripCurve_Speed = NULL;
    this->SpeedGrip_IgnoreSteeringAngle = false;
    this->UseHandbrakeGripCurve = false;
    this->HandbrakeGripCurve = NULL;
    this->Handbrake = false;
    this->Handbrake_Multiplier = 2.00f;
    this->Handbrake_Grip = 0.60f;
    this->Handbrake_GripLimit = 1.50f;
    this->BrakingForce = 5.00f;
    this->BrakingForce_Multiplier = 2.00f;
    this->MaxBrakingForce = 5.00f;
    this->SuspensionStiffness = 10.00f;
    this->Multiplier = 5.00f;
    this->Damping = 0.20f;
    this->TireRadius = 50.00f;
    this->SuspensionLength = 100.00f;
    this->RestPosition = 0.20f;
    this->StickyTiresSpeedMultiplier = 10.00f;
    this->StickyTiresMaxForceMultiplier = 1.50f;
    this->StickyTiresRollingResistanceMultiplier = 0.50f;
    this->CorneringStiffness = 2.00f;
    this->MaxLat = 4.00f;
    this->SeeringSensitivity = 8.00f;
    this->SeeringFrictionMultiplier = 1.00f;
    this->MinGrip = 0.10f;
    this->FullThrottleSlipRatio = 1.00f;
    this->FullThrottleSlipRatioReverse = 1.00f;
    this->FullThrottleSlipLimit = 0.70f;
    this->ApplyForceAtContactPoint = false;
    this->ForceOffset = 0.00f;
    this->SlipMultiplier = 10.00f;
    this->CompressionGripRatioMax = 0.90f;
    this->CompressionGripRatioMin = 0.70f;
    this->EngineForce = 0.00f;
    this->WheelRollingResistance = 0.10f;
    this->MinDrivewheelGrip = 0.40f;
    this->Roll = 0.20f;
    this->RollB = 0.20f;
    this->MaxSpring = 1.70f;
    this->RightSuspensionComponent = NULL;
    this->OtherSuspensionComponent = NULL;
    this->HasEngineComponent = false;
    this->Owner = NULL;
    this->Compression = 0.00f;
    this->Angle = 0.00f;
    this->CamberCompression = 0.00f;
    this->AckermanLeftSide = -100.00f;
    this->AckermanRightSide = 100.00f;
    this->Wheel = NULL;
    this->WheelCollision = NULL;
    this->Mesh = NULL;
    this->TraceWorld = NULL;
}

