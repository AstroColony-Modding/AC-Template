#pragma once
#include "CoreMinimal.h"
#include "EHElectricityReactor.h"
#include "EHRemoteEnergyInterface.h"
#include "EHEnergyReceiverObject.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHEnergyReceiverObject : public UEHElectricityReactor, public IEHRemoteEnergyInterface {
    GENERATED_BODY()
public:
    UEHEnergyReceiverObject();
    
    // Fix for true pure virtual functions not being implemented
};

