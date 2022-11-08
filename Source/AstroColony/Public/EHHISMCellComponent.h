#pragma once
#include "CoreMinimal.h"
#include "EHHISMComponent.h"
#include "EHHISMCellComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASTROCOLONY_API UEHHISMCellComponent : public UEHHISMComponent {
    GENERATED_BODY()
public:
    UEHHISMCellComponent();
};

