#pragma once
#include "CoreMinimal.h"
#include "EHElectricityReactor.h"
#include "Engine/EngineTypes.h"
#include "EHBatteryObject.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHBatteryObject : public UEHElectricityReactor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnBatteryChargeStateChanged);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsBatteryCharging;
    
    UPROPERTY(EditAnywhere)
    uint8 StoredEnergy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle EnergyStoreTimerHandle;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBatteryChargeStateChanged OnBatteryChargeStateChanged;
    
    UEHBatteryObject();
    UFUNCTION(BlueprintCallable)
    void ChageBatteryChargingState(const bool IsBatteryChargingIn);
    
};

