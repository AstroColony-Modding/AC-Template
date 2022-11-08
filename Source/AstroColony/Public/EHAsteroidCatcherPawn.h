#pragma once
#include "CoreMinimal.h"
#include "EHInteractivePawn.h"
#include "EHAsteroidCatcherPawn.generated.h"

UCLASS(Blueprintable)
class ASTROCOLONY_API AEHAsteroidCatcherPawn : public AEHInteractivePawn {
    GENERATED_BODY()
public:
    AEHAsteroidCatcherPawn();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ActivateAutoCatching();
    
};

