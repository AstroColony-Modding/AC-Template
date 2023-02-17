#pragma once
#include "CoreMinimal.h"
#include "EHElectricDeviceInterface.h"
#include "EHPipeObject.h"
#include "EHElectricCable.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHElectricCable : public UEHPipeObject, public IEHElectricDeviceInterface {
    GENERATED_BODY()
public:
    UEHElectricCable();
    
    // Fix for true pure virtual functions not being implemented
};

