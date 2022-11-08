#pragma once
#include "CoreMinimal.h"
#include "EHElectricDeviceInterface.h"
#include "EHProductionObject.h"
#include "EHWaterDeviceInterface.h"
#include "EHCraftingObject.generated.h"

class UEHWaterNetwork;
class UEHElectricNetwork;
class AActor;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHCraftingObject : public UEHProductionObject, public IEHElectricDeviceInterface, public IEHWaterDeviceInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCraftingUtilityChanged);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEHElectricNetwork* ElectricNetwork;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ProducedElectricity, meta=(AllowPrivateAccess=true))
    int32 ProducedElectricity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ConsumedElectricity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ConsumedWater;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ProducedWater, meta=(AllowPrivateAccess=true))
    int32 ProducedWater;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEHWaterNetwork* WaterNetwork;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCraftingUtilityChanged OnCraftingElectricityChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCraftingUtilityChanged OnCraftingWaterChanged;
    
    UEHCraftingObject();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ProducedWater();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ProducedElectricity();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPower() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetProducedElectricity();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsWaterDevice();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetConsumedElectricity();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetChildActor();
    
    
    // Fix for true pure virtual functions not being implemented
};

