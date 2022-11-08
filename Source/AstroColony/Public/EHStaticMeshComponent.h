#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "EHStaticMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASTROCOLONY_API UEHStaticMeshComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UEHStaticMeshComponent();
};

