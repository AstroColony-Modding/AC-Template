#include "TGEmptyActor.h"
#include "Components/SceneComponent.h"

ATGEmptyActor::ATGEmptyActor() {
    this->Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
}

