#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EHElectricityReactor.h"
#include "EHBatteryObject.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHBatteryObject : public UEHElectricityReactor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnBatteryChargeStateChanged);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsBatteryCharging;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 StoredEnergy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle EnergyStoreTimerHandle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBatteryChargeStateChanged OnBatteryChargeStateChanged;
    
    UEHBatteryObject();
    UFUNCTION(BlueprintCallable)
    void ChageBatteryChargingState(const bool IsBatteryChargingIn);
    
};

