#pragma once
#include "CoreMinimal.h"
#include "EHConveyorObject.h"
#include "EHMetamorphosisInterface.h"
#include "EHConveyorBeltObject.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHConveyorBeltObject : public UEHConveyorObject, public IEHMetamorphosisInterface {
    GENERATED_BODY()
public:
    UEHConveyorBeltObject();
    
    // Fix for true pure virtual functions not being implemented
};

