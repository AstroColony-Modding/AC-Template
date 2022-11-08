#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EHInteractiveActor.h"
#include "EHDrillActor.generated.h"

UCLASS(Blueprintable)
class ASTROCOLONY_API AEHDrillActor : public AEHInteractiveActor {
    GENERATED_BODY()
public:
    AEHDrillActor();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RecoverDrillPosition(const FIntVector& Coord, const bool IsDrillingGround);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnResourceMined();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGroundMined();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDrillingStopped();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MoveDrillToMiningPosition(const FIntVector& Coord, const bool IsDrillingGround);
    
};

