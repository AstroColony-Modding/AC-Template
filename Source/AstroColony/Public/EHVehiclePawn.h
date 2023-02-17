#pragma once
#include "CoreMinimal.h"
#include "VehiclePhysicsActor.h"
#include "EHIndicationInterface.h"
#include "EHModularVehicleInterface.h"
#include "EHPlayerWorldInteractionInterface.h"
#include "EHSaveGameInterface.h"
#include "EHVehiclePawn.generated.h"

class AEHGamePlayerController;
class AEHGrid;

UCLASS(Abstract, Blueprintable)
class ASTROCOLONY_API AEHVehiclePawn : public AVehiclePhysicsActor, public IEHPlayerWorldInteractionInterface, public IEHModularVehicleInterface, public IEHSaveGameInterface, public IEHIndicationInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AEHGamePlayerController* GamePlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SerializedActorUniqueName;
    
public:
    AEHVehiclePawn();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPossesed();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandlePlayerLeftGrid(AEHGrid* Grid);
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerEnteredGrid(AEHGrid* Grid);
    
    
    // Fix for true pure virtual functions not being implemented
};

