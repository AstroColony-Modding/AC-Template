#pragma once
#include "CoreMinimal.h"
#include "EHInteractableObject.h"
#include "EHMetamorphosisInterface.h"
#include "EHColumnObject.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHColumnObject : public UEHInteractableObject, public IEHMetamorphosisInterface {
    GENERATED_BODY()
public:
    UEHColumnObject();
    
    // Fix for true pure virtual functions not being implemented
};

