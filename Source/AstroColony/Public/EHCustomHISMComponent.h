#pragma once
#include "CoreMinimal.h"
#include "EHHISMCellComponent.h"
#include "EHCustomHISMComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASTROCOLONY_API UEHCustomHISMComponent : public UEHHISMCellComponent {
    GENERATED_BODY()
public:
    UEHCustomHISMComponent();
};

