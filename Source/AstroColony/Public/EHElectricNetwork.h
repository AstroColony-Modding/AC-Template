#pragma once
#include "CoreMinimal.h"
#include "EHNetwork.h"
#include "EHElectricNetwork.generated.h"

class AEHGrid;

UCLASS(Blueprintable)
class ASTROCOLONY_API UEHElectricNetwork : public UEHNetwork {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPowerEfficiencyChanged);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPowerEfficiencyChanged OnPowerEfficiencyChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProducedElectricity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ConsumedElectricity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasPowerBlockout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PowerEfficiency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GenerationEfficiency;
    
    UEHElectricNetwork();
    UFUNCTION(BlueprintCallable)
    void UpdateBlackout(AEHGrid* Grid, bool HasBlackout);
    
};

