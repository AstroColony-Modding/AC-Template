#pragma once
#include "CoreMinimal.h"
#include "EHConnectorStationObject.h"
#include "EHDockingStationObject.generated.h"

class UEHSpaceCarryComponent;

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHDockingStationObject : public UEHConnectorStationObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnOrderedAstronautsChanged);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOrderedAstronautsChanged OnOrderedAstronautsChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEHSpaceCarryComponent* SpaceCarryComponent;
    
    UEHDockingStationObject();
    UFUNCTION(BlueprintCallable)
    void TransferDroneToDockedStation();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_IncreaseAstronautsCount();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multi_DecreaseAstronautsCount();
    
};

