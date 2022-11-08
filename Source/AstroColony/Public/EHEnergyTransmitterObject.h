#pragma once
#include "CoreMinimal.h"
#include "EHCraftingObject.h"
#include "EHEnergyTransmitterObject.generated.h"

class UObject;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHEnergyTransmitterObject : public UEHCraftingObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnEnergyChanged);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* EnergyReceiver;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnergyChanged OnEnergyReceiverChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnergyChanged OnEnergyTransmitted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransmittedEnergy;
    
    UEHEnergyTransmitterObject();
    UFUNCTION(BlueprintCallable)
    void SetTransmittedEnergy(const float TransmittedEnergyIn);
    
    UFUNCTION(BlueprintCallable)
    void SelectEnergyReceiver(UObject* InEnergyReceiver);
    
    UFUNCTION(BlueprintCallable)
    void CancelEnergyReceiver();
    
};

