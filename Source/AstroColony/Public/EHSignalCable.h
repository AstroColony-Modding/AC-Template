#pragma once
#include "CoreMinimal.h"
#include "EHPipeObject.h"
#include "EHSignalDeviceInterface.h"
#include "EHSignalCable.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHSignalCable : public UEHPipeObject, public IEHSignalDeviceInterface {
    GENERATED_BODY()
public:
    UEHSignalCable();
    
    // Fix for true pure virtual functions not being implemented
};

