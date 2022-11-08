#include "VoxelDisableEditsBox.h"
#include "Components/BoxComponent.h"

AVoxelDisableEditsBox::AVoxelDisableEditsBox() {
    this->Box = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
}

