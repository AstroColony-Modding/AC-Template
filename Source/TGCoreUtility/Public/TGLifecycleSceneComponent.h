#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "TGILifecycleStateOwner.h"
#include "TGLifecycleSceneComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TGCOREUTILITY_API UTGLifecycleSceneComponent : public USceneComponent, public ITGILifecycleStateOwner {
    GENERATED_BODY()
public:
    UTGLifecycleSceneComponent();
    
    // Fix for true pure virtual functions not being implemented
};

