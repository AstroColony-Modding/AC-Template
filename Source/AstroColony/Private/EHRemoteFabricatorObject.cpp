#include "EHRemoteFabricatorObject.h"

class AActor;
class UEHAIFabricatorDroneObject;

void UEHRemoteFabricatorObject::SelectRemoteConstruction(AActor* NewRemoteConstruction) {
}

void UEHRemoteFabricatorObject::DroneReturnedFromExpedition(UEHAIFabricatorDroneObject* FabricatorDrone) {
}

void UEHRemoteFabricatorObject::CancelRemoteConstruction() {
}

UEHRemoteFabricatorObject::UEHRemoteFabricatorObject() {
    this->FabricatorDroneItem = NULL;
    this->RemoteConstruction = NULL;
}

