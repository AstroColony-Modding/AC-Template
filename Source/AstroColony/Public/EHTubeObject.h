#pragma once
#include "CoreMinimal.h"
#include "EHConveyorObject.h"
#include "EHMetamorphosisInterface.h"
#include "EHTubeObject.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHTubeObject : public UEHConveyorObject, public IEHMetamorphosisInterface {
    GENERATED_BODY()
public:
    UEHTubeObject();
    
    // Fix for true pure virtual functions not being implemented
};

