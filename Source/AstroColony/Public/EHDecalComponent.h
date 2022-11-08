#pragma once
#include "CoreMinimal.h"
#include "Components/DecalComponent.h"
#include "EHDecalComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASTROCOLONY_API UEHDecalComponent : public UDecalComponent {
    GENERATED_BODY()
public:
    UEHDecalComponent();
};

