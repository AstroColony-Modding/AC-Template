#pragma once
#include "CoreMinimal.h"
#include "EHWaterDeviceInterface.h"
#include "EHPipeObject.h"
#include "EHWaterPipe.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHWaterPipe : public UEHPipeObject, public IEHWaterDeviceInterface {
    GENERATED_BODY()
public:
    UEHWaterPipe();
    
    // Fix for true pure virtual functions not being implemented
};

