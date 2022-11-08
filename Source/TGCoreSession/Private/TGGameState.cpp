#include "TGGameState.h"
#include "TGEventStreamComponent.h"

ATGGameState::ATGGameState() {
    this->EventStreamComponent = CreateDefaultSubobject<UTGEventStreamComponent>(TEXT("EventStreamComponent"));
}

