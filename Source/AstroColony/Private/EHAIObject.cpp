#include "EHAIObject.h"
#include "Net/UnrealNetwork.h"

class AEHGrid;
class UEHInteractableObject;
class UEHItem;

void UEHAIObject::TransferAIToAnotherGrid(AEHGrid* AnotherGrid) {
}

void UEHAIObject::RequestPath(const FIntVector& DestinationCoord, const int32 RetryCountIn) {
}

void UEHAIObject::Multi_RemoveAttachedItem_Implementation() {
}

void UEHAIObject::Multi_AddAttachedItem_Implementation(UEHItem* Item) {
}

bool UEHAIObject::IsTransferedTo(AEHGrid* TestedGrid) {
    return false;
}

bool UEHAIObject::IsTransfered() {
    return false;
}

bool UEHAIObject::IsInsideBuilding() {
    return false;
}

bool UEHAIObject::HasWorkplaceAssigned() {
    return false;
}

void UEHAIObject::GoOnPathDirectly(const TArray<FIntVector>& FullPath) {
}

UEHInteractableObject* UEHAIObject::GetWorkplace() {
    return NULL;
}

FIntVector UEHAIObject::GetNormalizedDirection() {
    return FIntVector{};
}

UEHInteractableObject* UEHAIObject::GetEnteredBuilding() {
    return NULL;
}

UEHItem* UEHAIObject::GetCarriedItem() {
    return NULL;
}

void UEHAIObject::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UEHAIObject, AIProfession);
}

UEHAIObject::UEHAIObject() {
    this->AIProfession = EAIProfession::None;
    this->AttachedResourceHeight = 0.00f;
    this->AttachedResourceScale = 1.00f;
    this->ResourceHolderItem = NULL;
    this->AttachedResource = NULL;
    this->AttachedVisualItem = NULL;
    this->AttachedVisualItemHeight = 0.00f;
    this->IsMovingOnPath = false;
    this->IsNudged = false;
    this->IsBoarding = false;
    this->RetryCount = 0;
    this->CurrentPathIndex = -1;
    this->AIExternalDependenciesDataObject = NULL;
}

