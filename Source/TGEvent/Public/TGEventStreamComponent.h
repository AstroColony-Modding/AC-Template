#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TGEventStreamOwner.h"
#include "TGEventStreamComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TGEVENT_API UTGEventStreamComponent : public UActorComponent, public ITGEventStreamOwner {
    GENERATED_BODY()
public:
    UTGEventStreamComponent();
    
    // Fix for true pure virtual functions not being implemented
};

