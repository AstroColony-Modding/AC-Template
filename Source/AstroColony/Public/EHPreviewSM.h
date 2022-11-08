#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "EHPreviewSM.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASTROCOLONY_API UEHPreviewSM : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UEHPreviewSM();
};

