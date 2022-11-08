#pragma once
#include "CoreMinimal.h"
#include "GroomComponent.h"
#include "EHGroomComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASTROCOLONY_API UEHGroomComponent : public UGroomComponent {
    GENERATED_BODY()
public:
    UEHGroomComponent();
};

