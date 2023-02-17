#pragma once
#include "CoreMinimal.h"
#include "EHCraftingObject.h"
#include "EHBarrierGenerator.generated.h"

class AActor;
class AEHGamePlayerController;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHBarrierGenerator : public UEHCraftingObject {
    GENERATED_BODY()
public:
    UEHBarrierGenerator();
private:
    UFUNCTION(BlueprintCallable)
    void PlayerInsideBarrierChanged(const TArray<AActor*> BarrierActors, AEHGamePlayerController* PlayerController);
    
};

