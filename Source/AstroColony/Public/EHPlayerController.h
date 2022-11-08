#pragma once
#include "CoreMinimal.h"
#include "TGPlayerController.h"
#include "EHPlayerController.generated.h"

UCLASS(Blueprintable)
class ASTROCOLONY_API AEHPlayerController : public ATGPlayerController {
    GENERATED_BODY()
public:
    AEHPlayerController();
    UFUNCTION(BlueprintCallable)
    void UpdatePresenceStatus(const FText PresenceStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandlePlayerStateInitialized();
    
};

