#pragma once
#include "CoreMinimal.h"
#include "EHInteractableObject.h"
#include "EHMetamorphosisInterface.h"
#include "EHFoundationObject.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHFoundationObject : public UEHInteractableObject, public IEHMetamorphosisInterface {
    GENERATED_BODY()
public:
    UEHFoundationObject();
    
    // Fix for true pure virtual functions not being implemented
};

