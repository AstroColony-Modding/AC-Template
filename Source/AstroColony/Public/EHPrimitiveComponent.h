#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "EHPrimitiveComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASTROCOLONY_API UEHPrimitiveComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UEHPrimitiveComponent();
};

