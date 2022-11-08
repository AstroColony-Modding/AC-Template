#include "EHDeviceObject.h"
#include "Net/UnrealNetwork.h"

void UEHDeviceObject::OnRep_ChildActor() {
}

void UEHDeviceObject::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UEHDeviceObject, ChildActor);
}

UEHDeviceObject::UEHDeviceObject() {
    this->ChildActor = NULL;
    this->IsSwitchedOn = true;
}

