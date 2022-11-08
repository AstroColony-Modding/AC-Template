#include "EHRemoteFabricatorPawn.h"
#include "EHHierarchicalInstancedStaticMeshComponent.h"
#include "Components/SceneComponent.h"

AEHRemoteFabricatorPawn::AEHRemoteFabricatorPawn() {
    this->HISMExpeditionDrones = CreateDefaultSubobject<UEHHierarchicalInstancedStaticMeshComponent>(TEXT("HISMExpeditionDrones"));
    this->HISMComingBackDrones = CreateDefaultSubobject<UEHHierarchicalInstancedStaticMeshComponent>(TEXT("HISMComingBackDrones"));
    this->RemotlyConstructedActor = NULL;
    this->RemoteFabricatorObject = NULL;
    this->SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
}

