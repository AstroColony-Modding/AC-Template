#pragma once
#include "CoreMinimal.h"
#include "EHInteractableObject.h"
#include "EHMetamorphosisInterface.h"
#include "EHPipeObject.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHPipeObject : public UEHInteractableObject, public IEHMetamorphosisInterface {
    GENERATED_BODY()
public:
    UEHPipeObject();
    
    // Fix for true pure virtual functions not being implemented
};

