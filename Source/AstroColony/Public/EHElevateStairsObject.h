#pragma once
#include "CoreMinimal.h"
#include "EHColliderInterface.h"
#include "EHElevateObject.h"
#include "EHElevateStairsObject.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHElevateStairsObject : public UEHElevateObject, public IEHColliderInterface {
    GENERATED_BODY()
public:
    UEHElevateStairsObject();
    
    // Fix for true pure virtual functions not being implemented
};

