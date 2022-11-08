#include "EHModularVehicles.h"

class APawn;

void UEHModularVehicles::UpdateVehicleName(const FString& VehicleName) {
}

void UEHModularVehicles::UpdatePartSize(const FVector& Size) {
}

void UEHModularVehicles::UpdatePartScheme(const uint8 SchemeID) {
}

void UEHModularVehicles::UpdatePartPlacement(const FVector& Placement) {
}

void UEHModularVehicles::UpdatePartColors(const TArray<FLinearColor>& Colors) {
}

void UEHModularVehicles::UpdateMirrorMode(const EEHVehiclePartMirrorType MirrorType, const bool IsSize) {
}

void UEHModularVehicles::UnregisterVehicle(const EEHVehicleType Type, APawn* Vehicle) {
}

void UEHModularVehicles::SelectVehiclePartByTypeAndTag(const EEHVehiclePartType Type, const FName Tag) {
}

void UEHModularVehicles::SelectVehiclePart(const int32 VehiclePartID, const bool IsAdding) {
}

void UEHModularVehicles::SelectVehicle(const int32 VehicleID) {
}

void UEHModularVehicles::RemoveVehicle() {
}

void UEHModularVehicles::RemoveSelectedPart() {
}

void UEHModularVehicles::RegisterVehicle(const EEHVehicleType Type, APawn* Vehicle) {
}

bool UEHModularVehicles::IsVehicleUnlocked(const EEHVehicleType VehicleType) {
    return false;
}

bool UEHModularVehicles::IsDefaultID(const int32 ID) {
    return false;
}

bool UEHModularVehicles::IsActionPossible(const FEHVehicleTypeData& VehicleData, const EEHVehicleAction VehicleAction) {
    return false;
}

void UEHModularVehicles::HandleItemUnlocked() {
}

FText UEHModularVehicles::GetVehiclePartMirrorText(const EEHVehiclePartMirrorType Mirror) {
    return FText::GetEmpty();
}

FEHVehiclePartTypeData UEHModularVehicles::GetVehiclePartData(const EEHVehiclePartType VehiclePartType) {
    return FEHVehiclePartTypeData{};
}

FEHVehicleDefinition UEHModularVehicles::GetVehicleDefinition(const int32 VehicleID) {
    return FEHVehicleDefinition{};
}

FEHVehicleTypeData UEHModularVehicles::GetVehicleData(const EEHVehicleType VehicleType) {
    return FEHVehicleTypeData{};
}

FEHPartSuffix UEHModularVehicles::GetSuffixForName(const FName& Name) {
    return FEHPartSuffix{};
}

FEHVehicleDefinition UEHModularVehicles::GetSelectedVehicleDetails() {
    return FEHVehicleDefinition{};
}

FEHVehicleTypeData UEHModularVehicles::GetSelectedVehicleData() {
    return FEHVehicleTypeData{};
}

TArray<FEHItemInstance> UEHModularVehicles::GetSelectedVehicleCost() {
    return TArray<FEHItemInstance>();
}

FEHVehiclePart UEHModularVehicles::GetSelectedPartDetails() {
    return FEHVehiclePart{};
}

EEHVehiclePartType UEHModularVehicles::GetSelectedCompatiblePartType() {
    return EEHVehiclePartType::Chassis;
}

void UEHModularVehicles::DuplicateVehicle() {
}

bool UEHModularVehicles::CanSelectedPartBeRemoved() {
    return false;
}

bool UEHModularVehicles::CanAddPart(const EEHVehiclePartType VehiclePartType) {
    return false;
}

void UEHModularVehicles::AddPart(const FTransform& Transform, const EEHVehiclePartType VehiclePartType) {
}

UEHModularVehicles::UEHModularVehicles() {
    this->SelectedVehicleID = 0;
    this->SelectedVehiclePartID = -1;
    this->IsAddingPart = false;
    this->LastVehicleDefinitionID = -1;
    this->LastVehicleInstanceID = -1;
}

