#pragma once
#include "CoreMinimal.h"
#include "EHVehicleDefinition.h"
#include "UObject/Interface.h"
#include "EEHVehicleAction.h"
#include "EHModularVehicleInterface.generated.h"

class AEHGrid;
class UActorComponent;

UINTERFACE(Blueprintable)
class ASTROCOLONY_API UEHModularVehicleInterface : public UInterface {
    GENERATED_BODY()
};

class ASTROCOLONY_API IEHModularVehicleInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveVehiclePart(UActorComponent* ActorComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGridVehicleSpawn(AEHGrid* Grid);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDesignerVehiclePreviewSpawn();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitVehicle(const FEHVehicleDefinition& VehicleDefinition);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FEHVehicleDefinition GetVehicleDetails();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetPossibleVehicleActions();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanExecuteAction(EEHVehicleAction VehicleAction);
    
};

