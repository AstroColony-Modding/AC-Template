#pragma once
#include "CoreMinimal.h"
#include "EHInteractionInterface.h"
#include "EHRemoteEnergyInterface.generated.h"

class UEHEnergyTransmitterObject;
class UTexture2D;

UINTERFACE()
class ASTROCOLONY_API UEHRemoteEnergyInterface : public UEHInteractionInterface {
    GENERATED_BODY()
};

class ASTROCOLONY_API IEHRemoteEnergyInterface : public IEHInteractionInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RemoveEnergyTransmitter(UEHEnergyTransmitterObject* EnergyTransmitter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEnergyProvided(float Energy, UEHEnergyTransmitterObject* EnergyTransmitter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsPowerActivated();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName GetUniqueID();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetName();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UTexture2D* GetIcon();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float EnergyRequired();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanReceiveEnergy();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddEnergyTransmitter(UEHEnergyTransmitterObject* EnergyTransmitter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float AccumulatedEnergy();
    
};

