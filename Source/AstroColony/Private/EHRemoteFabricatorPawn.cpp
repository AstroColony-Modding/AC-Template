#include "EHRemoteFabricatorPawn.h"
#include "Components/SceneComponent.h"
#include "EHHierarchicalInstancedStaticMeshComponent.h"

AEHRemoteFabricatorPawn::AEHRemoteFabricatorPawn() {
    this->HISMExpeditionDrones = CreateDefaultSubobject<UEHHierarchicalInstancedStaticMeshComponent>(TEXT("HISMExpeditionDrones"));
    this->HISMComingBackDrones = CreateDefaultSubobject<UEHHierarchicalInstancedStaticMeshComponent>(TEXT("HISMComingBackDrones"));
    this->RemotlyConstructedActor = NULL;
    this->RemoteFabricatorObject = NULL;
    this->SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
}

