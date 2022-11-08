#pragma once
#include "CoreMinimal.h"
#include "EHCraftingObject.h"
#include "EHMetamorphosisInterface.h"
#include "EHWaterCellObject.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ASTROCOLONY_API UEHWaterCellObject : public UEHCraftingObject, public IEHMetamorphosisInterface {
    GENERATED_BODY()
public:
    UEHWaterCellObject();
    
    // Fix for true pure virtual functions not being implemented
};

