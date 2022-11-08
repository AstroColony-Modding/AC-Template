#include "TGEventListenerComponent.h"
#include "Templates/SubclassOf.h"

class UTGEventListener;
class AActor;

UTGEventListener* UTGEventListenerComponent::Register(TSubclassOf<UTGEventListener> EventListenerClass, const AActor* FilteredActor) {
    return NULL;
}

void UTGEventListenerComponent::ManuallyUnregister(UTGEventListener* EventListener) {
}

UTGEventListenerComponent::UTGEventListenerComponent() {
}

