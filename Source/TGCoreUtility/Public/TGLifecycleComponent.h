#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TGILifecycleStateOwner.h"
#include "TGLifecycleComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TGCOREUTILITY_API UTGLifecycleComponent : public UActorComponent, public ITGILifecycleStateOwner {
    GENERATED_BODY()
public:
    UTGLifecycleComponent();
    
    // Fix for true pure virtual functions not being implemented
};

