#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EHSpaceShuttleActor.generated.h"

class UEHSpaceCarryComponent;

UCLASS(Blueprintable)
class ASTROCOLONY_API AEHSpaceShuttleActor : public AActor {
    GENERATED_BODY()
public:
    AEHSpaceShuttleActor();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpaceShuttleUndocked();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSpaceShuttleDocked();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEHSpaceCarryComponent* GetSpaceCarryComponent();
    
};

